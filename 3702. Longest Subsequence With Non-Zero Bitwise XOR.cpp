class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int total_xor = 0;
        bool has_non_zero = false;
        for(int i=0;i<nums.size();i++){
            total_xor ^= nums[i];
            if(nums[i] != 0){
                has_non_zero = true;
            }
        }
        if(total_xor != 0){
            return nums.size();
        }
        if(has_non_zero){
            return nums.size()-1;
        }
        return 0;
    }
};