#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> left, vector<int> right) {
    int left_count = 0;
    int right_count = 0;
    vector<int> temp_array = {};
    while (left_count < left.size() && right_count < right.size()) {
        if (left[left_count] > right[right_count]) {
            temp_array.push_back(right[right_count]);
            right_count++;
        } else {
            temp_array.push_back(left[left_count]);
            left_count++;
        }
    }

    while (right_count < right.size()) {
        temp_array.push_back(right[right_count]);
        right_count++;
    }

    while (left_count < left.size()) {
        temp_array.push_back(left[left_count]);
        left_count++;
    }

    return temp_array;
}


vector<int> merge_sort(vector<int> numbers) {
    if (numbers.size() == 1) {
        return numbers;
    }

    if (numbers.size() > 1) {
        int mid_point = numbers.size() / 2;
        vector<int> l(numbers.begin(), numbers.begin() + mid_point);
        vector<int> r(numbers.begin() + mid_point, numbers.end());
        vector<int> left = merge_sort(l);
        vector<int> right = merge_sort(r);
        return merge(left, right);
    }
}

void print(const std::vector<int> &v) {
    for (auto &i : v)
        std::cout << i << '\n';
}

int main() {
    vector<int> numbers = {2, -1, 5, 6, 88, 5, 25, 85, 99};
    std::cout << "start sorting" << std::endl;;
    vector<int> result = merge_sort(numbers);
    vector<int> expected_result = {-1, 2, 5, 5, 6, 25, 85, 88, 99};
    assert(result == expected_result);
    return 0;
}
