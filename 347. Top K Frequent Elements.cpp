class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<k;i++){
            int maxi = 0;
            int index = -1;
        for(auto it : mp){
            if(it.second > maxi){
                maxi = it.second;
                index = it.first;
            }
        }
        result.push_back(index);
        mp[index] = 0;
        }
        return result;
    }
};