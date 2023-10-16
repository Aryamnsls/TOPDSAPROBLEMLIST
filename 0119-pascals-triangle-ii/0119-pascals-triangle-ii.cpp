class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // Using of the vector -> Step 1 
        vector<int>res(1,1);
        // create a previous section
        long long prev = 1;
        // Traverse till RowIndex 
        for(int left = 1; left<=rowIndex; left+=1){

            long long next_value = prev * (rowIndex-left+1)/left;
            res.push_back(next_value);
            prev = next_value;
        }
        return res;
    }
};