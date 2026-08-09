class Solution {
public:
    bool isPalindrome(string s) {
        
        string formated;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                formated += tolower(s[i]);
            }
        }
        s = formated;
        int left = 0;
        int right = s.size()-1;
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};