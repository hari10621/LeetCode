class Solution {
public:
    int digitFrequencyScore(int n) {
        int arr[10] = {0};
        while( n!=0 ){
            int dig = n % 10;
            n = n/10;
            arr[dig]++;
        }
        int sum = 0;
        for(int i=0;i<10;i++){
            sum += (i * arr[i]);
        }
        return sum;
    } 
};