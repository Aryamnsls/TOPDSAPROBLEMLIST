class Solution {
public:
    int findKthLargest(vector<int>& a, int &k) {
        
        // Brute-force 
       int n = a.size();
      
      // Used to sort the array 

     sort(a.begin(), a.end());

      return a[n-k];
         

    }
};