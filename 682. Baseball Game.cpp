class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        stack<int> s;
        for(int i=0;i<operations.size();i++){
            if(operations[i] == "+"){
                int num = s.top();
                s.pop();
                int val = num + s.top();
                s.push(num);
                s.push(val);
                sum+=val;
            }
            else if(operations[i] == "D"){
                 int doubled = s.top() * 2; 
                s.push(doubled);
                sum += doubled;
            }
            else if(operations[i] == "C"){
                sum -= s.top();
                s.pop();
            }
            else{
                int num = atoi(operations[i].c_str());
                s.push(num);
                sum+=num;

            }
        }
        return sum;
    }
};