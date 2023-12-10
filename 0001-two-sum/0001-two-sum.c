/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize=2;

int *array = malloc(2*sizeof(int) ); // Output array max 2 elemente

for (int i=0; i<numsSize;i++)
{
    for( int j=1+i;j<numsSize;j++)
    {
        if(nums[i] + nums[j] == target)
        {
        array[0]=i;
        array[1]=j;
        return array;
        }
    }   
    
}
return -1;
    
}