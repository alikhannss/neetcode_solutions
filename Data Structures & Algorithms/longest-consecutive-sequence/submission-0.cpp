class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        int ans = 0;
        for (auto z : nums) {
            st.insert(z);
        }
        for (int i = 0; i < nums.size(); i++) {
            int count = 1;
            int j = 1;
            if (st.find(nums[i]-1) != st.end()) {
                continue;
            }
            while (st.size() != 0 && st.find(nums[i]+j) != st.end()) {
                count++;
                j++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
