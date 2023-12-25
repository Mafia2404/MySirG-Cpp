#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

void printSubstring(char str[],int startIndex,int endIndex=-1);
int hcf(int a,int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--)
    {
        if(a%H==0&&b%H==0)
            return H;
    }
    return 1;
}
int volume(int l,int b,int h)
{
    return l*b*h;
}
float volume(int r,int h)
{
    return 3.14*r*r*h/3;
}
float volume(int r)
{
    return 4.0/3*3.14*r*r*r;
}
void printSubstring(char str[],int startIndex,int endIndex)
{
    if(endIndex==-1)
        endIndex=strlen(str);
    for(int i=startIndex;i<endIndex;i++)
        cout<<str[i];
}
void swapArrays(int A[],int B[],int size)
{
    int t;
    for(int i=0;i<size;i++)
    {
        t=A[i];
        A[i]=B[i];
        B[i]=t;
    }
}
int* merge(int A[],int B[],int size)
{
    int *arr=(int*)malloc(2*size*sizeof(int));
    int i,j,k;
    for(i=0,j=0,k=0;i<size&&j<size;k++)
    {
        if(A[i]<B[j])
        {
            arr[k]=A[i];
            i++;
        }
        else
        {
            arr[k]=B[j];
            j++;
        }
    }
    while(i<size)
    {
        arr[k]=A[i];
        i++;
        k++;
    }
    while(j<size)
    {
        arr[k]=B[j];
        j++;
        k++;
    }
    return arr;
}
int main()
{
    int A[]={3,5,8,10,15};
    int B[]={5,6,11,12,13};
    int i,*arr;
    arr=merge(A,B,5);
    for(i=0;i<=9;i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;
    return 0;
}

