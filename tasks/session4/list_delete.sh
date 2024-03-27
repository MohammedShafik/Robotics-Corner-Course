#!/bin/bash

for file in "dip"/*; do
if [ -f $file ]; then
echo $file
rm $file
fi
done
rmdir dip
echo "dip folder removed with its contents"

