class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        

        int l = 0;
        int r = 0;
        long long total = 0;
        int maxi = 0;

        while (r < nums.size()) {
            total += nums[r];
            
            while ((long long)(nums[r]) * (r-l+1) > total + k) {
                total -= nums[l];
                l++;
            }

            maxi = max(maxi, (r-l+1));
            r++;
        }

        
        return maxi;
    }
};