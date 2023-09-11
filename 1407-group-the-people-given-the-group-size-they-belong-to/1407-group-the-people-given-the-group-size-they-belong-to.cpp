class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        // Using of the unordered_map
        unordered_map<int, vector<int>>temp_mp;
        vector<vector<int>>result;

        for(int i=0; i<groupSizes.size(); i++)
        {
            int size = groupSizes[i];
            temp_mp[size].push_back(i);

            if(temp_mp[size].size()==size){
                result.push_back(temp_mp[size]);
                temp_mp[size].clear();
            }
        }
        return result;
    }
};