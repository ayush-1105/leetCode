class Solution {
public:
    int climbStairs(int n) {
//        if (n < 2)
//             return 1;

//         //the line of code above corresponde to `ways to reach 4 = (ways to reach 2) + (ways to reach 3)`
//         //it is generalised. Instead of 4 we have n (which we return directly), instead of 2 we have n - 2, instead of 3 we have n - 1
//         return climbStairs(n - 2) + climbStairs(n - 1);
        
        
        int dp[n + 1]; //save total ways to reach 0 to n, so when we need to reach some value that we already calculated, we don't need to calculate it again
        dp[0] = 1; // total ways to reach 0
        dp[1] = 1; // total ways to reach 1

        //if n < 2 we don't need to do any calculation
        if (n >= 2)
            for (int i = 2; i <= n; i++)
                //the line of code above corresponde to `ways to reach 4 = (ways to reach 2) + (ways to reach 3)`
                //it is generalised. Instead of 4 we have i, instead of 2 we have i - 2, instead of 3 we have i - 1
                dp[i] = dp[i - 2] + dp[i - 1];

        return dp[n];
    }
};