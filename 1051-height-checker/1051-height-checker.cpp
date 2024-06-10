class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans = 0;
        vector<int> sorted(heights.begin(), heights.end());
        sort(sorted.begin(), sorted.end());
        for(int i = 0; i < heights.size(); i++) {
            ans += (sorted[i] != heights[i]);
        }
        return ans;
    }
};