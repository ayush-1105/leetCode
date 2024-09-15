class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
//         int result = INT_MAX;
//         int x;

//         for(int i = 0; i<nums.size(); i++){
//             x = 0;
            
//             x = abs(nums[i]);

//             if(x<abs(result) || (x == abs(result) && nums[i] > result) ){
//                 result = nums[i];
//             }
//         }
//         return result;
        sort(nums.begin(), nums.end());
        int close = INT_MAX, ans;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(abs(nums[i]) <= close)
            {
                close = abs(nums[i]) , ans = nums[i];
                
            }
        }
        return ans;
    }
};