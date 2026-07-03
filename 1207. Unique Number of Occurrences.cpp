class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int> result;
        for(auto it : mp){
            if(result.empty()){
                result.push_back(it.second);
            }
            else{
            for(int i=0;i<result.size();i++){
                if(it.second == result[i]){
                    return false;
                }
            }
            result.push_back(it.second);
            }
        }
        return true;
    }
};