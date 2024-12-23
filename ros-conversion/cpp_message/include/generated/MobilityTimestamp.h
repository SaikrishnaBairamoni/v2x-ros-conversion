/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_2023-06-22.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -no-gen-APER -no-gen-JER`
 */

#ifndef	_MobilityTimestamp_H_
#define	_MobilityTimestamp_H_


#include <asn_application.h>

/* Including external dependencies */
#include <IA5String.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MobilityTimestamp */
typedef IA5String_t	 MobilityTimestamp_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MobilityTimestamp_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MobilityTimestamp;
asn_struct_free_f MobilityTimestamp_free;
asn_struct_print_f MobilityTimestamp_print;
asn_constr_check_f MobilityTimestamp_constraint;
ber_type_decoder_f MobilityTimestamp_decode_ber;
der_type_encoder_f MobilityTimestamp_encode_der;
xer_type_decoder_f MobilityTimestamp_decode_xer;
xer_type_encoder_f MobilityTimestamp_encode_xer;
oer_type_decoder_f MobilityTimestamp_decode_oer;
oer_type_encoder_f MobilityTimestamp_encode_oer;
per_type_decoder_f MobilityTimestamp_decode_uper;
per_type_encoder_f MobilityTimestamp_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityTimestamp_H_ */
#include <asn_internal.h>
