class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool rising = true;
        if(arr.size() < 3){
            return false;
        }
        int count = 0;
        int prev = arr[0];
        for(int i=1;i<arr.size();i++){
            if(prev == arr[i]){
                return false;
            }
            if(rising == true){
                if(arr[i] < prev && count == 0){
                    if (i == 1) return false;
                    count++;
                    rising = false;
                }
            }
            else{
                if(arr[i] > prev){
                    return false;
                }
            }
            prev = arr[i];
        }
        return rising == false;
    }
};