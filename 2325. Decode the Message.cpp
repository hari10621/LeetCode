class Solution {
public:
    string decodeMessage(string key, string message) {
        char alpha[26];
        for(int i = 0; i < 26; i++) {
            alpha[i] = 'a' + i;
        }
        string result;
        vector<char> message_arr;
        for(int i=0;i<key.size();i++){
            if(key[i] == ' '){
                continue;
            }
            else{
                if(find(message_arr.begin(), message_arr.end(), key[i]) == message_arr.end()){
                message_arr.push_back(key[i]);
                }
            }
        }
        for(int i=0;i<message.size();i++){
            if(message[i] == ' '){
                result+=' ';
            }
            else{
            for(int j=0;j<message_arr.size();j++){
                
                if(message[i] == message_arr[j]){
                    result += alpha[j];
                    break;
                }
            }
            }
        }
        return result;

    }
};