class Solution {
public:
    int minimumPushes(string word) {
        int n  =word.size();
        int count = 0;
        for(int i=0;i<n;i++){
            count += i / 8 + 1;
        }
        return count;
    }
};