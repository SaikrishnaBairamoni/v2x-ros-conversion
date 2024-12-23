/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SDSM"
 * 	found in "J2735_201603_2023-06-22.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -no-gen-APER -no-gen-JER`
 */

#ifndef	_RollRateConfidence_H_
#define	_RollRateConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RollRateConfidence {
	RollRateConfidence_unavailable	= 0,
	RollRateConfidence_degSec_100_00	= 1,
	RollRateConfidence_degSec_010_00	= 2,
	RollRateConfidence_degSec_005_00	= 3,
	RollRateConfidence_degSec_001_00	= 4,
	RollRateConfidence_degSec_000_10	= 5,
	RollRateConfidence_degSec_000_05	= 6,
	RollRateConfidence_degSec_000_01	= 7
} e_RollRateConfidence;

/* RollRateConfidence */
typedef long	 RollRateConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RollRateConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RollRateConfidence;
extern const asn_INTEGER_specifics_t asn_SPC_RollRateConfidence_specs_1;
asn_struct_free_f RollRateConfidence_free;
asn_struct_print_f RollRateConfidence_print;
asn_constr_check_f RollRateConfidence_constraint;
ber_type_decoder_f RollRateConfidence_decode_ber;
der_type_encoder_f RollRateConfidence_encode_der;
xer_type_decoder_f RollRateConfidence_decode_xer;
xer_type_encoder_f RollRateConfidence_encode_xer;
oer_type_decoder_f RollRateConfidence_decode_oer;
oer_type_encoder_f RollRateConfidence_encode_oer;
per_type_decoder_f RollRateConfidence_decode_uper;
per_type_encoder_f RollRateConfidence_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RollRateConfidence_H_ */
#include <asn_internal.h>
