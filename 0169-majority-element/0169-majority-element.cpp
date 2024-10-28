class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el = nums[0]; 
        int count = 0;
        
        for(int i = 0; i< nums.size(); i++)
        {
            
            if(count == 0){
                el = nums[i];
            }
            if(el == nums[i])
            {
                count += 1;
            }
            else{
                count -= 1;
            }
        }
        return el;
    }
};