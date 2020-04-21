/*************************************************************************\
* Copyright (c) 2020 ITER Organization.
* This module is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution.
\*************************************************************************/

/*
 *  Author: Ralph Lange <ralph.lange@gmx.de>
 */

/* Simple tests with one implicit fixture */

#include <gtest/gtest.h>

namespace {

const char *valRight = "hello google";
const char *valWrong = "hello EPICS";
const char *expected = "hello google";

TEST(StringComparison, ConstantString_Equal) {
    EXPECT_STREQ(expected, valRight);
}

TEST(StringComparison, ConstantString_NotEqual) {
    EXPECT_STRNE(expected, valWrong);
}

}
