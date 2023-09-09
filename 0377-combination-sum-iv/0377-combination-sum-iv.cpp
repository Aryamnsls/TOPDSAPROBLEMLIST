class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<unsigned int> dp(target+1, 0);
        dp[0] = 1;

        // for(int i=0; i<=target; i++)
        
        //      for(int j=i+1; j<=target; j++)
             
        //          if(nums[i]+nums[j]==target)
                  
        //          count+= nums[i] + nums[j];
             
        // // Used to sort the value 
        // sort(nums.begin(), nums.end());
        // return count;

        for(int i=1; i<=target; i++)
        {
            for(int num: nums){
                if(i - num >=0)
                {
                    dp[i] += dp[i-num];
                }
            }
        }
        return dp[target];
    }
};