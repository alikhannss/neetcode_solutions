class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for (auto num : nums) {
            if (st.find(num) != st.end()) {
                return true;
            }
            st.insert(num);
        }
        return false;
    }
};


// unordered_map 
// map

// Time Complexity
//.     insert -> get -> erase
// ump  O(1).     O(1).    O(1)
//. mp. O(logn).  O(logn). O(logn)


// Space Complexity
