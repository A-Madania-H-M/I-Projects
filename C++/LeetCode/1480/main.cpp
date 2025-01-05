#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

int main() {
    Solution sol;
    
    // Test Example 1
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> result1 = sol.runningSum(nums1);
    for (int num : result1) cout << num << " "; // Output: 1 3 6 10
    cout << endl;

    // Test Example 2
    vector<int> nums2 = {1, 1, 1, 1, 1};
    vector<int> result2 = sol.runningSum(nums2);
    for (int num : result2) cout << num << " "; // Output: 1 2 3 4 5
    cout << endl;

    // Test Example 3
    vector<int> nums3 = {3, 1, 2, 10, 1};
    vector<int> result3 = sol.runningSum(nums3);
    for (int num : result3) cout << num << " "; // Output: 3 4 6 16 17
    cout << endl;

    return 0;
}