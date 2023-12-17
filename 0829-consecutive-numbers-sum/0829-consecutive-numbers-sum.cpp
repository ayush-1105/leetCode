class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int res = 0;
        for (int i = 1; i <= n; n -= i++)
            n % i ? res : ++res;
        return res;
    }
};