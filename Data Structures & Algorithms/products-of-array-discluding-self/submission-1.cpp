class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> vec(nums.size());
        unordered_map<int, stack<int>> ump;
        int prod = 1;
        for (int i = 0; i < nums.size(); i++) {
            ump[nums[i]].push(prod);
            prod *= nums[i];
        }
        prod = 1;
        for (int i = nums.size()-1; i>=0; i--) {
            vec[i] = ump[nums[i]].top() * prod;
            ump[nums[i]].pop();
            prod *= nums[i];
        }
        return vec;
    }
};

// [4,3,2,1,2]

// 4 1
// 3 4
// 2 
// 1 24
