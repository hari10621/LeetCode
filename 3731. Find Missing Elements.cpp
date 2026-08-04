class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> result;
        unordered_map<int,int> mp;
        int small = INT_MAX;
        int largest = 0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            small = min(small,nums[i]);
            largest = max(largest,nums[i]);
        }
        for(int i=small;i<=largest;i++){
            if(!mp.contains(i)){
                result.push_back(i);
            }
        }
        
        return result;
    }
};