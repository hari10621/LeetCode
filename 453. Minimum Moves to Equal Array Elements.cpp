#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution { 
public: 
    int minMoves(vector<int>& nums) { 
        int mini = INT_MAX;
        for (int num : nums) {
            mini = min(mini, num);
        }
        
        int total_moves = 0; 
        for (int num : nums) { 
            total_moves += (num - mini); 
        } 
        
        return total_moves; 
    } 
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution { 
public: 
    bool check_same(vector<int>& nums){ 
        int mini = INT_MAX, maxi = INT_MIN; 
        for(int i = 0; i < nums.size(); i++){ 
            mini = min(nums[i], mini); 
            maxi = max(nums[i], maxi); 
        } 
        return maxi == mini; 
    } 

    int findlargest(vector<int>& nums){ 
        int max_idx = 0; 
        for(int i = 1; i < nums.size(); i++){ 
            if(nums[i] > nums[max_idx]) {
                max_idx = i;
            }
        } 
        return max_idx; 
    } 

    void increment_one(vector<int>& nums){ 
        int max_idx = findlargest(nums); 
        for(int i = 0; i < nums.size(); i++){ 
            if(i != max_idx){ 
                nums[i]++; 
            } 
        } 
    } 

    int minMoves(vector<int>& nums) { 
        bool initial_check = check_same(nums); 
        if(initial_check == true){ 
            return 0; 
        } 
        int iterate_count = 0; 
        bool check_sames = false; 
        while(!check_sames){ 
            increment_one(nums); 
            check_sames = check_same(nums); 
            iterate_count++; 
        } 
        return iterate_count; 
    } 
};
