class Solution {
public:
// Used to create the ones 
int numOnes(vector<int>row){
    // Used the approach of binary search 
    int lo = 0;
    int hi = row.size();
    while(lo<hi)
    {
        int mid = (lo+hi)/2;
        if(row[mid]==1)
        lo = mid+1;
        else
        hi = mid;
    }
    return lo;
}
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // Create for row 
        int rows = mat.size();
        // Create for column
        int cols = mat[0].size();

        int score[rows];  // score is used to access the value of rows
        int j;  // Strongest value 

        for(int i=0; i<rows; i++)
        {
          j = numOnes(mat[i]);
          score[i] = j*rows+i;
        }
        // Used to sort the value 

        sort(score,score+rows);
        vector<int>ans(k);

        for(int i=0; i<k; i++)
        {
            ans[i] = score[i]%rows;
        }
        return ans;


    }
};