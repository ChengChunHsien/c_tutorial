#include "stdio.h"
#include <string.h>


int main()
{

    // char temp[] = "apple";
    // long len = strlen(temp);

    // printf("%c", temp[0]);
    // printf("%c", temp[1]);
    // printf("%c", temp[2]);
    // printf("%c", temp[3]);
    // printf("%c\n", temp[4]);

    // printf("the length of the string is %ld.\n", len);

    char temp[30] = "to be a better man.";

    char input_string_a[] = {0};
    char input_string_b[] = {0};

    puts(temp);
    printf("%s\n", temp);

    printf("Input a string\n");
    scanf("%s", input_string_b);

    return 0;
}