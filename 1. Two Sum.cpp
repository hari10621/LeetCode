class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> two_sum;
        for(int i=0;i<nums.size();i++){
            int need = target - nums[i];
            if(two_sum.find(need)!=two_sum.end()){
                return {two_sum[need] , i};
            }
            two_sum[nums[i]] = i;
        }
        return {};
    }
};