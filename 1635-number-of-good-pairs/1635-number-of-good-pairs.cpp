class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // Checking each the pairs using of map
        // Intialising the size 
        int n = nums.size(); 
        unordered_map<int,int>mp;
       for(auto left:nums)
       {
           mp[left]++;
       }
        int ans = 0;
        for(auto right: mp)
        {
            int x = right.second;
            ans = ans+(x*(x-1))/2;
        }
        return ans;
    }
};