class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        // Greedy Approach 

        // vector<int>arr(n+1, 0);
        // for(int i = 0; i<ranges.size(); i++)
        // {
        //     if(ranges[i]==0)
        //     continue;

        //     int left = max(0, i-ranges[i]);
        //     arr[left] = max(arr[left], i+ranges[i]);
        // }

        // int end = 0, far_end_ranges = 0, cnt =  0;
        // for(int i = 0; i<=n; i++)
        // {
        //     if(i>end)
        //     {
        //         if(far_end_ranges<=end) return-1;
        //         end = far_end_ranges;
        //         cnt++;
        //     }
        //     far_end_ranges = max(far_end_ranges, arr[i]);

        // }

        // return cnt + (end<n);

        // optimised approach Using of the Top-Bottom Approach 

          vector<int>dp(n+1, n+1);  // Create a vector 

          dp[0] = 0;

          for(int i =  0; i<=n; i+=1)
          {
 int left = max(0, i-ranges[i]), right = min(i+ranges[i], n);

         for(int j = left; j<=right; j+=1)
         {
             dp[j] = min(dp[j], dp[left]+1);
         }


          }

          return dp[n] == n+1? -1 : dp[n];
    }
};