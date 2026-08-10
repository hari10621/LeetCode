class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_volume = 0;
        int left = 0,right = height.size()-1;
        while(left < right){
            int length = right-left;
            int heights = min(height[left],height[right]);
            int area = length * heights;
             if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
            max_volume = max(max_volume,area);
            
        }
        return max_volume;
    }
};