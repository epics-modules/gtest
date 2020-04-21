/*************************************************************************\
* Copyright (c) 2020 ITER Organization.
* This module is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution.
\*************************************************************************/

/*
 *  Author: Ralph Lange <ralph.lange@gmx.de>
 */

/* Simple mock test */

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "Tock.h"

namespace {

using ::testing::AtLeast;
using ::testing::Return;

class MockTock : public Tock {
 public:
    MOCK_METHOD(void, Tic, (), (override));
    MOCK_METHOD(void, Tac, (), (override));
    MOCK_METHOD(int, TicTacToe, (unsigned int count), (override));
};

TEST(TockTest, OneTic) {
    MockTock tut; // Tock under test

    EXPECT_CALL(tut, Tic());

    tut.Tic();
}

TEST(TockTest, MultiTac) {
    MockTock tut; // Tock under test

    EXPECT_CALL(tut, Tac())
            .Times(AtLeast(3));

    for (unsigned int i = 0; i < 5; i++) {
        tut.Tac();
    }

}
TEST(TockTest, TicTacToe) {
    MockTock tut; // Tock under test

    EXPECT_CALL(tut, TicTacToe(3))
            .WillOnce(Return(1))
            .WillOnce(Return(5))
            .WillRepeatedly(Return(10));

    EXPECT_EQ(1, tut.TicTacToe(3));
    EXPECT_EQ(5, tut.TicTacToe(3));
    EXPECT_EQ(10, tut.TicTacToe(3));
    EXPECT_EQ(10, tut.TicTacToe(3));
}

}
