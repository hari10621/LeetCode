class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int min_val = INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int sum  =0;
                for(int k = i;k<=j;k++){
                    sum += nums[k];
                }
                int len = j - i + 1;
                if(sum > 0 && len >= l && len <= r){
                    min_val = min(min_val,sum);
                }
            }
        }
        if(min_val == INT_MAX){
            return -1;
        }
        return min_val;
    }
};