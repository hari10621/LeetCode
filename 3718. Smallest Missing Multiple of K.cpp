class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        bool is_founded = false;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int temp = k;
        while(is_founded == false){
            if(mp[temp] != 0){
                temp += k;
            }
            else{
                return temp;
            }
        }
        return 0;
    }
};