class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int k = INT_MAX;
        int index = 0;
        for (int i = 0; i < strs.size(); i++) {
            k = min(k, (int)strs[i].size());
            if (k == strs[i].size()) {
                index = i;
            }
        }
        for (int i = 0; i < strs[index].size(); i++) {
            int t = 0;
            for (int j = 0; j < strs.size(); j++) {
                if (strs[index][i] != strs[j][i]) {
                    t = 1;
                }
            }
            if (t == 0) {
                ans+=strs[index][i];
            }else {
                break;
            }
        }
        return ans;
    }
};