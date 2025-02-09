#include<stdio.h>
#include<stdlib.h>


int main() {
    int capacity = 5;
    int *arr = malloc(capacity*sizeof(int));
    int i =0;
    while(1) {
        int input;
        printf("%d: ",i);
        scanf("%d",&input);
        if (input == 0) break;
        if (i==capacity) {
            // Array is full, Expand it.
            capacity = (int) capacity* 1.5;
            printf("Expanding Array to %d\n",&capacity);
            arr = realloc(arr,capacity * sizeof(int));
        }

        arr[i] = input;
        i++;
    }
    printf("Array:\n");
    for(int j=0;j<i;j++) {
        printf("%d: %d\n",j,arr[j]);
    }
}

