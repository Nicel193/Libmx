#include "../inc/libmx.h"

int mx_bubble_sort(char **arr, int size)
{
    int count = 0;

    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < (size - 1) - i; j++)
        {
            if (mx_strcmp(arr[j], arr[j + 1]) > 0)
            {
                char *word = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = word;

                count++;
            }
        }
    }

    return count;
}

