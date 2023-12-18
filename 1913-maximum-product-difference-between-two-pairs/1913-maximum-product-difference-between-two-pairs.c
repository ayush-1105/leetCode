int maxProductDifference(int* nums, int numsSize){
    for (int i = 1; i < numsSize; i++) {
        int key = nums[i];
        int j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j = j - 1;
        }

        nums[j + 1] = key;
    }

    // Calculate the maximum product difference
    return nums[numsSize - 1] * nums[numsSize - 2] - nums[0] * nums[1];
}