TOP=..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

ifdef GTEST

#==================================================
# Build EPICS gtest_main library (uses TAP output)

LIBRARY_HOST += epics_gtest_main
epics_gtest_main_SRCS += gtest_main.cc
epics_gtest_main_LIBS += gtest

PERL_SCRIPTS += makeFromList.pl

CFG += RULES_GTEST
CFG += compat.RULES_BUILD

endif

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE
