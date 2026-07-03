class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int target_count = 0;

            for (int j = i; j < n; j++) {
                if (nums[j] == target)
                    target_count++;

                int len = j - i + 1;

                if (target_count > len / 2)
                    count++;
            }
        }

        return count;
    }
};