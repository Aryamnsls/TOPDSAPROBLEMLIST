class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // Linear Search 
        // T.C O(n^2), Brute-Force
        // int n = nums.size();

        // for(int i = 0; i<n; i++){

        //     if(nums[i]==target)

        //     return true;
        // }

        // return false;

        // Using of the binary search O(Log N)

        int n = nums.size();

        int low = 0;
        int high = n-1;

        // Check for the Condition 

        while(low<=high){

            // Find out the Mid value 

            int mid = (low+high)/2;

            if(nums[mid]==target)

            return true;

            // If the mid value is Lesser than the target value 
            // I will Increment the low++

             if(nums[low]<nums[mid]){

                // If the target Lies in non-rotated Search Space 

                if(target >= nums[low] && target<nums[mid])

                high = mid-1;
                else
                low = mid+1;

            }else if(nums[low] > nums[mid]){

                if (target > nums[mid] && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;

                  } else {
            // Handle duplicates by moving the low pointer
            low++;
        }
    }

    return false;
    }
};