// Problem Link
// https://leetcode.com/problems/maximum-ascending-subarray-sum/description/


// Source Code

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_val = nums[0], sum = nums[0];

        for(int i = 1;i < nums.size();i++){
            if(nums[i] > nums[i-1]){
                sum += nums[i];
            }else{
                sum = nums[i];
            }

            max_val = max(max_val, sum);
        }

        max_val = max(max_val, sum);

        return max_val;
    }
};