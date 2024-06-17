// /*
// The bonuses by the company are based on profit commissions.

// When the profit (I) is less than or equal to 100,000 yuan, the bonus is 10%;

// When the profit is more than 100,000 yuan but less than 200,000 yuan, the
// portion below 100,000 yuan is commissioned at 10%, and the portion above 100,000
// yuan is commissioned at 7.5%;

// For profits between 200,000 yuan and 400,000 yuan, the portion above 200,000
// yuan is commissioned at 5%;

// For profits between 400,000 yuan and 600,000 yuan,the portion above 400,000 yuan
// is commissioned at 3%;

// For profits between 600,000 yuan and 1,000,000 yuan, the portion above 600,000
// yuan is commissioned at 1.5%;

// When the profit exceeds 1,000,000 yuan, the portion exceeding 1,000,000 yuan
// is commissioned at 1%.
// */

/*
the example is

1200000
提成为：bonus :
41500.000000

1000
提成为：bonus :
100.000000

934500
提成为：bonus :
38517.500000

2313400
提成为：bonus :
52634.000000
*/

// #include "stdio.h"
// #include "stdlib.h"

// int main()
// {
//     double profit = 0.0;
//     double total_bonus = 0.0;

//     // input the profit
//     printf("input the profit\n");
//     scanf("%lf", &profit);
//     printf("the profit is : %lf\n", profit);

//     // caculate the bonus based on profit
//     if (profit <= 100000)
//     {
//         total_bonus = profit * 0.1;
//     }
//     else if (profit <= 200000)
//     {
//         total_bonus = (100000 * 0.1) + ((profit - 100000) * 0.075);
//     }
//     else if (profit <= 400000)
//     {
//         total_bonus = (100000 * 0.1) + (100000 * 0.075) + ((profit - 200000) * 0.05);
//     }
//     else if (profit <= 600000)
//     {
//         total_bonus = (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.05) + ((profit - 400000) * 0.03);
//     }
//     else if (profit <= 1000000)
//     {
//         total_bonus =
//             (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.05) + (400000 * 0.03) + ((profit - 600000) * 0.015);
//     }
//     else if (profit > 1000000)
//     {
//         total_bonus = (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.05) + (400000 * 0.03) + (600000 * 0.015) + ((profit - 1000000) * 0.01);
//     }

//     printf("the total bonus is : %.2f\n", total_bonus);

//     return 0;
// }

#include "stdio.h"
#include "stdlib.h"

int main()
{
    double profit = 0.0;
    double total_bonus = 0.0;

    // input the profit
    printf("input the profit\n");
    scanf("%lf", &profit);
    printf("----------------------------------------\n");
    printf("the profit is : %lf\n", profit);

    // calculate the bonus based on profit
    if (profit > 1000000)
    {
        total_bonus += ((profit - 1000000) * 0.01);
        profit = 1000000;
    }
    if (profit > 600000)
    {
        total_bonus += ((profit - 600000) * 0.015);
        profit = 600000;
    }
    if (profit > 400000)
    {
        total_bonus += ((profit - 400000) * 0.03);
        profit = 400000;
    }
    if (profit > 200000)
    {
        total_bonus += ((profit - 200000) * 0.05);
        profit = 200000;
    }
    if (profit > 100000)
    {
        total_bonus += ((profit - 100000) * 0.075);
        profit = 100000;
    }
    if (profit <= 100000)
    {
        total_bonus += (profit * 0.1);
    }

    printf("the total bonus is : %.2f\n", total_bonus);

    return 0;
}
