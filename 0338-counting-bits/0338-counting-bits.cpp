class Solution {
public:
    vector<int> countBits(int n) {
        // Brute- Force 
    vector<int>ans(n+1);
        for (int i = 0; i <= n; ++i) {
        int num = i;
        int count = 0;

        while (num != 0) {
            count += num & 1;  // Check if the last bit is set
            num >>= 1;        // Right shift to remove the last bit
        }

        ans[i] = count;
    }
     return ans;
    }
};