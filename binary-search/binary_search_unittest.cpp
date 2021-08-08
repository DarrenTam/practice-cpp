//
// Created by Darren on 08/01/2021.
//

#include <gtest/gtest.h>
#include "binary_search.h"

namespace {
    TEST(binarySeach, BasicAssertions) {
        std::vector<int> nums = {1, 2, 5, 8, 34, 60, 77};
        EXPECT_EQ(binarySearch(nums, 5), 5);
    }

    TEST(binarySeachCase2, BasicAssertions) {
        std::vector<int> nums = {1, 2, 5, 8, 34, 60, 77};
        EXPECT_EQ(binarySearch(nums, 77), 77);
    }

    TEST(binarySeachCase3, BasicAssertions) {
        std::vector<int> nums = {1, 2, 5, 8, 34, 60, 77};
        EXPECT_EQ(binarySearch(nums, 8), 8);
    }


    TEST(binarySeachCaseFail, BasicAssertions) {
        std::vector<int> nums = {1, 2, 5, 8, 34, 60, 77};
        EXPECT_EQ(binarySearch(nums, 99), -1);
    }

}