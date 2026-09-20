class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> mp;
        int count = 26;
        for (int i = 0; i < 26; i++) {
            mp[(char)(i + 97)] = count--;
        }
        int sum = 0;
        for(int i=0;i<s.size();i++){
            sum += mp[s[i]] * (i+1);
        }
        return sum;
    }
};