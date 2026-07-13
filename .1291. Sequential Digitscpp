class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string number = "123456789";
        int left = 0;
        int right = 0;
        int size = 1;
        vector<int> result;
        while(size < 10){
            int left = 0;
            int right = size;
            while(right < 10){
                string str;
                for(int i=left;i<right;i++){
                    str += number[i];
                }
                int num = std::atoi(str.c_str());
                if(num <= high && num >= low){
                    result.push_back(num);
                }
                left++;
                right++;

            }
            size++;
        }
        return result;
    }
};