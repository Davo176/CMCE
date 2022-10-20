kat_kem.rsp: kat
	./run

kat: Makefile nist/kat_kem.c nist/rng.c nist/rng.h randombytes.h benes.c bm.c controlbits.c decrypt.c encrypt.c gf.c operations.c pk_gen.c root.c sk_gen.c synd.c transpose.c util.c    
	./build

addRand: Makefile nist/addRand.c nist/rng.c nist/rng.h randombytes.h benes.c bm.c controlbits.c decrypt.c encrypt.c gf.c operations.c pk_gen.c root.c sk_gen.c synd.c transpose.c util.c    
	gcc -O3 -march=native -mtune=native -Wall -I. -Isubroutines -DKAT -DKATNUM=`cat KATNUM` "-DCRYPTO_NAMESPACE(x)=x" "-D_CRYPTO_NAMESPACE(x)=_##x" -o addRand nist/addRand.c nist/rng.c benes.c bm.c controlbits.c decrypt.c encrypt.c gf.c operations.c pk_gen.c root.c sk_gen.c synd.c transpose.c util.c -lXKCP  -lcrypto -ldl 

addEncaps: Makefile nist/addEncaps.c nist/rng.c nist/rng.h randombytes.h benes.c bm.c controlbits.c decrypt.c encrypt.c gf.c operations.c pk_gen.c root.c sk_gen.c synd.c transpose.c util.c    
	gcc -O3 -march=native -mtune=native -Wall -I. -Isubroutines -DKAT -DKATNUM=`cat KATNUM` "-DCRYPTO_NAMESPACE(x)=x" "-D_CRYPTO_NAMESPACE(x)=_##x" -o addEncaps nist/addEncaps.c nist/rng.c benes.c bm.c controlbits.c decrypt.c encrypt.c gf.c operations.c pk_gen.c root.c sk_gen.c synd.c transpose.c util.c -lXKCP  -lcrypto -ldl 

addDecaps: Makefile nist/addDecaps.c nist/rng.c nist/rng.h randombytes.h benes.c bm.c controlbits.c decrypt.c encrypt.c gf.c operations.c pk_gen.c root.c sk_gen.c synd.c transpose.c util.c    
	gcc -O3 -march=native -mtune=native -Wall -I. -Isubroutines -DKAT -DKATNUM=`cat KATNUM` "-DCRYPTO_NAMESPACE(x)=x" "-D_CRYPTO_NAMESPACE(x)=_##x" -o addDecaps nist/addDecaps.c nist/rng.c benes.c bm.c controlbits.c decrypt.c encrypt.c gf.c operations.c pk_gen.c root.c sk_gen.c synd.c transpose.c util.c -lXKCP  -lcrypto -ldl 

createKeyPairs: Makefile nist/createKeyPairs.c nist/rng.c nist/rng.h randombytes.h benes.c bm.c controlbits.c decrypt.c encrypt.c gf.c operations.c pk_gen.c root.c sk_gen.c synd.c transpose.c util.c    
	gcc -O3 -march=native -mtune=native -Wall -I. -Isubroutines -DKAT -DKATNUM=`cat KATNUM` "-DCRYPTO_NAMESPACE(x)=x" "-D_CRYPTO_NAMESPACE(x)=_##x" -o createKeyPairs nist/createKeyPairs.c nist/rng.c benes.c bm.c controlbits.c decrypt.c encrypt.c gf.c operations.c pk_gen.c root.c sk_gen.c synd.c transpose.c util.c -lXKCP  -lcrypto -ldl 

createEncapsulations: Makefile nist/createEncapsulations.c nist/rng.c nist/rng.h randombytes.h benes.c bm.c controlbits.c decrypt.c encrypt.c gf.c operations.c pk_gen.c root.c sk_gen.c synd.c transpose.c util.c    
	gcc -O3 -march=native -mtune=native -Wall -I. -Isubroutines -DKAT -DKATNUM=`cat KATNUM` "-DCRYPTO_NAMESPACE(x)=x" "-D_CRYPTO_NAMESPACE(x)=_##x" -o createEncapsulations nist/createEncapsulations.c nist/rng.c benes.c bm.c controlbits.c decrypt.c encrypt.c gf.c operations.c pk_gen.c root.c sk_gen.c synd.c transpose.c util.c -lXKCP  -lcrypto -ldl 

checkDecapsulations: Makefile nist/checkDecapsulations.c nist/rng.c nist/rng.h randombytes.h benes.c bm.c controlbits.c decrypt.c encrypt.c gf.c operations.c pk_gen.c root.c sk_gen.c synd.c transpose.c util.c    
	gcc -O3 -march=native -mtune=native -Wall -I. -Isubroutines -DKAT -DKATNUM=`cat KATNUM` "-DCRYPTO_NAMESPACE(x)=x" "-D_CRYPTO_NAMESPACE(x)=_##x" -o checkDecapsulations nist/checkDecapsulations.c nist/rng.c benes.c bm.c controlbits.c decrypt.c encrypt.c gf.c operations.c pk_gen.c root.c sk_gen.c synd.c transpose.c util.c -lXKCP  -lcrypto -ldl 


