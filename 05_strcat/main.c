#include <stdio.h>
#include <string.h>

int main()
{

    char str_a[100] = "the url is ";
    char str_b[50];

    printf("Input a url\n");
    scanf("%s", str_b);

    printf("%s\n", str_b);
    strcat(str_a, str_b);
    printf("%s\n", str_a);

    return 0;
}