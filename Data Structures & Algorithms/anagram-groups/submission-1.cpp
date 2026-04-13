class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>>mp;
        for(auto z:strs){
            map<char,int>mp2;
            for(int i=0;i<z.size();i++){
                mp2[z[i]]++;
            }
            string s="";
            for(auto z:mp2){
                s+=to_string(z.second)+z.first;
            }
            mp[s].push_back(z);
        }
        for(auto z:mp){
            ans.push_back(z.second);
        }
        return ans;
    }
};
