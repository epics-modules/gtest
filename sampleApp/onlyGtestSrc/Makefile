TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#=============================
# Build tests

GTESTPROD_HOST += gsample1
gsample1_SRCS += gsample1.cpp
GTESTS += gsample1
GTEST_SUITES += StringComparison

GTESTPROD_HOST += gsample2
gsample2_SRCS += gsample2.cpp
GTESTS += gsample2
GTEST_SUITES += IntComparison ShortComparison

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE
