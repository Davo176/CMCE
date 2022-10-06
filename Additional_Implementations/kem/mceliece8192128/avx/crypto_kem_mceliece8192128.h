#ifndef crypto_kem_mceliece8192128_H
#define crypto_kem_mceliece8192128_H

#define crypto_kem_mceliece8192128_avx_PUBLICKEYBYTES 1357824
#define crypto_kem_mceliece8192128_avx_SECRETKEYBYTES 14120
#define crypto_kem_mceliece8192128_avx_CIPHERTEXTBYTES 240
#define crypto_kem_mceliece8192128_avx_BYTES 32
 
#ifdef __cplusplus
extern "C" {
#endif
extern int crypto_kem_mceliece8192128_avx_keypair(unsigned char *,unsigned char *);
extern int crypto_kem_mceliece8192128_avx_enc(unsigned char *,unsigned char *,const unsigned char *);
extern int crypto_kem_mceliece8192128_avx_dec(unsigned char *,const unsigned char *,const unsigned char *);
#ifdef __cplusplus
}
#endif

#define crypto_kem_mceliece8192128_keypair crypto_kem_mceliece8192128_avx_keypair
#define crypto_kem_mceliece8192128_enc crypto_kem_mceliece8192128_avx_enc
#define crypto_kem_mceliece8192128_dec crypto_kem_mceliece8192128_avx_dec
#define crypto_kem_mceliece8192128_PUBLICKEYBYTES crypto_kem_mceliece8192128_avx_PUBLICKEYBYTES
#define crypto_kem_mceliece8192128_SECRETKEYBYTES crypto_kem_mceliece8192128_avx_SECRETKEYBYTES
#define crypto_kem_mceliece8192128_BYTES crypto_kem_mceliece8192128_avx_BYTES
#define crypto_kem_mceliece8192128_CIPHERTEXTBYTES crypto_kem_mceliece8192128_avx_CIPHERTEXTBYTES

#endif
