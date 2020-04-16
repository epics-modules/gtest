TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#================================================
# Build Google Mock libraries gmock and gmock_main

GTEST = $(TOP)/googletest/googletest
GMOCK = $(TOP)/googletest/googlemock

LIBRARY_HOST += gmock
LIBRARY_HOST += gmock_main

SRC_DIRS += $(GMOCK)/src
USR_INCLUDES += -I$(GTEST)/include

gmock_SRCS += gmock-all.cc
gmock_main_SRCS += gmock_main.cc

SRC_DIRS += $(GMOCK)/include

INC1 = gmock-actions.h  gmock-function-mocker.h  gmock-more-actions.h \
       gmock-nice-strict.h  gmock.h  gmock-cardinalities.h  gmock-generated-actions.h \
       gmock-generated-function-mockers.h  gmock-generated-matchers.h  gmock-matchers.h \
       gmock-more-matchers.h  gmock-spec-builders.h
INC2 = gmock-internal-utils.h  gmock-port.h  gmock-pp.h
INC3 = gmock-generated-actions.h  gmock-matchers.h  gmock-port.h

INC += $(addprefix gmock/,$(INC1))
INC += $(addprefix gmock/internal/,$(INC2))
INC += $(addprefix gmock/internal/custom/,$(INC3))

SHARED_LIBRARIES = NO

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE
