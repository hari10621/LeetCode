class Solution {
public:
    int find_max(vector<int> nums){
        int max_i = 0;
        for(int i=0;i<nums.size();i++){
            max_i = max(max_i,nums[i]);
        }
        return max_i;
    }
    int find_moves(vector<int> nums){
        int largest = find_max(nums);
        int count = 0;
        for(int i=0;i<nums.size();i++){
            count += abs(largest - nums[i]);
        }
        return count;
    }
    int minMoves(vector<int>& nums) {
        return find_moves(nums);
    }
};
