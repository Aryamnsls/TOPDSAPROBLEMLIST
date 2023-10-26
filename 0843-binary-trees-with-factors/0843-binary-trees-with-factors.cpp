class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        const int MOD = 1000000007;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        unordered_map<int, long> dp;
        
        for (int i = 0; i < n; i++) {
            dp[arr[i]] = 1; // Each element can form a single-node tree by itself.
            for (int j = 0; j < i; j++) {
                if (arr[i] % arr[j] == 0 && dp.count(arr[i] / arr[j])) {
                    dp[arr[i]] += (dp[arr[j]] * dp[arr[i] / arr[j]]) % MOD;
                }
            }
        }
        
        long total = 0;
        for (const auto& pair : dp) {
            total = (total + pair.second) % MOD;
        }
        
        return static_cast<int>(total);
    }
};
