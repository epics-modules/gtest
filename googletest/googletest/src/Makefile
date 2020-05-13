TOP=../../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

# Build the gtest library statically.

# Important on Windows / Visual Studio:
# If DLL builds are configured (SHARED=YES/STATIC=NO),
# only set SHARED=NO (and don't set STATIC=YES as suggested)
# to make sure compilation flags are consistent between
# all libraries involved.
SHARED_LIBRARIES = NO

#================================================
# Build GoogleTest libraries gtest and gtest_main

LIBRARY_HOST += gtest
LIBRARY_HOST += gtest_main

ifneq (,$(findstring $(T_A),$(CROSS_COMPILER_RUNTEST_ARCHS)))
LIBRARY_IOC += gtest
LIBRARY_IOC += gtest_main
endif

SRC_DIRS += ../..

gtest_SRCS += gtest-all.cc
gtest_main_SRCS += gtest_main.cc

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE
