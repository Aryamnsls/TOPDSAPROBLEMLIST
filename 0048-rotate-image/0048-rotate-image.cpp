class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // Grid form approach 
       
          
        //   int size  = matrix.size();
        // // Dedicated for the row - wise 

        // for(int i = 0;i<size; i++)
        // // Dedicated for the column wise

        // for(int j = 0; j<i; j++)

        //     // swap the matrix 

        //     swap(matrix[i][j], matrix[j][i]);

        //     for(int i = 0; i<size; i++)

        //     // Sort the number 
            
        //         reverse(matrix[i].begin(), matrix[i].end());


        // Another Approach 

        int size = matrix.size();

        // Dedicated for the row-wise 

        for(int i = 0; i<size; i++)

            // Dedicated for the column-wise 

            for(int j = 0; j<i; j++)

                // Swap the matrix 

                swap(matrix[i][j], matrix[j][i]);

                // Traverse the number till the size 

                for(int i = 0; i<size; i++)

                    // Rverse the Number 

                    reverse(matrix[i]. begin(), matrix[i].end());
                
            
        
            

    }
};