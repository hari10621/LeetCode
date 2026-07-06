class Solution {
public:
    string convert_bin(int num){
        string result;
        while(num > 0){
            int rem = num%2;
            result += rem + '0';
            num = num/2;
        } 
        return result;  
    }
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i=0;i<=n;i++){
            int num = i;
            string bin = convert_bin(num);
            int count = 0;
            for(int i=0;i<bin.size();i++){
                if(bin[i] == '1'){
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};