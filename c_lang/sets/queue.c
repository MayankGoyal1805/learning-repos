#include<stdio.h>
#include<stdlib.h>

typedef struct queue{
    int front,rear,size;
    unsigned actualSize;
    int* arr;
}queue;

queue* 
