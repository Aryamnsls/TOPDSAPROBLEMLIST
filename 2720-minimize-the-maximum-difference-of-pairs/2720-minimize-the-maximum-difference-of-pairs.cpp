class Solution {
public:


 bool solve(vector<int>&nums, int d, int p){  

     // D - > Difference , P -> pairs 

     int n = nums.size();

     int count  = 0;

     for(int i = 0; i<n-1; i++){

        // Example -> 1 - 1 <= 2 

         if(nums[i+1] - nums[i]<=d){

             count++;
             i++; 
         }
          // Checking the Count> pairs

         if(count>=p)
            return true;
         }
         return false;
 }
    int minimizeMax(vector<int>& nums, int p) {
        
        // Sort the array 

        sort(nums.begin(), nums.end());

        int n = nums.size();

        // Maximum Difference using the Binary Search Approach 

        int low = 0, high = nums[n-1] - nums[0];

        // Check that low < high 

        while(low<high){
            int mid = (low+high)/2;
        // Checking the function 
        
        if(solve(nums, mid, p))

        high = mid;

        else

        low = mid+1;

    }

    return low;

    }

};