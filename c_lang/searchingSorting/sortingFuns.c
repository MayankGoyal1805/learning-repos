#include<stdlib.h>
#include<stdbool.h>
#include<stdlib.h>
int binarySearchI(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid;

    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int binarySearchR(int arr[],int start,int end,int key){
    if(start>end) return -1;
    int mid = (start+end)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        return binarySearchR(arr,start,mid-1,key);
    }
    else{
        return binarySearchR(arr,mid+1,end,key);
    }
}

void bubbleSort(int arr[],int len){
    int temp;
    for(int i=0;i<len-1;i++){
        bool swapped = false;
        for(int j=0;j<len-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

void selSort(int arr[],int len){
    int minIdx,temp;
    for(int i=0;i<len-1;i++){
        minIdx = i;
        for(int j=i+1;j<len;j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

void insSort(int arr[],int len){
    int j,key;
    for(int i=1;i<len;i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void merge(int arr[],int l,int mid,int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int *left = (int*)malloc(n1*sizeof(int));
    int *right = (int*)malloc(n2*sizeof(int));

    for(int i=0;i<n1;i++) left[i] = arr[l+i];
    for(int j=0;j<n2;j++) right[j] = arr[mid+1+j];

    int k=l;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
        }
    }
    while(i<n1){
        arr[k++] = left[i++];
    }
    while(j<n2){
        arr[k++] = right[j++];
    }
    free(left);
    free(right);
}

void mergeSort(int arr[],int l,int r){
    if(l>=r) return;
    int mid = (l+r)/2;

    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
