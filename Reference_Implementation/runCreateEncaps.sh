#!/bin/bash
cd kem
allFolders=$(ls)

for folder in $allFolders
do
    cd $folder
    echo $folder
    make createEncapsulations
    ./createEncapsulations
    
    cd ..
done