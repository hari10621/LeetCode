class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> result;
        for(int i = 0; i < image.size(); i++){
            vector<int> current = image[i];
            reverse(current.begin(), current.end());
            int left = 0; int right = current.size() - 1;
            while(left <= right){
                if(left == right){
                    current[left] = (current[left] == 0) ? 1 : 0;
                }
                else{
                    current[left] = (current[left] == 0) ? 1 : 0;
                    current[right] = (current[right] == 0) ? 1 : 0;
                }
                right--;
                left++;
            }
            result.push_back(current);
        }
        return result;
    }
};
