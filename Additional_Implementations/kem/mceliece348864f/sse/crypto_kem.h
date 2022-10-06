#ifndef crypto_kem_H
#define crypto_kem_H

#include "crypto_kem_mceliece348864f.h"

#define crypto_kem_keypair crypto_kem_mceliece348864f_keypair
#define crypto_kem_enc crypto_kem_mceliece348864f_enc
#define crypto_kem_dec crypto_kem_mceliece348864f_dec
#define crypto_kem_PUBLICKEYBYTES crypto_kem_mceliece348864f_PUBLICKEYBYTES
#define crypto_kem_SECRETKEYBYTES crypto_kem_mceliece348864f_SECRETKEYBYTES
#define crypto_kem_BYTES crypto_kem_mceliece348864f_BYTES
#define crypto_kem_CIPHERTEXTBYTES crypto_kem_mceliece348864f_CIPHERTEXTBYTES
#define crypto_kem_PRIMITIVE "mceliece348864f"

#endif