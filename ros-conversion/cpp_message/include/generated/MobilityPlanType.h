/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_2023-06-22.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -no-gen-APER -no-gen-JER`
 */

#ifndef	_MobilityPlanType_H_
#define	_MobilityPlanType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MobilityPlanType {
	MobilityPlanType_unknown	= 0,
	MobilityPlanType_changingLanesToTheLeft	= 1,
	MobilityPlanType_changingLanesToTheRight	= 2,
	MobilityPlanType_joinPlatoonAtRear	= 3,
	MobilityPlanType_platoonFollowerJoin	= 4,
	MobilityPlanType_joinPlatoonFromFront	= 5,
	MobilityPlanType_platoonFrontJoin	= 6,
	MobilityPlanType_cutInFromSide	= 7,
	MobilityPlanType_platoonCutInJoin	= 8,
	MobilityPlanType_stopCreateGap	= 9,
	MobilityPlanType_cutInFrontDone	= 10,
	MobilityPlanType_cutInMidOrRearDone	= 11,
	MobilityPlanType_platoonDeparture	= 12,
	MobilityPlanType_deleteMember	= 13
	/*
	 * Enumeration is extensible
	 */
} e_MobilityPlanType;

/* MobilityPlanType */
typedef long	 MobilityPlanType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MobilityPlanType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MobilityPlanType;
extern const asn_INTEGER_specifics_t asn_SPC_MobilityPlanType_specs_1;
asn_struct_free_f MobilityPlanType_free;
asn_struct_print_f MobilityPlanType_print;
asn_constr_check_f MobilityPlanType_constraint;
ber_type_decoder_f MobilityPlanType_decode_ber;
der_type_encoder_f MobilityPlanType_encode_der;
xer_type_decoder_f MobilityPlanType_decode_xer;
xer_type_encoder_f MobilityPlanType_encode_xer;
oer_type_decoder_f MobilityPlanType_decode_oer;
oer_type_encoder_f MobilityPlanType_encode_oer;
per_type_decoder_f MobilityPlanType_decode_uper;
per_type_encoder_f MobilityPlanType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityPlanType_H_ */
#include <asn_internal.h>
