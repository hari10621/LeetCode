class Solution {
public:
    int titleToNumber(string columnTitle) {
        if(columnTitle.size() == 1){
            return (columnTitle[0] - 'A') + 1;
        }
        int num = columnTitle[columnTitle.size()-1] - 'A' + 1;
        int col = 1;
        for(int i = columnTitle.size()-2;i >=0 ;i--){
            num += pow(26,col) * ((columnTitle[i] - 'A')+1);
            col++;
        }
        return num;
    }
};