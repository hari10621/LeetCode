class Solution {
public:
    int countLargestGroup(int n) {
        int arr[40] = {0}; 
        int max_size = 0;
        for(int i=1;i<=n;i++){
            int num = i;
            int sum = 0;
            while(num > 0){
                int dig = num % 10;
                sum+=dig;
                num = num/10;
            }
            arr[sum]++;
            max_size = max(max_size,arr[sum]);
        }
        int count = 0;
        for(int i=0;i<40;i++){
            if(arr[i] == max_size){
                count++;
            }
        }
        return count;
    }
};