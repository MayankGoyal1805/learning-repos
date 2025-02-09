#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main()
{
    int *ptr;
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    alloc_check(ptr);
    for (i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
    }

    print_array(ptr, n);
    printf("Enter the new number of elements: ");
    scanf("%d", &n);

    ptr = realloc(ptr, n * sizeof(int));
    alloc_check(ptr);
    for (i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
    }

    print_array(ptr,n);

    return 0;
}