class Solution {
public:
    string frequencySort(string s) {
        int maxc = 0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            maxc = max(maxc,mp[s[i]]);
        }
        string str;
        while(maxc!=0){
            for(auto it : mp){
                if(it.second == maxc){
                    for(int i=0;i<maxc;i++){
                        str+=it.first;
                    }
                }
            }
            maxc--;
        }
        return str;
        
    }
};