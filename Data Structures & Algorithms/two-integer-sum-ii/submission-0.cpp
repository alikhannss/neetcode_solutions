class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;
        vector<int> ans;
        while (r > l) {
            if (numbers[r] + numbers[l] > target) {
                r--;
            }else if (numbers[r] + numbers[l] < target) {
                l++;
            }else {
                ans.push_back(l+1);
                ans.push_back(r+1);
                break;
            }
        }
        return ans;
    }
};
