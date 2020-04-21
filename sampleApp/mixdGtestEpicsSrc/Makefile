TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

# to allow the locally created perl tool to be found
GTEST_BIN = $(INSTALL_BIN)

#=============================
# Build tests

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

PROD_LIBS += Com

TESTPROD_HOST += esample1
esample1_SRCS += esample1.c
testHarness_SRCS += esample1.c
TESTS += esample1

TESTPROD_HOST += esample2
esample2_SRCS += esample2.c
testHarness_SRCS += esample2.c
TESTS += esample2

# The testHarness runs all the test programs in a known working order.
testHarness_SRCS += epicsRunSampleTests.c

sampleTestHarness_SRCS += $(testHarness_SRCS)
sampleTestHarness_SRCS_RTEMS += rtemsTestHarness.c

PROD_vxWorks = sampleTestHarness
PROD_RTEMS += sampleTestHarness

TESTSPEC_vxWorks = sampleTestHarness.munch; epicsRunSampleTests
TESTSPEC_RTEMS = sampleTestHarness.boot; epicsRunSampleTests

TESTSCRIPTS_HOST += $(TESTS:%=%.t)

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE
