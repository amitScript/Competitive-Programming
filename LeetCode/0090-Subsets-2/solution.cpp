

class Solution {
public:
    vector<vector<int>> ans;

    void solve(int idx, vector<int>& nums, vector<int>& curr) {

        if (idx == nums.size()) {
            ans.push_back(curr);
            return;
        }

        // Include
        curr.push_back(nums[idx]);
        solve(idx + 1, nums, curr);

        // Backtrack
        curr.pop_back();

        // Exclude
        int i=idx+1;
        while(i<nums.size() && nums[i]==nums[i-1]){
            i++;
        }
        solve(i, nums, curr);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> curr;
        solve(0, nums, curr);
        return ans;
    }
};