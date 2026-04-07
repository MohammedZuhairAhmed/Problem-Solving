class Solution {
public:
    bool checkPerfectNumber(int num) {
        int n = num;
        if(n==1) return false;
        int res = 1;
        for(int i=2;i*i<= n;i++){
            if (n%i==0)
                res = res + i + n/i;
        }
        
        return res == n;
    }
};
