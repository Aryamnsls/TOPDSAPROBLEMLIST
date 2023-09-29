class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       // Use the Two-Pointer Approach 
       int i = 0, j = nums.size()-1;
       // Initialise the increasing and decreasing 
       bool increasing = true, decreasing=  true;
       // Check the condition 
       while(i<j)
       {
           // Check the array is incrasing or not 
           if(nums[i]>nums[i+1])
           {
               increasing = false;
           }
           // Check the array is decreasing or not 
           if(nums[i]<nums[i+1])
           {
               decreasing =  false;
           }
           // Move the Pointers 
           i++;
       }
       // Return the if the array is moving increasing and decreasing 
       return increasing || decreasing;
       
    }
};