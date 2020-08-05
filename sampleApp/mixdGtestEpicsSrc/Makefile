TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#=============================
# IOC for dbUnitTest

ifneq ($(BASE_3_14),YES)
TARGETS += $(COMMON_DIR)/dbTestIoc.dbd
DBDDEPENDS_FILES += dbTestIoc.dbd$(DEP)
dbTestIoc_DBD += menuGlobal.dbd
dbTestIoc_DBD += menuConvert.dbd
dbTestIoc_DBD += menuScan.dbd
dbTestIoc_DBD += aiRecord.dbd
TESTFILES += $(COMMON_DIR)/dbTestIoc.dbd ../test.db

testHarness_SRCS += dbTestIoc_registerRecordDeviceDriver.cpp
endif

USR_CPPFLAGS += -DUSE_TYPED_RSET

PROD_LIBS = $(EPICS_BASE_IOC_LIBS)

#=============================
# Google Tests

GTESTPROD_HOST += gsample1
gsample1_SRCS += gsample1.cpp
GTESTS += gsample1

GTESTPROD_HOST += gsample2
gsample2_SRCS += gsample2.cpp
GTESTS += gsample2

GTESTPROD_HOST += gsample3
gsample3_SRCS += gsample3.cpp
GTESTS += gsample3

#=============================
# EPICS Unit tests

TESTPROD_HOST += esample1
esample1_SRCS += esample1.c
testHarness_SRCS += esample1.c
TESTS += esample1

TESTPROD_HOST += esample2
esample2_SRCS += esample2.c
testHarness_SRCS += esample2.c
TESTS += esample2

ifneq ($(BASE_3_14),YES)
TESTPROD_HOST += esample3
esample3_SRCS += esample3.c
esample3_SRCS += dbTestIoc_registerRecordDeviceDriver.cpp
testHarness_SRCS += esample3.c
TESTS += esample3
endif

TESTSCRIPTS_HOST += $(TESTS:%=%.t)

#=============================
# Test harness for RTEMS/vxWorks

# The testHarness runs all the test programs in a known working order.
testHarness_SRCS += epicsRunSampleTests.c

sampleTestHarness_SRCS += $(testHarness_SRCS)
sampleTestHarness_SRCS_RTEMS += rtemsTestHarness.c

PROD_vxWorks = sampleTestHarness
PROD_RTEMS += sampleTestHarness

TESTSPEC_vxWorks = sampleTestHarness.munch; epicsRunSampleTests
TESTSPEC_RTEMS = sampleTestHarness.boot; epicsRunSampleTests

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE
-include $(GTEST)/cfg/compat.RULES_BUILD
