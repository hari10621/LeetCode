class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for(int i=2;i<=num;i++){
            int number = i;
            int sum = 0;
            while(number != 0){
                int dig = number % 10;
                number = number / 10;
                sum += dig;
            }
            if(sum %2 == 0){
                count++;
            }
        }
        return count;
    }
};