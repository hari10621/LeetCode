class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int> mp;
        for(int i=0;i<order.size();i++){
            mp.insert({order[i] , i});

        }
        map<int,int> result;
        for(int i=0;i<friends.size();i++){
            result.insert({mp[friends[i]],friends[i]});
        }
        vector<int> result1;
        for(auto it : result){
            result1.push_back(it.second);
        }
        return result1;
    }
};