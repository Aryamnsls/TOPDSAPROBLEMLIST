class Solution {

    const int MOD = 1e9+7;  // used for the find the min number  
public:
    int countOrders(int n) {
        // Using of Dp 

        long long count = 1; // Create a variable 
        for(int i=2; i<=n; i++)
        {
            count = ( count * (2*i-1) * i)% MOD;
        }
        return count;

    }
};