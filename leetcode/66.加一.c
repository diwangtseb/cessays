/*
 * @lc app=leetcode.cn id=66 lang=c
 *
 * [66] 加一
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    for (int i = 0; i < digitsSize; i++)
    {
        if (i == digitsSize -1){
            int last = digits[i]++;
            returnSize[i] = last;
        }
        returnSize[i] = digits[i];
    }
    return returnSize;
}
// @lc code=end

#include <stdio.h>
#include <stdlib.h>
int main(){
    int digitsSize = 3;
    int digits[] = {1,2,3};
    int* returnSize = (int*)malloc(sizeof(digitsSize));
    plusOne(digits,digitsSize,returnSize);
    for (int i = 0; i < digitsSize; i++)
    {
        printf("%d\n",returnSize[i]);
    }
}

