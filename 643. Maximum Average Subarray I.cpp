class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        double max_find = sum / k;
        for(int i = k;i<nums.size();i++){
            sum += nums[i];
            sum -= nums[i-k];
            max_find = max(sum/k,max_find);
        }
        return max_find;
    }
};