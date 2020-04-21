/*************************************************************************\
* Copyright (c) 2020 ITER Organization.
* This module is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution.
\*************************************************************************/

/*
 *  Author: Ralph Lange <ralph.lange@gmx.de>
 */

/* Simple integer tests */

#include <epicsUnitTest.h>
#include <testMain.h>

const int valRight = 5;
const int valWrong = 3;
const short valAlsoWrong = 2;
const int expected = 5;

MAIN(integerCompareTest)
{
    testPlan(3);

    testOk((expected == valRight), "expected equals valRight");
    testOk((expected != valWrong), "expected does not equal valWrong");
    testOk((expected != valAlsoWrong), "expected does not equal valAlsoWrong");
    return testDone();
}
