#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int* arr,int size){
    for(int i=0;i<size-1;i++){
        bool swapped = false;
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]) {
                swap(&arr[j],&arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) return;
    }
}

void selectionSort(int* arr,int size){
    for(int i=0;i<size-1;i++){
        int minIndex = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]) minIndex=j;
        }
        swap(&arr[i],&arr[minIndex]);
    }
}

void insertionSort(int*arr,int size){
    for(int i=1;i<size;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[++j] = key;
    }
}

void merge(int* arr,int low,int mid,int high){
    int s1 = mid-low+1;
    int s2 = high-mid;
    int* r = (int*)malloc(sizeof(int)*s1);
    int* l = (int*)malloc(sizeof(int)*s2);

    for(int i=0;i<s1;i++) l[i] = arr[low+i];
    for(int j=0;j<s2;j++) r[j] = arr[mid+1+j];
    int i=0,j=0,k=low;

    while(i<s1&&j<s2){
        if(arr[i]<=arr[j]){
            arr[k++] = arr[i++];
        }
        else arr[k++] = arr[j++];
    }

    while(i<s1) arr[k++] = arr[i++];
    while(j<s2) arr[k++] = arr[j++];

    free(l);
    free(r);
}

void mergeSort(int* arr,int low,int high){
    if(low<high){
        int mid = low + (high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int partition(int* arr,int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=0;j<high-low+1;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[++i],&arr[high]);
    return i;
}

void quickSort(int* arr,int low,int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quickSort(arr,low,pi);
        quickSort(arr,pi+1,high);
    }
}