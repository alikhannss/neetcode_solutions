class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,vector<int>>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto z:mp){
            if(mp.find(target-z.first)!=mp.end()){
                if(target-z.first==z.first){
                    ans.push_back(min(z.second[0],z.second[1]));
                    ans.push_back(max(z.second[0],z.second[1]));
                    break;
                }
                ans.push_back(min(z.second[0],mp[target-z.first][0]));
                ans.push_back(max(z.second[0],mp[target-z.first][0]));
                break;
            }
        }
        return ans;
    }
};
