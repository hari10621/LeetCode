class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map <char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int count = 0;
        for (auto x : mp){
            if(x.second%2 == 0){
                count += x.second;
            }
            else{
                count += x.second-1;
            }
        }
        if (count < s.size())
            count++;
        return count;
    }
};