class Solution {
    // Using of the 10^9
    int mod = 1e9+7;
public:
    int countOrders(int n) {
        
        long long  count  = 1;
        for(int i=2; i<=n; i++){
            count  = (count*(2*i-1)*i)%mod;
        }
        return count;
    }
};