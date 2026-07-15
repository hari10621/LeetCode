class Solution {
public:
    int gcd(int a,int b){
        if(b == 0){
            return a;
        }
        return gcd(b,a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        for(int i=1;i<=n*2;i++){
            if(i%2==1){
                sumOdd+=i;
            }
            else{
                sumEven+=i;
            }
        }
        return gcd(sumOdd,sumEven);

    }
};