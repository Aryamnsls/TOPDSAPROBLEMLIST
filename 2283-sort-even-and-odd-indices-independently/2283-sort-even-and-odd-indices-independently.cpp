class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
    //     // 2-Pointers 
    //     int i=0, j = nums.size()-1;
    //     // Check the condition 
    //     while(i<j)
    //     {
    //         if(nums[i]%2!=0){
    //         // used to swap the values 
    //         swap(nums[i], nums[j]);
    //         j--;
    //     }else{
    //         i++;
    //     }
    //     // Used to sort the values
    //     sort(nums[i], nums[j]);
    //     return nums;
    // }

    // Used another approach 
    int n = nums.size();
    // create a vector a 
    vector<int>a;
    //  Create a vector b 
    vector<int>b;

    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        a.push_back(nums[i]);
        else
        b.push_back(nums[i]);

    }
    // Used to sort the values of a odd index

    sort(a.begin(), a.end());
    // Used to sort the values of b of even index
    sort(b.begin(), b.end(), greater<int>());

    // create a vector 

    vector<int>ans(n);

    for(int i=0, j=0; j<a.size(); i+=2, j++) ans[i] = a[j];
    for(int i=1, j=0; j<b.size(); i+=2, j++) ans[i] = b[j];
     return ans;
    }
};