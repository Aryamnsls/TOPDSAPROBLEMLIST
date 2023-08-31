class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        // Greedy Approach 

        vector<int>arr(n+1, 0);
        for(int i = 0; i<ranges.size(); i++)
        {
            if(ranges[i]==0)
            continue;

            int left = max(0, i-ranges[i]);
            arr[left] = max(arr[left], i+ranges[i]);
        }

        int end = 0, far_end_ranges = 0, cnt =  0;
        for(int i = 0; i<=n; i++)
        {
            if(i>end)
            {
                if(far_end_ranges<=end) return-1;
                end = far_end_ranges;
                cnt++;
            }
            far_end_ranges = max(far_end_ranges, arr[i]);

        }

        return cnt + (end<n);
    }
};