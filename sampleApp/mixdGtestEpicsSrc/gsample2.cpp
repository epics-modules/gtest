/*************************************************************************\
* Copyright (c) 2020 ITER Organization.
* This module is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution.
\*************************************************************************/

/*
 *  Author: Ralph Lange <ralph.lange@gmx.de>
 */

/* Simple tests with multiple implicit fixtures */

#include <gtest/gtest.h>

namespace {

const int valRight = 5;
const int valWrong = 3;
const short valAlsoWrong = 2;
const int expected = 5;

TEST(IntComparison, ConstantInt_Equal) {
    EXPECT_EQ(expected, valRight);
}

TEST(ShortComparison, ConstantIntShort_NotEqual) {
    EXPECT_NE(expected, valWrong);
    EXPECT_NE(expected, valAlsoWrong);
}

}
