class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int>mp;
        for (auto z : s) {
            mp[z]++;
        }
        for (auto z : t) {
            mp[z]--;
            if (mp[z] == 0) {
                mp.erase(z);
            }
        }
        return mp.empty();
    }
};
