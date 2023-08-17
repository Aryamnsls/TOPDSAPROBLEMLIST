class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        // Using of the BFS- Approach 

        int rows = mat.size(), cols = mat[0].size();

        vector<vector<int>>ans = mat;

        queue<pair<int, int>>q;

        for(int row=0; row<rows; row+=1){

            for(int col = 0; col<cols; col+=1){
                if(mat[row][col] == 0)
                {
                    ans[row][col] = 0;

                    q.emplace(row, col);
                }else{
                    ans[row][col] = INT_MAX;
                }
            }
        }
        int dirs[4] = {1,0,-1,0};
        while(!q.empty())
        {
            int row = q.front().first, col = q.front().second;
            q.pop();

            int nw_dist = 1+ans[row][col];


            for(int i = 0; i<4; i+=1)
            {
                int nw_row = row+dirs[i], nw_col = col + dirs[(i+3)%4];
                bool row_good = (0<=nw_row && nw_row<rows);
                bool col_good = (0<=nw_col && nw_col<cols);
                
                 if (row_good && col_good 
                 && mat[nw_row][nw_col] == 1 &&
          ans[nw_row][nw_col] > nw_dist) {
        ans[nw_row][nw_col] = nw_dist;
        q.emplace(nw_row, nw_col);
            }
            }
         
    }
         return ans;
    }
};