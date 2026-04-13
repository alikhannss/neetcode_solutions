class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        map<pair<pair<int, int>, int>, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    if (nums[k] == -nums[j] - nums[i]) {
                        vector<int> vec;
                        vec.push_back(nums[i]);
                        vec.push_back(nums[j]);
                        vec.push_back(nums[k]);
                        if (mp.find({{nums[i], nums[j]}, nums[k]}) == mp.end()) {
                            mp[{{nums[i], nums[j]}, nums[k]}]++;
                            mp[{{nums[j], nums[i]}, nums[k]}]++;
                            mp[{{nums[i], nums[k]}, nums[j]}]++;
                            mp[{{nums[k], nums[i]}, nums[j]}]++;
                            mp[{{nums[j], nums[k]}, nums[i]}]++;
                            mp[{{nums[k], nums[j]}, nums[i]}]++;
                            ans.push_back(vec);
                        }
                    }
                }
            }
        }
        return ans;
    }
};