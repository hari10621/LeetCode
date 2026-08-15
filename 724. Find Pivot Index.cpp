class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        for(int i=0;i<nums.size();i++){
            total_sum += nums[i];
        }
       
        int leftsum = 0;
        int rightsum = 0;
        for(int right = 0;right<nums.size();right++){
            rightsum = total_sum - leftsum - nums[right];
            if(rightsum == leftsum){
                return right;
            }
            leftsum += nums[right];
        }
        return -1;
    }
};