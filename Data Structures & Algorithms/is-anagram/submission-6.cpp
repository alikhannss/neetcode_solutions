class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp1;
        map<char, int> mp2;
        if (s.size() != t.size()) {
            return false;
        }
        for (int i = 0; i < s.size(); i++) {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        for (auto z : mp1) {
            if (z.second != mp2[z.first]) {
                return false;
            }
        }
        return true;
    }
};
