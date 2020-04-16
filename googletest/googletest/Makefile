TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#================================================
# Build GoogleTest libraries gtest and gtest_main

GTEST = $(TOP)/googletest/googletest

LIBRARY_HOST += gtest
LIBRARY_HOST += gtest_main

SRC_DIRS += $(GTEST)/src

gtest_SRCS += gtest-all.cc
gtest_main_SRCS += gtest_main.cc

SRC_DIRS += $(GTEST)/include

INC1 = gtest-death-test.h  gtest-matchers.h  gtest-message.h  gtest-param-test.h gtest-printers.h \
       gtest-spi.h  gtest-test-part.h  gtest-typed-test.h gtest.h  gtest_pred_impl.h  gtest_prod.h
INC2 = gtest-death-test-internal.h  gtest-filepath.h  gtest-internal.h  gtest-param-util.h \
       gtest-port-arch.h  gtest-port.h  gtest-string.h  gtest-type-util.h
INC3 = gtest-port.h  gtest-printers.h  gtest.h

INC += $(addprefix gtest/,$(INC1))
INC += $(addprefix gtest/internal/,$(INC2))
INC += $(addprefix gtest/internal/custom/,$(INC3))

SHARED_LIBRARIES = NO

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE
