class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
            if(mp[nums[i]].size() >= 2){
                for(int j=0; j<mp[nums[i]].size()-1; j++){
                    if(abs(mp[nums[i]][mp[nums[i]].size()-1] - mp[nums[i]][j]) <= k) {
                        return true;
                    } 
                }
            }
        }
        return false;
    }
};