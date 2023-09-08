class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Create a vector 

        vector<vector<int>>vis;

        // Used to insert the element 1 

        vis.push_back({1});

        // check if my numRows = 1

        if(numRows==1){
            return vis;
        }
        // Iterate the loop from 2 to n-1

        for(int i=2; i<=numRows; i+=1)
        {
            // Create a vector currRow 

            vector<int>curr(i);
            // Check for the oth Index
            curr[0]= 1;
            // Check for the Previus -1 index 

            curr[i-1] = 1;
            
            //Iterate for the another Loop 

            for(int j=1; j<vis.back().size(); j+=1)
            {
                curr[j] = vis.back()[j-1] + vis.back()[j];
            }
            vis.push_back(curr);

        }
        return vis;

    }
};