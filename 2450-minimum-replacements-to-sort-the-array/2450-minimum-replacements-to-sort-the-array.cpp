class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        // Solving By Using of the Greedy 

        long long res = 0;
        int n = nums.size();
        // Moving Backwards 

        long long maxMinValue = nums[n-1];

        // Traverse the Loop from Backside 

        for(int i= n-1; i>=0; i--)
        {
            // Use the Ceil Value to get the maxmin value 

            long long parts = ceil(nums[i] / (double)maxMinValue);

            // No of Steps in parts - 1

            res+=(parts-1);

            // The New MaxiMinvalue will be the part 

            maxMinValue = nums[i]/parts;
        }
        return res;  
    }
};