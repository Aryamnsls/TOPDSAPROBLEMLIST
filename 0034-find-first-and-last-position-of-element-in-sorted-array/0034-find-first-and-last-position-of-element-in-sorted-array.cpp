class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Two-Pointer 
        int left = -1, right = -1;
        // Initialise the n size 
        int n = nums.size();
        // Start with the left index 
        for(int i = 0; i<n; i++)
        {
            // Check that if we found the target element then we need to break 
            if(nums[i]==target)
            {
                // Store it to the left index 
                left = i;
                break;
            }
        }
        // Same goes for the right index as backwards attack  
        for(int j = n-1; j>=0; j--)
        {
            // Check the value again if we found the target element 
            if(nums[j]==target){
            right = j;
            break; 
            }
        }
        // Atlast return the left and right 
        return {left, right};
    }
};