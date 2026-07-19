class Solution {
public:

    set<vector<int>> s;
    
    void GetallCombination(vector<int>& arr,int idx, vector<int>& combin, vector<vector<int>>& ans, int tar){
        if(idx==arr.size() || tar<0){
            return;
        }

        if(tar==0){
            if(s.find(combin)==s.end()){
                ans.push_back(combin);
                s.insert(combin);
            }
            return;
        }

        combin.push_back(arr[idx]);

        GetallCombination(arr,idx+1, combin, ans, tar-arr[idx]); //include single
         GetallCombination(arr,idx, combin, ans, tar-arr[idx]); //include multiple
         combin.pop_back(); // backtracking
          GetallCombination(arr,idx+1, combin, ans, tar); //exclude
        

    }
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
      
        vector<vector<int>> ans;
        vector<int> combin;

        GetallCombination(arr,0, combin, ans, tar);


        return ans;
    }
};