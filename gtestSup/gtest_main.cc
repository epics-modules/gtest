/*************************************************************************\
* Copyright (c) 2020 ITER Organization.
* This module is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution.
\*************************************************************************/

/*
 *  Author: Ralph Lange <ralph.lange@gmx.de>
 */

#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "tap.h"

GTEST_API_ int main(int argc, char** argv) {
    bool addTapListener = false;

    if (argc > 1) {
        if (!strcmp(argv[1], "--gtest_output_tap")) {
            addTapListener = true;
            // Shift the remainder of the argv list left by one, including the trailing NULL
            for (int j = 1; j != argc; j++) {
              argv[j] = argv[j + 1];
            }
            argc--;
        }
    }

    testing::InitGoogleMock(&argc, argv);

    if (addTapListener) {
        testing::TestEventListeners& listeners = testing::UnitTest::GetInstance()->listeners();
        listeners.Append(new tap::TapListener());
    }
    return RUN_ALL_TESTS();
}
