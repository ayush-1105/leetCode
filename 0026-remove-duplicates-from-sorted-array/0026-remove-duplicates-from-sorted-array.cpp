class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
        /*int i = 0;
        for(int j = 1; j < nums.size(); j++)
        {
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;*/
    }
};