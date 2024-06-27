#include <stdio.h>

void display_array(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}

int main()
{

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    display_array(array, 10);

    // 刪除第6個數字

    int array_9[9];

    for (int i = 0; i < 5; i++)
    {
        array_9[i] = array[i];
    }
    for (int i = 6; i < 10; i++)
    {
        array_9[i - 1] = array[i];
    }

    display_array(array_9, 9);

    // 增加為11個
    int array_11[11];

    for (int i = 0; i < 5; i++)
    {
        array_11[i] = array[i];
    }
    array_11[5] = 55;

    for (int i = 5; i < 10; i++)
    {
        array_11[i + 1] = array[i];
    }

    display_array(array_11, 11);

    return 0;
}