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

GTESTPROD_HOST += gsample2
gsample2_SRCS += gsample2.cpp
GTESTS += gsample2

GTESTPROD_HOST += gsample3
gsample3_SRCS += gsample3.cpp
GTESTS += gsample3

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE
include $(GTEST)/cfg/compat.RULES_BUILD
