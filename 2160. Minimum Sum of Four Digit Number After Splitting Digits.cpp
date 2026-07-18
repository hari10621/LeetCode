class Solution {
public:
    int minimumSum(int num) {
        vector<int> result;
        while(num != 0){
            int dig = num % 10;
            result.push_back(dig);
            num = num / 10;
        }
        sort(result.begin(),result.end());
        return (result[0] * 10 + result[2]) + (result[1] * 10 + result[3]);
    }
};