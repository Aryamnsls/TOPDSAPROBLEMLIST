class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        priority_queue<pair<int, pair<int,int> >, vector<pair<int, pair<int, int> > >, greater<pair<int, pair<int, int > > > >pq;

        vector<vector<int> >dist(heights.size(), 
        vector<int>(heights[0].size(), INT_MAX));

        pq.push({0, {0,0}});
        dist[0][0] = 0;

        while(!pq.empty()){
            auto fNode = pq.top();
            pq.pop();

            int frontNodeDifference = fNode.first;  // Distance
            int x = fNode.second.first;   //  X  -  Cordinate
            int y = fNode.second.second;  // Y - Cordinate

            // Check ans tak toh nahin pahuch gaye

            if(x == heights.size()-1 && y == heights[0].size()-1)
            {
                // Last - Row (X) , Last Column (Y)

                return dist[x][y];
            }

            // IF THE VALUE IS NOT PRESENT THEN WE NEED IN ALL THE 4 - DIRECTION

            int dx[] = {-1, 0, 1, 0}; // Old row, same row, next row
            int dy[] = {0, 1, 0, -1}; // same col, next col, same col

            for(int i = 0; i<4; i++){

                int newX = x+dx[i];   // new coordinates
                int newY = y+dy[i];    

                // Check new coordinates should inside the boundary 

                if(newX >=0 && newY >=0 && newX<heights.size() 
                && newY<heights[0].size())
                {
                    // Calculate the difference 

                    int currDifference  = abs(heights[x][y] - 
                    heights[newX][newY]);

                    int newMax = max(frontNodeDifference,             currDifference);

                    if(newMax<dist[newX][newY]){
                        dist[newX][newY] = newMax;

                        pq.push({newMax, {newX, newY}});
                    }
                }
            }

        }

        return 0;
    }
};