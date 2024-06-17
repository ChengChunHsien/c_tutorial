/*
Input n numbers

How many unique three-digit numbers can be formed using the digits n
output without repeating any digits? What are those numbers and counts?
*/

#include "stdio.h"
#include "stdlib.h"

int main() {

  int nums[10];
  int nums_length = sizeof(nums) / sizeof(nums[0]);

  int counts = 0;

  for (int i = 0; i < nums_length; i++) {
    scanf("%d", &nums[i]);
  }

  printf("----------------------------------------\n");

  for (int i = 0; i < nums_length; i++) {
    for (int j = 0; j < nums_length; j++) {
      for (int k = 0; k < nums_length; k++) {
        if (nums[i] != nums[j] && nums[j] != nums[k] && nums[i] != nums[k]) {
          printf("%d, %d, %d\n", nums[i], nums[j], nums[k]);
          counts++;
        }
      }
    }
  }

  printf("the counts is : %d\n", counts);

  return -1;
}

// // this is the part of solution about the orignal things
// for (int i = 1; i < 5; i++)
// {
//     for (int j = 1; j < 5; j++)
//     {
//         for (int k = 1; k < 5; k++)
//         {
//             if ((i != j) && (j != k) && (i != k))
//             {
//                 printf("%d, %d, %d\n", i, j, k);
//             }
//         }
//     }
// }