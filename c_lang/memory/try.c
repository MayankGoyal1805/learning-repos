#include <stdio.h>

#include <stdlib.h>
void test();
int global;
int main()
{
    int *ptr;
    int i;
    static int st;
    ptr = (int *)malloc(sizeof(int)); /* Allocate memory from the heap. */
    if (ptr != NULL)
    {
        printf("Code seg: %p\n", test);
        printf("Data seg: %p %p\n", &global, &st);
        printf("Stack seg: %p\n", &i);
        printf("Heap: %p\n", ptr);
        free(ptr);
    }
    return 0;
}
void test()
{
}
