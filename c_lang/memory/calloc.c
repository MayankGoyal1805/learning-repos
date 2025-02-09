#include<stdio.h>
#include<stdlib.h>
#include "common.h"

int main() {
    int *ptr;
    int n,i;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    ptr = calloc(n,sizeof(int));
    alloc_check(ptr);
    print_array(ptr,n);
}