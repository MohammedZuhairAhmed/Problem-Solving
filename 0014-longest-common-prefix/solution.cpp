class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";

        if (strs.empty()) return "";
        if (strs[0].empty()) return "";

        for (int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || ch != strs[j][i]) {
                    return res;
                }
            }

            res += ch;
        }

        return res;
    }
};
