#!/bin/sh

INPUTS=("first input" "second input" "third input")


#echo "Executing ./c-echo ${INPUTS[2]}"
#./c-echo ${INPUTS[2]}
#echo ""
#echo "Executing ./c-echo ${INPUTS[1]}"
#./c-echo ${INPUTS[1]}
#echo ""
#echo "Executing ./c-echo ${INPUTS[0]}"
#./c-echo ${INPUTS[0]}

#for input in "${INPUTS[@]}"
#do
#    echo "./c-echo ${input}"
#    ./c-echo ${input}
#    echo ""
#done

for input in "${INPUTS[@]}"
do
    echo "./c-echo ${input}"
    output=$(./c-echo ${input})
    echo "Output: \"${output}\""
    echo "Input: \"${input}\""
    if [ "${output}" = "${input}" ]
    then
        echo "Test passed"
    else
        echo "Test Failed"
    fi
    echo ""
done
