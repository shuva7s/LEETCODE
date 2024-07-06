#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void helper(vector<int> &nums, int start, vector<vector<int>> &result)
{
    if (start == nums.size() - 1)
    {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); ++i)
    {
        swap(nums[start], nums[i]);
        helper(nums, start + 1, result);
        swap(nums[start], nums[i]);
    }
}

vector<vector<int>> func(vector<int> &nums)
{
    vector<vector<int>> result;
    helper(nums, 0, result);
    return result;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = func(nums);

    for (const auto &perm : res)
    {
        for (int num : perm)
            cout << num << " ";
        cout << endl;
    }
    
    return 0;
}