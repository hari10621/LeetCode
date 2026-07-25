class Solution {
public:
    int maxProduct(int n) {
        vector<int> number;
        while(n > 0){
            number.push_back(n % 10);
            n = n/10;
        }
        sort(number.begin(),number.end());
        return number[number.size()-1]*number[number.size()-2]; 
    }
};