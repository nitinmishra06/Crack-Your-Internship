/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.*/

//solved in 11ms beating 52.72% coders and with 12.10mb beating 5.30% coders
int removeDuplicates(int* nums, int numsSize) {
  
    int uniqueCount = 1;
    int i = 1;
    
    while (i < numsSize) {
        if (nums[i] != nums[i - 1]) {
            nums[uniqueCount] = nums[i];
            uniqueCount++;
        }
        i++;
    }
    
    return uniqueCount;

    
}