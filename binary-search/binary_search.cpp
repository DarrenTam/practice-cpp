//
// Created by Darren on 08/01/2021.
//

#include "binary_search.h"

int binarySearch(std::vector<int> nums, int value) {

    auto mid = nums.size() / 2;
    std::vector<int> left(nums.begin(), nums.begin() + mid);
    std::vector<int> right(nums.begin() + mid, nums.end());

    if (nums[mid] == value) {
        return nums[mid];
    }

    if (mid == 0) {
        return -1;
    }

    if (nums[mid] > value) {
        return binarySearch(left, value);
    } else {
        return binarySearch(right, value);
    }

}