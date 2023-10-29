class Solution {
public:
    int dp[100005][18];
    int find(unordered_map<int,vector<int>>&graph,int source, vector<int>&coins,int k,int type){
        int ans=0;
        if(dp[source][type]!=-1)return dp[source][type];
        int val = coins[source]/(1<<type);
        int pick1 = val-k;
        int pick2 = floor(val/2.0);
        for(auto it:graph[source]){
            pick1 +=find(graph,it,coins,k,type);
            if(type<17)
            pick2 +=find(graph,it,coins,k,type+1);
        }
        return dp[source][type] = max(pick1,pick2);
    }
        
        
    int maximumPoints(vector<vector<int>>& edges, vector<int>& coins, int k) {
        memset(dp,-1,sizeof(dp));
        unordered_map<int,vector<int>>graph;
        for(auto it:edges){
            graph[min(it[0],it[1])].push_back(max(it[0],it[1]));
        }
        return find(graph,0,coins,k,0);
    }
};