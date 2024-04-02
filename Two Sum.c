* Note: The returned array must be malloced, assume caller calls free().
 */
/*Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j;
    *returnSize=2;
    int *r=malloc(sizeof(int)*2);
    for(i=0;i<numsSize;i++)
    for(j=i+1;j<numsSize;j++)
    if(nums[i]+nums[j]==target)
    {
        r[0]=i;
        r[1]=j;
       // break;
    }
    return r;
    
}
