class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Two-Pointer 
        // int left = -1, right = -1;
        // int n = nums.size();

        // // Start from First Index
        // for(int i = 0; i<n; i++)
        // {
        //     if(nums[i]==target){
        //     left = i;
        //     break;
        // }
        // }
        // // End from right Index 
        // for(int j = n-1; j>=0; j--)
        // {
        //     if(nums[j]==target){
        //     right = j;
        //     break;
        // }
        // }
        // return{left, right};

        // Used to solved by using map function
         int left = findLeft(nums, target);
    int right = findRight(nums, target);
    return {left, right};
}

int findLeft(const std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result = mid;
            right = mid - 1; // Look in the left half
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int findRight(const std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result = mid;
            left = mid + 1; // Look in the right half
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result; 

    }
};