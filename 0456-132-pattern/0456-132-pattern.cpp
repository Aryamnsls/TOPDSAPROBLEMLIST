class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        // use the binary search code 
        // int start = 0;
        // int end = nums.size()-1;
        // int k = 0;
        // while(start<end)
        // {
        //     // Find out the mid value 
        //     int mid = (start+end)/2;
        //     // Check the condition 
        //     if(mid==k)
        //     {
        //         return true;
        //     }
        //     // If the target value is greater than mid value 
        //     if(mid<k)
        //     start = mid+1;

        //     if(mid>k)
        //     end = mid-1;
        //     return false;
        // }
        // return true || false;

        
 stack<int> stack;  // decreasing stack
    int ak = INT_MIN;  // We want to find a seq ai < ak < aj.

    for (int i = nums.size() - 1; i >= 0; --i) {
      // ai < ak, we're done because ai must also smaller than aj.
      if (nums[i] < ak)
        return true;
      while (!stack.empty() && stack.top() < nums[i])
        ak = stack.top(), stack.pop();
      stack.push(nums[i]);  // nums[i] is a candidate of aj.
    }

    return false;

    }
};