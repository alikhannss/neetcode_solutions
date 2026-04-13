class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = INT_MIN;
        int r = heights.size()-1, l = 0;
        while (r > l) {
            ans = max(ans, min(heights[l], heights[r]) * (r-l));
            if (heights[r] > heights[l]) {
                l++;
            }else {
                r--;
            }
        }
        return ans;
    }
};
