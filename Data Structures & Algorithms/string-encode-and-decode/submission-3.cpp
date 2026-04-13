class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(auto z:strs){
            ans+=z;
            ans+="#54";
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        cout<<s;
        string word = "";
        int i=0;
        while(i<s.size()){
            if(s[i] == '#' && s[i+1] == '5' && s[i+2] == '4'){
                ans.push_back(word);
                i+=3;
                word = "";
                continue;
            }else{
                word+=s[i];
            }
            i++;
        }
        return ans;
    }
};
