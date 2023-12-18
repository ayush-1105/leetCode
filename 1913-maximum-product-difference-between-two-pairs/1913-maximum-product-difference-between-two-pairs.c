int maxProductDifference(int* nums, int numsSize){
    for (int i = 0; i < numsSize - 1; i++)
        for (int j = 0; j < numsSize - i - 1; j++)
            if (nums[j] > nums[j + 1])
                // Swap elements if they are in the wrong order
                nums[j] ^= nums[j + 1] ^= nums[j] ^= nums[j + 1];

    return nums[numsSize - 1] * nums[numsSize - 2] - nums[0] * nums[1];
}