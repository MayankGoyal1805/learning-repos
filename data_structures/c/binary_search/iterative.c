#include<stdio.h>

void insertionSort(int *arr,int size){
    for(int i=1;i<size;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[++j]=key;
    }
}

int binarySearch(int* arr, int value,int low, int high){
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==value) return mid;
        
        if(arr[mid]<value)  low = mid+1;
        else high = mid-1;
    }
    return -1;
}