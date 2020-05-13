TOP=../../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

# Important on Windows / Visual Studio:
# If DLL builds are configured (SHARED=YES/STATIC=NO),
# only set SHARED=NO (and don't set STATIC=YES as suggested)
# to make sure compilation flags are consistent between
# all libraries involved.
SHARED_LIBRARIES = NO

#================================================
# Build Google Mock libraries gmock and gmock_main

LIBRARY_HOST += gmock
LIBRARY_HOST += gmock_main

ifneq (,$(findstring $(T_A),$(CROSS_COMPILER_RUNTEST_ARCHS)))
LIBRARY_IOC += gmock
LIBRARY_IOC += gmock_main
endif

SRC_DIRS += ../..

gmock_SRCS += gmock-all.cc
gmock_main_SRCS += gmock_main.cc

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE
