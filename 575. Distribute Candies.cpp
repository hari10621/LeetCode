class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> mp;
        int total = candyType.size();
        for(int i=0;i<candyType.size();i++){
            mp[candyType[i]]++;
        }
        int n = mp.size();
        if(n <= total/2){
            return n;
        }
        else{
            return (total/2);
        }
        
    }
};