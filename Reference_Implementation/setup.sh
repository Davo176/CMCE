#!/bin/bash
cd kem
allFolders=$(ls)

for folder in $allFolders
do
    cd $folder
    echo $folder
    cd nist
    touch addEncaps.c
    touch addDecaps.c
    cp ../../mceliece348864/nist/addEncaps.c addEncaps.c
    cp ../../mceliece348864/nist/addDecaps.c addDecaps.c
    cd ..
    cd ..
done