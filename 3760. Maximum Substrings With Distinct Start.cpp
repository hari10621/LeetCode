class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int> freq;
        for(char c : s){
            freq[c]++;
        }
        return freq.size();
    }
};