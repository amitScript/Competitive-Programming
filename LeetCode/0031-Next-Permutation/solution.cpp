class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int n = nums.size();
         int pivot=-1;;
         // find pivot
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                 pivot = i;
                 break;
            }

        }

        // array is in decending form
        if(pivot == -1){
            for(int i = 0; i < n/2; i++) {
              swap(nums[i], nums[n-i-1]);
           }
           return;
        }


            // finding next sucessor of pivot form end and swap
        
            for(int j=n-1; j>pivot; j--){
                 if(nums[j]>nums[pivot]){
               
                    swap(nums[j],nums[pivot]);
                      break;
                       }
            }

             // reverse array after pivot
            int l = pivot+1;
            int r = n-1;
    
            while(l<r){
                swap(nums[l], nums[r]);
                     l++;
                     r--;
             }
             
         

           
             
        
            
         
    
    
    

    }
};