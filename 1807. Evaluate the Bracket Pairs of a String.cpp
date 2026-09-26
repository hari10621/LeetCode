class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        string result;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                string temp;
                int j = i+1;
                while(s[j] != ')'){
                    temp += s[j];
                    j++;
                }
                if(mp.contains(temp)){
                    result+=mp[temp];
                    i+=temp.size()+1;
                }
                else{
                    result+='?';
                    i+=temp.size()+1;
                }
            }
            else{
                result+=s[i];
            }
        }
        return result;
    }
};