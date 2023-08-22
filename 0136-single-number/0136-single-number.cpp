class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Brute- Force 

    //   sort(nums.begin(), nums.end());
    //   for(int i = 1; i<nums.size(); i+=2)
    //   {
    //       if(nums[i]!=nums[i-1])
    //           return nums[i-1];
          
    //   }

    //   return nums[nums.size()-1];

    // Optimised Approach using of the XOR Operator 

    int ans = 0;
    for(int i=  0; i<nums.size(); i++)
    {
        // Using of the XOR Operationn
        ans ^= nums[i];
    }

    return ans;
    }
};