/*************************************************************************\
* Copyright (c) 2010 UChicago Argonne LLC, as Operator of Argonne
*     National Laboratory.
* EPICS BASE is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution.
\*************************************************************************/

/*
 * Run sample tests as a batch.
 */

#include <epicsUnitTest.h>

int stringCompareTest(void);

void epicsRunSampleTests(void)
{
    testHarness();

    runTest(stringCompareTest);

    testHarnessDone();
}
