class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Two-Pointer 
        int left = -1, right = -1;
        int n = nums.size();

        // Start from First Index
        for(int i = 0; i<n; i++)
        {
            if(nums[i]==target){
            left = i;
            break;
        }
        }
        // End from right Index 
        for(int j = n-1; j>=0; j--)
        {
            if(nums[j]==target){
            right = j;
            break;
        }
        }
        return{left, right};
    }
};