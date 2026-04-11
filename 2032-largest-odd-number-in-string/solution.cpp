class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.length() - 1;

        while (i >= 0) {
            if ((num[i] - '0') % 2 == 1)
                break;
            else
                i--;
        }

        return num.substr(0, i + 1);
    }
};
