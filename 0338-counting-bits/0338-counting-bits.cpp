class Solution {
public:
    // vector<int> countBits(int n) {
    //     vector<int> ans(n + 1);

    // for (int i = 0; i <= n; i++) {
    //     ans[i] = ans[i >> 1] + (i & 1);
    // }

    // return ans;

    // Used for the another approach to solve this problem 

    vector<int> countBits(int n)
    {
        vector<int>ans(n+1);
        int sum=0;
        for(int i=0; i<=n; i++)
        {
            int num=i;
            if(i%2!=0)
            {
                ans[i]=ans[i>>1]+1;
            }
            else{
                ans[i] = ans[i>>1];
            }
        }
        return ans;
    }
    
};