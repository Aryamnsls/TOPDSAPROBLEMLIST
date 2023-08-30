class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        
        // Used to sort the array 

        // sort(nums.begin(), nums.end());
        
        // Size of the nums 

        int n = nums.size();
        int last = nums[n-1];
        long long ans = 0;  // Used to store the value 

        for(int i = n-2; i>=0; i--){
            if(nums[i] > last){
                int t = nums[i]/ last;
                if(nums[i] % last)t++;
                last= nums[i]/t;
                ans+=t-1;

            }else{
                last = nums[i];
            }
        }
        return ans;
    }
};