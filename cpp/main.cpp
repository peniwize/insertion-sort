/*!
    \file "main.cpp"

    Author: Matt Ervin <matt@impsoftware.org>
    Formatting: 4 spaces/tab (spaces only; no tabs), 120 columns.
    Doc-tool: Doxygen (http://www.doxygen.com/)

    https://neetcode.io/courses/dsa-for-beginners/10
    https://leetcode.com/problems/sort-an-array/
*/

//!\sa https://github.com/doctest/doctest/blob/master/doc/markdown/main.md
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <doctest/doctest.h> //!\sa https://github.com/doctest/doctest/blob/master/doc/markdown/tutorial.md
#include <vector>

using namespace std;

// [----------------(120 columns)---------------> Module Code Delimiter <---------------(120 columns)----------------]

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (1 < nums.size()) {
            // Insertion sort.
            for (auto i = nums.begin() + 1; nums.end() != i; ++i) {
                for (auto h = i; nums.begin() != h && *(h - 1) > *h; --h) {
                    std::swap(*(h - 1), *h);
                }
            }
        }
        return nums;
    }
};

// [----------------(120 columns)---------------> Module Code Delimiter <---------------(120 columns)----------------]

TEST_CASE("Case 1")
{
    cerr << "Case 1" << '\n';
    vector<int> value{5, 2, 3, 1};
    CHECK(vector<int>{1, 2, 3, 5} == Solution{}.sortArray(value));
    cerr << '\n';
}

TEST_CASE("Case 2")
{
    cerr << "Case 2" << '\n';
    vector<int> value{5, 1, 1, 2, 0, 0};
    CHECK(vector<int>{0, 0, 1, 1, 2, 5} == Solution{}.sortArray(value));
    cerr << '\n';
}

/*
    End of "main.cpp"
*/
