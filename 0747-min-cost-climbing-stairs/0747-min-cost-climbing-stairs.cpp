class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // Only 4 Lines to code 
        int n = cost.size(); 
        // Iterate the value from 2 
        for(int i = 2; i<n; i++)
        {
            cost[i]+=min(cost[i-1],cost[i-2]);
        }
        return min(cost[n-1], cost[n-2]);

    }
};