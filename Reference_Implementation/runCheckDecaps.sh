#!/bin/bash
cd kem
allFolders=$(ls)

for folder in $allFolders
do
    cd $folder
    echo $folder
    make checkDecapsulations
    ./checkDecapsulations
    echo $folder
    sleep 5
    cd ..
done