class Solution {
public: 
    void forward(vector<int>& code,int k){
        vector<int> result = code;
        for(int i=0;i<result.size();i++){
            int count = 0;
            int sum = 0;
            while(count != k){
                sum += code[(i+1+count)%code.size()];
                count++;
            }
            result[i] = sum;
            
        }
        code = result;
    }
    void backward(vector<int>& code,int k){
        vector<int> result = code;
        for(int i=0;i<result.size();i++){
             int count = 0;
            int sum = 0;

            while (count != k) {
                 sum += code[(i + count - 1 + code.size()) % code.size()];
                count--;
            }
             result[i] = sum;
        }
         code = result;
    }
    vector<int> decrypt(vector<int>& code, int k) {
        if(k == 0){
            for(int i=0;i<code.size();i++){
                code[i] = 0;
            }
        }
        else if(k > 0){
            forward(code,k);
        }
        else{
            backward(code,k);
        }
        return code;
    }
};