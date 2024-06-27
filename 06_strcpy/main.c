#include <stdio.h>
#include <string.h>

int main()
{

    int compare_result = -2;

    char str_a[] = "this is string abc";
    char str_b[] = "this is string b";

    // printf("%s\n", str_a);

    // strcpy(str_a, str_b);

    // printf("%s\n", str_a);

    compare_result = strcmp(str_a, str_b);

    if (compare_result == 0)
    {
        printf("the compare result is the same.");
    }
    else if (compare_result > 0)
    {
        printf("the str_a is more than str_b.");
    }
    else if (compare_result < 0)
    {
        printf("the str_a is less than str_b.");
    }

    return 0;
}