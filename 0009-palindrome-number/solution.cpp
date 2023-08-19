class Solution {
public:
    bool isPalindrome(int x) {
       long long int rev = 0;
        int org = x;

        if(abs(x) != x)
            return false;

        while(org != 0)
        {
            int digit = org%10;
            org = org/10;
            rev = rev*10 + digit;
        }

        if(x == rev)
            return true;
        else
            return false;    
    }
};
