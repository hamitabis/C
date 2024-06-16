int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    int* result = malloc(2 * sizeof(int));
    
    if (!result) return NULL;

    for (int i = 0; i < (numsSize - 1); i++) {
        for (int j = (i + 1); j < numsSize; j++) {
            if ((nums[j] + nums[i]) == target) {
                result[0] = i, result[1] = j;
            }
        }
    }
    return result;
}
