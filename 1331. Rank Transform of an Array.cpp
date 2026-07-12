class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> result;
        vector<int> clone = arr;
        unordered_map<int,int> mp;
        sort(clone.begin(),clone.end());
        int count = 1;
        for(int i=0;i<clone.size();i++){
            if(!mp.contains(clone[i])){
                mp[clone[i]] = count++;
            }
        }
        for(int i=0;i<arr.size();i++){
            result.push_back(mp[arr[i]]);
        }
        return result;
    }
};