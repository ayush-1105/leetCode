class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // vector<int> ans;
        // for(int i = 0; i < nums.size(); i++) {
        //     int index = nums[i] % nums.size();
        //     nums[index] += nums.size();
        // }
        // for(int i = 0; i < nums.size(); i++) {
        //     if((nums[i] / nums.size()) >= 2) {
        //         ans.push_back(i);
        //     }
        // }
        // if(ans.size() == 0) return {-1};
        // return ans;
        
        vector<int> result; // Result vector to store duplicate numbers
        for (int i = 0; i < nums.size(); ++i) {
            int index = abs(nums[i]) - 1; // Get the index corresponding to the number
            if (nums[index] < 0) { // If the number at index is negative, it means it's seen before
                result.push_back(index + 1); // Add the duplicate number to the result
            } else {
                nums[index] = -nums[index]; // Mark the number as seen by negating it
            }
        }
        return result; 
    }
};