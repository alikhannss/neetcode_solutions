class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for(auto z:nums){
            mp[z]++;
            if(mp[z]>1){
                return true;
            }
        }
        return false;
    }
};
