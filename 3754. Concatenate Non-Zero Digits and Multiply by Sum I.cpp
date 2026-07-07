class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num = 0;
        long long sum = 0;
        int count = 0;
        while( n > 0 ){
            int dig = n % 10;
            if(dig != 0){
            num += dig * pow(10,count++);
            sum+=dig;
            }
            n=n/10;
        }   
        return num * sum;

    }
};