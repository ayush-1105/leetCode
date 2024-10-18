class Solution {
public:
    // Recursive function to explore subsets and count those with maximum OR value
    int solve(int i, int ors, int maxi, vector<int>& nums) {
        if(i >= nums.size()){
            // Base case: if OR of the current subset equals the maximum OR, count it
            return (ors == maxi) ? 1 : 0;
        }

        // Include the current element in the subset OR
        int cnt = 0;
        cnt += solve(i + 1, ors | nums[i], maxi, nums);
        
        // Exclude the current element from the subset OR
        cnt += solve(i + 1, ors, maxi, nums);
        
        return cnt;
    }

    // Function to count the number of subsets with maximum OR value
    int countMaxOrSubsets(vector<int>& nums) {
        int maxi = 0;
        
        // Calculate the maximum OR value from all elements
        for(auto it: nums){
            maxi |= it;
        }

        // Start recursion from the first element with OR = 0
        return solve(0, 0, maxi, nums);
    }
};