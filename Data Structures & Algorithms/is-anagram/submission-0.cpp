class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp1;
        map<char, int> mp2;
        for(auto z:s){
            mp1[z]++;
        }
        for(auto z:t){
            mp2[z]++;
        }
        if(mp1.size()!=mp2.size()){
            return false;
        }
        int var=1;
        for(auto z:mp1){
            if(mp2[z.first]!=z.second){
                var=0;
            }
        }
        if(var==1){
            return true;
        }else{
            return false;
        }
    }
};
