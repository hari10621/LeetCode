class Solution {
public:
    int smallestNumber(int n, int t) {
        int prod_found = false;
        int num;
        while(prod_found == false){
            num = n;
            int prod = 1;
            while(num != 0){
                prod = prod * (num%10);
                num = num/10;
            }
            if(prod % t == 0){
                prod_found = false;
                return n;
            }
            n++;
        }
        return num;
    }
};