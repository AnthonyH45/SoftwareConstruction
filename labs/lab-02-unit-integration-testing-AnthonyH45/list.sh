#!/bin/sh

for file in ./*
do
    echo $(basename "$file")
done
