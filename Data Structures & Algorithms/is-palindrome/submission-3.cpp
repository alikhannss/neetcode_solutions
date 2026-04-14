class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (right > left) {
            if (isalnum(s[right]) == false) {
                right--;
                continue;
            }
            if (isalnum(s[left]) == false) {
                left++;
                continue;
            }
            if ((char)tolower(s[left]) != (char)tolower(s[right])) {
                return false;
            }
            right--;
            left++;
        }
        return true;
    }
};
