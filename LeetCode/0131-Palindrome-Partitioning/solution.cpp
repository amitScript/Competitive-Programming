
class Solution {
public:

    bool isPalindrome(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    void getAllPartitions(string &s, int idx,
                          vector<string> &curr,
                          vector<vector<string>> &ans) {

      
        if (idx == s.length()) {
            ans.push_back(curr);
            return;
        }

        
        for (int end = idx; end < s.length(); end++) {

            if (isPalindrome(s, idx, end)) {

                string part = s.substr(idx, end - idx + 1);

                
                curr.push_back(part);

                
                getAllPartitions(s, end + 1, curr, ans);

                
                curr.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans;
        vector<string> curr;

        getAllPartitions(s, 0, curr, ans);

        return ans;
    }
};