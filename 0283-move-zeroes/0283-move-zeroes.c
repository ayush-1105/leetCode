void moveZeroes(int* nums, int numsSize) {
    int j = 0;
    int n = numsSize;
    for(int i = 0; i<n; i++){
        if(nums[i] != 0){
            nums[j] = nums[i];
            j++;
        }  
    }
    for(; j<n; j++){
        nums[j] = 0;
    }
}