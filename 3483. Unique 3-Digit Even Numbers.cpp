class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_map<int,int> mp;
        mp.reserve(1000); 
        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                for(int k=0;k<digits.size();k++){
                    if( i != j && j != k && i!=k){
                    int num1 = digits[i] * 100 + digits[j] * 10 + digits[k];
                    int num2 = digits[j] * 100 + digits[k] * 10 + digits[i];
                    int num3 = digits[k] * 100 + digits[i] * 10 + digits[j];
                    if(num1 % 2 == 0 &&num1 >= 100){
                    mp[num1]++;
                    }
                    if(num2 % 2 == 0 && num2 >= 100){
                    mp[num2]++;
                    }
                    if(num3 % 2 == 0 && num3 >= 100){
                    mp[num3]++;
                    }
                    }
                }
            }
        }
        return mp.size();
    }
};