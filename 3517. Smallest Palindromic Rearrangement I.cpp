class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        vector<int> freq(26,0);

        for(int i=0;i<n/2;i++){
            freq[s[i] - 'a']++;
        }
        int left = 0;
        for(int i = 0;i<26;i++){
            while(freq[i] > 0){
                char current = i  + 'a';
                s[left] = current;
                s[n-1-left++] = current;
                freq[i]--;
            }
        }
        return s;
    }
};