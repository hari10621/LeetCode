class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i = 0; i < (int)nums.size(); i++){
            int max_it = INT_MIN; 
            int min_it = INT_MAX;
            
            for(int j = 0; j <= i; j++){
                max_it = max(max_it, nums[j]);
            }
            for(int l = i; l < nums.size(); l++){
                min_it = min(min_it, nums[l]);
            }
            
            if(max_it - min_it <= k){
                return i;
            }
        }
        return -1;
    }
};
