class Solution {
public:
    int gcd(int a ,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    long long gcdSum(vector<int>& nums) {
        int maxi = nums[0];
        vector<int> prefix_sum;
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
            int gcd_cal = gcd(nums[i],maxi);
            prefix_sum.push_back(gcd_cal);
        }
        sort(prefix_sum.begin(),prefix_sum.end());
        long long sum = 0;
        int left = 0;
        int right = prefix_sum.size()-1;
        while(left < right){
            int gcd_loop_cal = gcd(prefix_sum[left],prefix_sum[right]);
            left++;
            right--;
            sum+=gcd_loop_cal;
        }
        return sum;
    }
};