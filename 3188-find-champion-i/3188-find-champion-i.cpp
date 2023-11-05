class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
       for(int i = 0; i<grid.size(); i++)
       {
           bool isChampion = true;
           for(int j=  0; j<grid.size(); j++)
           {
               if(i==j)
               continue;

               if(grid[i][j]!=1)
               {
                   isChampion  = false;

               }
           }
           if(isChampion)
           return i;
    }
    return -1;
    }
};