class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, vector<int>> ump;
        for (int i = 0; i < nums.size(); i++) {
            ump[nums[i]].push_back(i);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (ump.contains(target-nums[i])) {
                if (target == 2*nums[i] && ump[target-nums[i]].size() == 1) {
                    continue;
                } 
                ans.push_back(min(i, ump[target-nums[i]].back()));
                ans.push_back(max(i, ump[target-nums[i]].back()));
                break;
            }
        }
        return ans;
    }
};
