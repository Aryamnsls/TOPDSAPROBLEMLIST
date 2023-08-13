class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        int result = 1e9, size = nums.size(), endIdx = x;
        multiset<int> window;
        
        for(int i = x; i < size; i++) {
            window.insert(nums[i]);
        }
        
        for(int i = 0; i < size - x; i++) {
            auto lower = window.lower_bound(nums[i]);
            if((lower == window.end()) or *lower != nums[i]) lower--;
            
            auto upper = window.upper_bound(nums[i]);
            
            if(lower != window.end()) result = min(result, abs(nums[i] - *lower));
            if(upper != window.end()) result = min(result, abs(nums[i] - *upper));
            
            window.erase(window.find(nums[endIdx++]));
        }
        
        return result;
    }
};