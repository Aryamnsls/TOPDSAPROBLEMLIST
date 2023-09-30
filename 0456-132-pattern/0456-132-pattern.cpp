class Solution {
public:
    bool find132pattern(vector<int>& nums) {
         int n = nums.size();
    if (n < 3) {
        return false;
    }

    stack<int> s;
    int third = INT_MIN; // Initialize the third element to the smallest possible value.

    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] < third) {
            return true; // Found a valid 132 pattern.
        }
        
        while (!s.empty() && nums[i] > s.top()) {
            third = s.top();
            s.pop();
        }

        s.push(nums[i]);
    }

    return false;
}
};