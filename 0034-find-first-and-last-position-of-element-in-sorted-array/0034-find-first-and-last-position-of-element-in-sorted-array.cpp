class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int start = -1, end = -1;

        int n = nums.size();

        // START INDEX

        for(int i = 0; i<n; i++){

            if(nums[i] == target){
                start = i;

                break;
            }
        }

        // END INDEX

        for(int j = n-1; j>=0; j--){

            if(nums[j]==target){
                end = j;

                break;
            }
        }

        return {start, end};
    }
};