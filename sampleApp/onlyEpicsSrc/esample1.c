/*************************************************************************\
* Copyright (c) 2020 ITER Organization.
* This module is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution.
\*************************************************************************/

/*
 *  Author: Ralph Lange <ralph.lange@gmx.de>
 */

/* Simple string tests */

#include <string.h>

#include <epicsUnitTest.h>
#include <testMain.h>

const char *valRight = "hello EPICS";
const char *valWrong = "hello google";
const char *expected = "hello EPICS";

MAIN(stringCompareTest)
{
    testPlan(2);

    testOk(!strcmp(expected, valRight), "expected equals valRight");
    testOk(!!strcmp(expected, valWrong), "expected does not equal valWrong");
    return testDone();
}
