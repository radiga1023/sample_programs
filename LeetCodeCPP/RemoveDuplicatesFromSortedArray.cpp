/*
https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Given nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.

It doesn't matter what you leave beyond the returned length.
Example 2:

Given nums = [0,0,1,1,1,2,2,3,3,4],

Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.

It doesn't matter what values are set beyond the returned length.
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        vector<int>::iterator it;
        vector<int>::iterator it2;
        int val = nums[0];
        for (auto it = nums.begin() + 1; it < nums.end(); ++it)
        {
            for (auto it2 = it; it2 < nums.end(); ++it2)
            {
                if (*it2 == val) 
                {
                    nums.erase(it2); 
                    --it2;
                }
            }
            val = *it;
        }
        return nums.size();
    }
};
