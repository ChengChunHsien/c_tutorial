/*
Input n numbers

How many unique three-digit numbers can be formed using the digits n
output without repeating any digits? What are those numbers and counts?
*/

#include "stdio.h"

int main()
{

    int nums[4];
    int nums_length = sizeof(nums) / sizeof(nums[0]);

    printf("please input 4 numbers\n");
    for (int i = 0; i < nums_length; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("the following is result!\n");
    for (int i = 0; i < nums_length; i++)
    {
        for (int j = 0; j < nums_length; j++)
        {
            for (int k = 0; k < nums_length; k++)
            {
                if (nums[i] != nums[j] && nums[i] != nums[k] && nums[j] != nums[k])
                {
                    printf("%d, %d, %d\n", nums[i], nums[j], nums[k]);
                }
            }
        }
    }

    return 0;
}