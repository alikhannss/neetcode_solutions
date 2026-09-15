class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for (auto z : nums) {
            if (!mp.contains(z)) {
                mp[z]++;
            } else {
                return true;
            }
        }
        return false;
    }
};