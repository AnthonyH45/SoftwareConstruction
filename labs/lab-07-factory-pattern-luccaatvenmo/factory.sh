#!/bin/bash

echo "----------------------------"
echo "TEST ONE"
echo "----------------------------"
command1=$(./calculator 3 + 2 \* 10)
compare1=$'5.000000 * 10.000000'
echo "./calculator 3 + 2 \* 10"
if [ "$command1" == "$compare1" ]
then
    echo "PASSED"
else
    echo "FAILED"
fi

echo "----------------------------"
echo "TEST TWO"
echo "----------------------------"

command2=$(./calculator 3 + 2 / 10)
compare2=$'5.000000 / 10.000000'
echo  "./calculator 3 + 2 / 10"
if [ "$command2" == "$compare2" ]
then
    echo "PASSED"
else
    echo "FAILED"
fi

echo "----------------------------"
echo "TEST THREE"
echo "----------------------------"
echo "./calculator 3 + 2 + 9"
command3=$(./calculator 3 + 2 + 9)
compare3=$'5.000000 + 9.000000'

if [ "$command3" == "$compare3" ]
then
    echo "PASSED"
else
    echo "FAILED"
fi

echo "----------------------------"
echo "TEST FOUR"
echo "----------------------------"
echo "./calculator 6 \* 6 / 6"
command4=$(./calculator 6 \* 6 / 6)
compare4=$'36.000000 / 6.000000'

if [ "$command4" == "$compare4" ]
then
    echo "PASSED"
else
    echo "FAILED"
fi

echo "----------------------------"
echo "TEST FIVE"
echo "----------------------------"
echo "./calculator 7 / 5 + 9 - 4 \* 10 / 7"
command5=$(./calculator 7 / 5 + 9 - 4 \* 10 / 7)
compare5=$'64.000000 / 7.000000'

if [ "$command5" == "$compare5" ]
then
    echo "PASSED"
else
    echo "FAILED"
fi

echo "----------------------------"
echo "TEST SIX"
echo "----------------------------"
echo "./calculator 2 / 3 + 4 / 8 \* 9 - 10"
command5=$(./calculator 2 / 3 + 4 / 8 \* 9 - 10)
compare5=$'0.583333 * 9.000000 - 10.000000'

if [ "$command5" == "$compare5" ]
then
    echo "PASSED"
else
    echo "FAILED"
fi

echo "----------------------------"
echo "TEST SEVEN"
echo "----------------------------"
echo "./calculator 325 \ 234 + 7 - 4 \* 4 - 235.23 + 235 / 325 \* 2"
command5=$(./calculator 325 \ 234 + 7 - 4 \* 4 - 235.23 + 235 / 325 \* 2)
compare5=$'2.916215 * 2.000000'

if [ "$command5" == "$compare5" ]
then
    echo "PASSED"
else
    echo "FAILED"
fi

echo "----------------------------"
echo "TEST EIGHT"
echo "----------------------------"
echo "./calculator 5 - 23 - 235 \* 1.56 / 34"
command5=$(./calculator 5 - 23 - 235 \* 1.56 / 34)
compare5=$'-394.680000 / 34.000000'

if [ "$command5" == "$compare5" ]
then
    echo "PASSED"
else
    echo "FAILED"
fi

echo "----------------------------"
echo "TEST NINE"
echo "----------------------------"
echo "./calculator 6 \* 3 \* 4.63 / 34"
command5=$(./calculator 6 \* 3 \* 4.63 / 34)
compare5=$'83.340000 / 34.000000'

if [ "$command5" == "$compare5" ]
then
    echo "PASSED"
else
    echo "FAILED"
fi

echo "----------------------------"
echo "TEST TEN"
echo "----------------------------"
echo "./calculator 3 + 4 - 4 / 6.24 \* 4.2 + 69 / 12 - 420.69 + 3155.23523 \* 2 - 4"
command5=$(./calculator 3 + 4 - 4 / 6.24 \* 4.2 + 69 / 12 - 420.69 + 3155.23523 \* 2 - 4)
compare5=$'2740.463499 * 2.000000 - 4.000000'

if [ "$command5" == "$compare5" ]
then
    echo "PASSED"
else
    echo "FAILED"
fi

echo "----------------------------"
echo "DONE TESTING"
echo "----------------------------"