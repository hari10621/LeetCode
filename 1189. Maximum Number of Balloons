class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b=0,a=0,l=0,o=0,n=0;
        for(char c : text){
            if(c == 'b'){
                b++;
            }
            else if (c == 'a'){
                a++;
            }
            else if(c == 'l'){
                l++;
            }
            else if(c == 'o'){
                o++;
            }
            else if(c == 'n'){
                n++;
            }else{
                continue;
            }
        }
        int balloon = 0;
        while( b > 0 && a > 0 && l > 1 && o > 1 &&  n > 0){
            b--;
            a--;
            l-=2;
            o-=2;
            n--;
            balloon++;
        }
        return balloon;
    }
};