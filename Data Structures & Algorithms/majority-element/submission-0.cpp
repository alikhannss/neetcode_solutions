class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = INT_MIN, ans = 0;
        map<int, int> mp;
        for (auto z:nums) {
            mp[z]++;
        }
        for (auto z:mp) {
            count = max(count, z.second);
            if (count == z.second) {
                ans = z.first;
            }
        }
        return ans;
    }
};
// 5 4
// 1 3