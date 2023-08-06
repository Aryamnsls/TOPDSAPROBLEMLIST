class Solution {
public:
    int numMusicPlaylists(int n, int goal, int k) {
        // Using of the recursion

        const int MOD = 1e9+7;

        vector<vector<long long>> 
        dp(goal +1, vector<long long>(n+1, 0));

        dp[0][0] = 1;

        for(int i = 1; i<=goal; i++){

            for(int j = 1; j<=n; j++){

                // Choose a new song from the remaining 
                // (n - j + 1)songs

                dp[i][j] += dp[i-1][j-1] *(n-j+1);

                dp[i][j] %= MOD;

                if(j>k){

                    // Choose a song from the already played songs, considering k different songs
                    dp[i][j] += dp[i-1][j] * (j-k);
                    dp[i][j] %= MOD;
                }
            }
        }
        return dp[goal][n];
    }
};