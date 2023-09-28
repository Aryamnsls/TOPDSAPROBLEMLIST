class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    //     // Create a vector 
    //     vector<int>ans;
    //     // Using the sort the array 
    //     // sort(ans.begin(), ans.end());
    //     // Traverse the for loop 
    //     for(auto i: nums)
    //     {
    //         //  Check the value 
    //         if(i%2==0){
    //         ans.push_back(i);
    //         }
    //     }
    
    // for(auto j: nums)
    // {
    //     if(j%2!=0){
    //     ans.push_back(j);
    //     }
    // }
    // return ans;

    // Used another approach to slve this problem using 2-pointers
    // Left index
    int i=0, j = nums.size()-1;
    while(i<j)
    {
        if(nums[i]%2!=0){
            swap(nums[i], nums[j]);
            j--;
        }else{
            i++;
        }
    }
    return nums;
}
};