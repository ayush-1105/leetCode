class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // if(nums.size() <= 2) return nums.size();
        int j = 0;
        for(int i = 0; i < nums.size() ; i++){
            
            if( j < 2 || nums[i] != nums[j - 2])
            {
                nums[j++] = nums[i];
                
                
            }
        }
        return j;
    }
};