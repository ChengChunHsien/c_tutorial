#include "stdio.h"

/*

name    subject1    subject1

a[0][0] a[0][1] a[0][i]
a[1][0]
a[2][0]
a[3][0]
a[4][0]
a[j][0]
*/

int a[5][3];
int sum = 0;
int i, j;
int average[3];

int main()
{

    // // 對於科目類別的for
    // for(i=0; i<3; i++){
    //     // 對於不同同學的for
    //     for(j=0; j<5; j++){
    //         scanf("%d", &a[j][i]);
    //         sum += a[j][i];
    //     }
    //     average[i] = sum / 5;
    //     sum = 0;
    // }

    // printf("First   : %d\n", average[0]);
    // printf("Second  : %d\n", average[1]);
    // printf("Third   : %d\n", average[2]);

    // check some item in array
    int nums[10] = {1, 10, 6, 296, 177, 23, 0, 100, 34, 999};
    int target_num = 0;
    int target_index = -1;

    int nums_length = sizeof(nums) / sizeof(nums[0]);

    printf("Input an interger : \n");
    scanf("%d", &target_num);

    for (int i = 0; i < nums_length; i++)
    {
        if (nums[i] == target_num)
        {
            target_index = i;
        }
    }

    if (target_index < 0)
    {
        printf("Can't find the target in the nums.\n");
    }
    else
    {
        printf("Find the target %d, it's index is %d.\n", target_num, target_index);
    }

    return 0;
}