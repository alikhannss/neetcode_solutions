class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> ump;
        for (int i = 0; i < nums.size(); i++) {
            if (ump.contains(target - nums[i])) {
                ans.push_back(ump[target - nums[i]]);
                ans.push_back(i);
                break;
            }else {
                ump[nums[i]] = i;
            }
        }
        return ans;
    }
};
