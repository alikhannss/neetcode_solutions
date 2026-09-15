class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ump;
        for (auto z : s) {
            ump[z]++;
        }
        for (auto z : t) {
            if (ump.contains(z)) {
                if (ump[z] > 0) {
                    ump[z]--;
                }
                if (ump[z] == 0) {
                    ump.erase(z);
                }
            }else {
                return false;
            }
        }
        if (ump.size() != 0) {
            return false;
        }
        return true;
    }
};
