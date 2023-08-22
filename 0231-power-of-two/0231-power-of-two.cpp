class Solution {
public:
    bool isPowerOfTwo(int n) {
        

        // if(n==0) return false;

        // while(n%2==0)

        // n/=2;

        // return n==1;


        // 2nd Approach using of the recurison 


        // if(n==0)  return false;

        // return ((n==1 || (n%2==0 && isPowerOfTwo(n/2))));


        // 3rd Approach using of the STL Approach 

        // if(n<0)  return false;
        
        // int bits = __builtin_popcount(n);

        // if(bits==1)

        //     return true;


        //     return false;

        // if((n & (n-1))==0)
        // return true;
        // else
        // return false;
 if (n <= 0) {
        return false;  // Handle the case of non-positive integers
    }
    
    return (n & (n - 1)) == 0;



    }
};