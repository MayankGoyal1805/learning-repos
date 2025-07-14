#include"methods.h"

void printArray(int *arr, int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {34,23,21,13,46,11,222,235,98,76,30,87,98};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array\n");
    printArray(arr,size);
    selectionSort(arr,size);
    printf("Sorted Array\n");
    printArray(arr,size);
}