class Solution {
public:
    string convert(string s, int numRows) {
       
        if (numRows == 1 || s.length() <= numRows) {
            return s;
        }

        vector<string> result(numRows + 1);
        int count = 1;
        int step = 1;
        
        for(int i = 0; i < s.size(); i++){
            result[count] += s[i];
            
            if (count == 1) {
                step = 1;
            } else if (count == numRows) {
                step = -1;
            }
            
            count += step;
        }
        
        string zig_zag;
        
        for(int i = 1; i <= numRows; i++){
            zig_zag += result[i];
        }
        return zig_zag;
    }
};
