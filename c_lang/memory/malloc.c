#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Entered the number of elements %d \n", n);

    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {

        printf("Memory successfully allocated using malloc\n");
        for (i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }

        printf("Elements of the array are:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", ptr[i]);
        }
        printf("\n");
    }

    return 0;
}