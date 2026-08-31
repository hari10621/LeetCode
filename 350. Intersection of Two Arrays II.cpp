class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }
        vector<int> result;
        for(auto it : mp1){
            int num;
            if(mp2.contains(it.first)){
                num = min(it.second,mp2[it.first]);
            
            for(int i=1;i<=num;i++){
                result.push_back(it.first);
            }
            }
        }
        return result;
    }
};