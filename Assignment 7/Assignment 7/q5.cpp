#include<iostream>
#include<stdlib.h>
using namespace std;
int* merge(int a[],int b[],int size);
int main(){
    int a[5]={1,2,3,7,9},i;
    int b[5]={3,5,8,10,11};
    int *arr;
    arr=merge(a,b,5);
    for(i=0;i<10;i++)
        cout<<arr[i]<<" ";
    return 0;
}
int* merge(int a[],int b[],int size){
    int i,j,k;
    int *arr;
    arr=(int*)malloc(2*size*(sizeof(int)));
    for(i=0,j=0,k=0;i<size && j<size ;k++){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
        }
        else {
            arr[k]=b[j];
            j++;
        }
    }
    while(i<size){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<size){
        arr[k]=b[j];
        j++;
        k++;
    }
    return arr;
}