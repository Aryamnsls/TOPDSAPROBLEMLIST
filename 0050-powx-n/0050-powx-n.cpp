class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1.0;

        long long absN = n;  // Use 64-bit long long for absN
        if (n < 0) {
            x = 1 / x;
            absN = -absN; // Convert to positive using long long
        }

        double result = 1.0;
        while (absN > 0) {
            // If the least significant bit of absN is 1, multiply the result by x
            if (absN & 1)
                result *= x;

            // Square x and halve absN
            x *= x;
            absN >>= 1;
        }

        return result;
    }
};
