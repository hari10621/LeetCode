class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result;
        vector<char> alpha;
        for (char c = 'Z'; c >= 'A'; --c) {
            alpha.push_back(c);
        }
        for(int i=0;i<words.size();i++){
            int sum = 0;
            for(int j=0;j<words[i].size();j++){
                sum += weights[words[i][j] - 'a'];
            }
            sum = sum % 26;
            result += alpha[sum] + (char)32;
        }
        return  result;
    }
};