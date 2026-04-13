class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> ans;
        int prod = 1;
        for (int i = 0; i < nums.size(); i++) {
            left.push_back(prod);
            prod *= nums[i];
        }
        prod = 1;
        for (int i = nums.size()-1; i >= 0; i--) {
            right.push_back(prod);
            prod *= nums[i];
        }
        for (auto z : right) {
            cout << z << endl;
        }
        for (int i = 0, j = nums.size()-1; i < nums.size(); i++, j--) {
            ans.push_back(left[i] * right[j]);
        }
        return ans;
    }
};
