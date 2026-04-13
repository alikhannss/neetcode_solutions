class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int, int> mp1;
        for(auto z:nums){
            mp1[z]++;
        }
        map<int, vector<int>> mp2;
        for(auto z:mp1){
            mp2[-z.second].push_back(z.first);
        }
        for(auto z:mp2){
            if(k==0){
                break;
            }
            for(auto v:z.second){
                ans.push_back(v);
                k--;
            }
        }
        return ans;
    }
};
