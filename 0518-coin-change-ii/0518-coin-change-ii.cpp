class Solution {
public:


    int change(int amount, vector<int>& coins) {

     vector<int> dp(amount +1);

     dp[0] = 1;

     for(auto& index: coins){
         for(int i = index; i<=amount; i++){

             dp[i] += dp[i-index];

         }
     }


return dp[amount];

    }
};