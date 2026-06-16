class Solution {
public:
    string processStr(string s) {
        string result;
        char prev;
        bool hasprev = false;
        for(int i=0;i<s.size();i++){
            if(s[i] == '*' || s[i] == '%' || s[i] == '#'){
                if(s[i] == '*'){
                    if(!result.empty()){
                     result.pop_back();
                    }
                }
                else if(s[i] == '#'){
                    result+=result;
                    
                }
                else if(s[i] == '%'){
                    reverse(result.begin(),result.end());
                }
            }
            else{
                result+=s[i];
                hasprev = false;
            }
            
        }
        return result;
    }
};