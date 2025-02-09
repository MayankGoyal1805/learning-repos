#include<stdio.h>
#include<stdlib.h>

#define INITIAL_SIZE 8

typedef struct {
    int size;
    int capacity;
    int *array ;
} List;

void arrInit(int *arr_mem) {
    List * Init = {0,INITIAL_SIZE} ;
    Init->array = (int*) malloc(INITIAL_SIZE*sizeof(int));
    if (Init->array == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    *arr_mem = arrInit;
}

void append(List cont, int item ){
    
}



int main() {
    List *arr;

}