/*************************************************************************\
* Copyright (c) 2020 ITER Organization.
* This module is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution.
\*************************************************************************/

/*
 *  Author: Ralph Lange <ralph.lange@gmx.de>
 */

/* Test inside an IOC */

#include <dbUnitTest.h>
#include <epicsUnitTest.h>
#include <dbAccess.h>
#include <errlog.h>
#include <aiRecord.h>

#include <testMain.h>

void dbTestIoc_registerRecordDeviceDriver(struct dbBase *);

MAIN(dbUnitTest)
{
    testPlan(0);

    testDiag("Test that runs inside an IOC using dbUnitTest");
    testdbPrepare();

    testdbReadDatabase("dbTestIoc.dbd", NULL, NULL);
    dbTestIoc_registerRecordDeviceDriver(pdbbase);
    testdbReadDatabase("test.db", NULL, NULL);

    eltc(0);
    testIocInitOk();
    eltc(1);

    testdbPutFieldOk("rec.DESC", DBR_STRING, "test string");

    testdbGetFieldEqual("rec.DESC", DBR_STRING, "test string");

    testIocShutdownOk();
    testdbCleanup();

    return testDone();
}
