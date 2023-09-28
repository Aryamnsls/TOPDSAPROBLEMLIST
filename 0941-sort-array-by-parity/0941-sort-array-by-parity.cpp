class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // Create a vector 
        vector<int>ans;
        // Using the sort the array 
        // sort(ans.begin(), ans.end());
        // Traverse the for loop 
        for(auto i: nums)
        {
            //  Check the value 
            if(i%2==0){
            ans.push_back(i);
            }
        }
    
    for(auto j: nums)
    {
        if(j%2!=0){
        ans.push_back(j);
        }
    }
    return ans;
}
};