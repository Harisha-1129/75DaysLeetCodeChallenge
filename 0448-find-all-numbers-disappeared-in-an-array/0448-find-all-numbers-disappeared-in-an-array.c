/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *freq=(int*)calloc(numsSize+1,sizeof(int));
    int *result=(int*)malloc(numsSize*sizeof(int));
    int count=0;
    for(int i=0;i<numsSize;i++)
    {
        freq[nums[i]]++;
    }
    for(int i=1;i<=numsSize;i++)
    {
        if(freq[i]==0)
        {
            result[count++]=i;
        }
    }
    *returnSize=count;
    free(freq);
    return result;
}