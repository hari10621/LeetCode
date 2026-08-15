class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> prefix(nums.size(),0);
        int val = 0;
        for(int i=0;i<nums.size();i++){
            val += nums[i];
            prefix[i] = val;
        }
        return prefix;
    }
};