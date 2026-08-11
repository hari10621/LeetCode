class Solution {
public:
    bool good_check(string s){
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            if(s[i] != '0'){
            mp[s[i]]++;
            if(mp[s[i]] > 1){
                return false;
            }
            }
        }
        return true;
    }
    int countGoodSubstrings(string s) {
        string str = "";
        if (s.size() < 3) return 0;
        for(int i=0;i<3;i++){
            str += s[i];
        }
        int count = 0;
        if(good_check(str)){
            count++;
        }
        for(int i=3;i<s.size();i++){
            str += s[i];
            str[i-3] = '0';
            if(good_check(str)){
                count++;
            }
        }
        return count;

    }
};


class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        if(s.size() < 3) return 0;
        for(int i=0;i<s.size()-2;i++){
            if((s[i] != s[i+1]) && ( s[i+1] != s[i+2] )&&( s[i] != s[i+2])){
                count++;
            }
        }
        return count;
    }
};




