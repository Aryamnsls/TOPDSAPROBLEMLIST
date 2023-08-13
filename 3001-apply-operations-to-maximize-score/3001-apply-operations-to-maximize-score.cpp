int dp[100001] = {};
class Solution {
public:
const int primes[65] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 
    53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 
    137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 
    227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313};  

    int modPow(int x, unsigned int y, unsigned int m)
    {
        if (y == 0)
            return 1;
        long p = modPow(x, y / 2, m) % m;
        p = (p * p) % m;
        return y % 2 ? (p * x) % m : p;
    }
    int primeScore(int n) {
        if (dp[n])
            return dp[n];        
        int score = 0, val = n;
        for (int i = 0; i < 65 && n >= primes[i]; ++i) {
            if (n % primes[i] == 0) {
                ++score;
                while (n % primes[i] == 0)
                    n /= primes[i];
            }
        }
        return dp[val] = score + (n > 1);
        
    }
    int maximumScore(vector<int>& nums, int k) {
        long long res = 1, sz = nums.size(), mod = 1000000007;
        vector<int> score, ids(sz);
        iota(begin(ids), end(ids), 0);
        sort(begin(ids), end(ids), [&](int i, int j){
            return nums[i] > nums[j];
        });
        for (int n : nums)
            score.push_back(primeScore(n));
        for (int id : ids) {
            
            int i = id, j = id;
            while (i > 0 && score[i - 1] < score[id])
                --i;
            while (j < sz && score[j] <= score[id])
                ++j;
            
            long long take = min(k, (id - i + 1) * (j - id));
            k -= take;
            res = (res * modPow(nums[id], take, mod)) % mod;
            if (k == 0)
                break;
        }
        return res;
    }
};