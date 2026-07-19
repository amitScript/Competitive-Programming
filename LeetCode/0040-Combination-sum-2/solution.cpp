
class Solution {
public:

    set<vector<int>> s;
    
    void GetallCombination(vector<int>& arr,int idx, vector<int>& combin, vector<vector<int>>& ans, int tar){

        if(tar==0){
         ans.push_back(combin);    
            return;
        }

        if(idx==arr.size() || tar<0){
            return;
        }

        if(arr[idx] > tar){
         return;
         }


        combin.push_back(arr[idx]);

        GetallCombination(arr,idx+1, combin, ans, tar-arr[idx]); 
         
         combin.pop_back(); // backtracking

         int i=idx+1;
         while(i<arr.size() && arr[i]==arr[i-1]){
            i++;
         }
          GetallCombination(arr,i, combin, ans, tar); //exclude + skip duplicates
        

    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int tar) {
      sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        vector<int> combin;

        GetallCombination(arr,0, combin, ans, tar);


        return ans;
    }
};