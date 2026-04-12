class Solution {
public:
    int secondHighest(string s) {
        int max = -1;
        int secondMax = -1;

        for(char ch : s){
            if(isdigit(ch)){
                int num = ch - '0';
                if(num > max){
                    secondMax = max;
                    max = num;
                }else if(num > secondMax && num < max){
                    secondMax = num;
                }
            }
        }
        return secondMax;
    }
};
