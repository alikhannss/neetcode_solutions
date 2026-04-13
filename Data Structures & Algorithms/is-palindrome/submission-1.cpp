class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";
        for (auto z : s) {
            if (z >= 48 && z <= 57) {
                s2+=(char)z;
            }else if ((z >= 65 && z<= 90) || (z >= 97 && z<= 122)) {
                s2+=tolower(z);
            }
        }
        cout<<s2;
        int l = 0;
        int r = s2.size()-1;
        while (r > l) {
            if (s2[r] != s2[l]) {
                return false;
            }
            r--;
            l++;
        }
        return true;
    }
};
