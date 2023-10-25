class Solution {
public:
    int kthGrammar(int n, int k) {
        // Intialise the Flag 
        bool ans = true;

        n  = pow(2, n-1);

        while(n!=1)
        {
            n/=2;

            if(k>n)
            {
                k-=n;
                ans = !ans;
            }
        }

        return ((ans) ? 0:1);
    }
};