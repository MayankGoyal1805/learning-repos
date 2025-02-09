#include<stdio.h>
#include<stdlib.h>
void print_array(int arr[], int n) {
    printf("Elements of the array are:\n");

        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
}

void alloc_check(int *ptr) {
    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated\n");
    }
}