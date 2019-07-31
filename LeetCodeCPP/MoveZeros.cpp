
/*

https://leetcode.com/problems/move-zeroes/

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

You must do this in-place without making a copy of the array.
Minimize the total number of operations.
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int length = (int)nums.size();
        int steps = 0;
        while(steps < length)
        {
            if (nums[i] == 0)
            {
                nums.erase(nums.begin() + i);
                nums.emplace(nums.end(), 0);
                i--;
            }
            i++;
            steps++;
        }
    }
};
