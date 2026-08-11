class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int> mp;
        bool is_prefix = true;
        mp[nums[0]]++;
        int sum = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]+1  && is_prefix == true){
                sum += nums[i];
            }
            else{
                is_prefix = false;
            }
            mp[nums[i]]++;
        }
        while(mp.find(sum) != mp.end()) {
            sum++;
        }
        return sum;
    }
};