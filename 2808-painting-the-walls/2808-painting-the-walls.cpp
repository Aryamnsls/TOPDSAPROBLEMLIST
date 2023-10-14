class Solution {
public:
// Using of 2ddp memonization 
int paints(vector<int>&cost, vector<int>&time, int i, int bank, vector<vector<int>>&dp)
{
    // Base-case 
    if(bank<=0)
    {
        return 0;
    }
    // Check for the left one 
    if(i>=cost.size()){
        return 1e9;
    }
    
    if(dp[i][bank]!=-1)
    {
        return dp[i][bank];
    } 
    else{
        int notTake = paints(cost, time, i+1, bank, dp);
        int take = cost[i] + paints(cost, time, i+1, bank - time[i] -1, dp);
        return dp[i][bank] = min(notTake, take);
    }
}
    int paintWalls(vector<int>& cost, vector<int>& time) {
       vector<vector<int>>dp(501, vector<int>(501, -1));
       return paints(cost, time, 0, time.size(), dp);
    }
};