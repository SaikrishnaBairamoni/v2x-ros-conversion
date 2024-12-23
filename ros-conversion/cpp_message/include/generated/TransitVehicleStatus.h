/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_2023-06-22.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -no-gen-APER -no-gen-JER`
 */

#ifndef	_TransitVehicleStatus_H_
#define	_TransitVehicleStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TransitVehicleStatus {
	TransitVehicleStatus_loading	= 0,
	TransitVehicleStatus_anADAuse	= 1,
	TransitVehicleStatus_aBikeLoad	= 2,
	TransitVehicleStatus_doorOpen	= 3,
	TransitVehicleStatus_charging	= 4,
	TransitVehicleStatus_atStopLine	= 5
} e_TransitVehicleStatus;

/* TransitVehicleStatus */
typedef BIT_STRING_t	 TransitVehicleStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TransitVehicleStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TransitVehicleStatus;
asn_struct_free_f TransitVehicleStatus_free;
asn_struct_print_f TransitVehicleStatus_print;
asn_constr_check_f TransitVehicleStatus_constraint;
ber_type_decoder_f TransitVehicleStatus_decode_ber;
der_type_encoder_f TransitVehicleStatus_encode_der;
xer_type_decoder_f TransitVehicleStatus_decode_xer;
xer_type_encoder_f TransitVehicleStatus_encode_xer;
oer_type_decoder_f TransitVehicleStatus_decode_oer;
oer_type_encoder_f TransitVehicleStatus_encode_oer;
per_type_decoder_f TransitVehicleStatus_decode_uper;
per_type_encoder_f TransitVehicleStatus_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TransitVehicleStatus_H_ */
#include <asn_internal.h>
