class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // Grid form approach 
        // Dp - Inclusive form 
          
          int size  = matrix.size();
        // Dedicated for the row - wise 

        for(int i = 0;i<size; i++)
        // Dedicated for the column wise

        for(int j = 0; j<i; j++)

            // swap the matrix 

            swap(matrix[i][j], matrix[j][i]);

            for(int i = 0; i<size; i++)
                reverse(matrix[i].begin(), matrix[i].end());
            

    }
};