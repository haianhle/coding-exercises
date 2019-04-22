/* Problem:
 Given an array of integers, return indices of the two numbers 
 such that they add up to a specific target.
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> answer;
    for(int i = 0; i < nums.size(); ++i)
        for (int j = i+1; j < nums.size(); ++j)
            if(nums.at(i) + nums.at(j) == target) {
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }

    throw invalid_argument("no answer found");
}

int main() {

    /* Test case:
    Give nums = [3, 2, 7, 4], target = 6,
    Return [1, 3] because nums[1] + nums[3] = 6
    */

    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(4);
    int target = 6;

    vector<int> ans = twoSum(nums, target);
    cout << "The answer is [" << ans.at(0) << ", " << ans.at(1) << "]" << endl;

    return 0;
}
