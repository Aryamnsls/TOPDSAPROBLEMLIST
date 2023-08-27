class Solution {
public:
    bool canCross(vector<int>& stones) {
         int n = stones.size();
    
    // Create a map to store the possible jump distances for each stone
    unordered_map<int, unordered_set<int>> jumpMap;
    for (int stone : stones) {
        jumpMap[stone] = unordered_set<int>();
    }
    
    jumpMap[0].insert(1);  // Initial jump
    
    for (int i = 0; i < n - 1; i++) {
        int stone = stones[i];
        for (int jump : jumpMap[stone]) {
            int nextStone = stone + jump;
            if (nextStone == stones[n - 1]) {
                return true;  // Frog successfully reached the last stone
            }
            
            if (jumpMap.find(nextStone) != jumpMap.end()) {
                if (jump - 1 > 0) jumpMap[nextStone].insert(jump - 1);
                jumpMap[nextStone].insert(jump);
                jumpMap[nextStone].insert(jump + 1);
            }
        }
    }
    
    return false;
    }
};