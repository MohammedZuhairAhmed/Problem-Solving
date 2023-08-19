class Solution {
public:
    int percentageLetter(string s, char letter) {
        int c=0,i;

        for(i=0;i<s.length();i++)
        {
            if(s[i] == letter)
                c++;
        }

        float res = c*(1.0/s.length())*100;

        int r = (int) res;

        return r;
    }
};
