#include<stdio.h>

void addPos(int arr[],int arr2[],int data,int pos,int size){
    for(int i=0;i<pos-1;i++){
        arr2[i] = arr[i];
    }
    arr2[pos-1] = data;
    for(int j=pos;j<size+1;j++){
        arr2[j] = arr[j-1];
    }
}

int main(){
    int arr[] = {3,5,76,8,9,5,32,4,5,656};
    int size = sizeof(arr)/sizeof(arr[0]);
    int arr2[size+1];
    addPos(arr,arr2,768,3,size);
    for(int i=0;i<size+1;i++){
        printf("%d\n",arr2[i]);
    }
}