ARG DOCKER_ORG="usdotfhwastoldev"
ARG DOCKER_TAG="develop-humble"
FROM ${DOCKER_ORG}/carma-base:${DOCKER_TAG} as base_image

FROM base_image as setup
ARG GIT_BRANCH="develop-humble"

RUN mkdir ~/src
COPY --chown=carma . /home/carma/src/
RUN ~/src/docker/checkout.bash -b ${GIT_BRANCH}

RUN chmod +x ~/src/docker/install.sh && \
    if [ -f /opt/ros/humble/setup.bash ]; then \
        source /opt/ros/humble/setup.bash; \
    else \
        echo "ERROR: ROS Humble setup.bash not found!" && exit 1; \
    fi && \
    apt-get update && \
    apt-get install -y ros-humble-ros-environment && \
    ~/src/docker/install.sh

FROM base_image

ARG BUILD_DATE="NULL"
ARG VERSION="NULL"
ARG VCS_REF="NULL"

LABEL org.label-schema.schema-version="1.0"
LABEL org.label-schema.name="v2x-ros-conversion"
LABEL org.label-schema.description="V2X-ros-conversion docker image"
LABEL org.label-schema.vendor="Leidos"
LABEL org.label-schema.version=${VERSION}
LABEL org.label-schema.url="https://highways.dot.gov/research/research-programs/operations/CARMA"
LABEL org.label-schema.vcs-url="https://github.com/usdot-fhwa-stol/carma-messenger"
LABEL org.label-schema.vcs-ref=${VCS_REF}
LABEL org.label-schema.build-date=${BUILD_DATE}

COPY --from=setup /opt/carma/install /opt/carma/install

RUN pip install future

CMD  [ "wait-for-it", "localhost:11311", "--", "ros2", "v2x-ros-conversion", "v2x-ros-conversion.launch.py" ]
