class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp;
        for (auto z : s) {
            mp[z]++;
        }
        for (auto z : t) {
            if (mp[z] != 0) {
                mp[z]--;
            }else {
                return false;
            }
        }
        for (auto z : mp) {
            if (z.second != 0) {
                return false;
            }
        }
        return true;
    }
};
