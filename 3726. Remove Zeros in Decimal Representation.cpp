class Solution {
public:
    long long removeZeros(long long n) {
        long long num =0;
        int count = 0;
        while(n>0){
            int dig = n % 10;
            if(dig != 0){
                num += dig * pow(10,count++);
            }
            n = n/10;
        }
        return num;
    }
};