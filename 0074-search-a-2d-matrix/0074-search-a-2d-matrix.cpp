class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // using the Bianry search function
         
        int row = matrix.size();  // starting row index 

        int col  = matrix[0].size();  // Initialising the col Index starting Point 

        int start = 0;
        // starting point 
        int end = row*col-1;
        // ending Point 
        
       int mid = start+(end-start)/2;

       // using of the mid value 
       

        while(start<=end){
          
          // checking the condition for the row and coloumn 

        //   int rowIndex = mid/cols;
        //   int colIndex = mid%cols;

        int element = matrix[mid/col][mid%col];

          if(element==target){
              return true;
          }
            
            if(element<target){
                
                start = mid+1;
            }
            else{
                
                end = mid-1;
            }
            // update the value 

            mid = start+(end-start)/2;

        }

        return false;
    }

      



     
};