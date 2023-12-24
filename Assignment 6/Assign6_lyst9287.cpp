#include<iostream>
#include<string.h>
using namespace std;
void sort(int A[],int size,bool asc=true);
void sortStrings(char A[][20],int size,bool asc=true);
void rotate(int A[],int size,int d=1,int n=1);
int lcm(int a,int b,int c);
void printPrimeFactors(int n);
int nextPrime(int n);
int isPrime(int);
void sort(int A[],int size,bool asc)
{
    int r,i,t;
    for(r=1;r<size;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(asc==true&&A[i]>A[i+1])
            {
                t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;
            }
            else if(asc==false && A[i]<A[i+1])
            {
                t=A[i];
                A[i]=A[i+1];
                A[i+1]=t;
            }
        }
    }
}

void sortStrings(char A[][20],int size,bool asc)
{
    int r,i;
    char temp[100];
    for(r=1;r<size;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(asc==true&&strcmp(A[i],A[i+1])>0)
            {
                strcpy(temp,A[i]);
                strcpy(A[i],A[i+1]);
                strcpy(A[i+1],temp);
            }
            else if(asc==false && strcmp(A[i],A[i+1])<0)
            {
                strcpy(temp,A[i]);
                strcpy(A[i],A[i+1]);
                strcpy(A[i+1],temp);
            }
        }
    }
    
}

void rotate(int A[],int size,int d,int n)
{
    int i,t,r;
    if(d==1)
    {
        for(r=1;r<=n;r++)
        {
            t=A[size-1];
            for(i=size-1;i>0;i--)
                A[i]=A[i-1];
            A[0]=t;
        }
    }
    if(d==-1)
    {
        for(r=1;r<=n;r++)
        {
            t=A[0];
            for(i=1;i<size;i++)
                A[i-1]=A[i];
            A[size-1]=t;
        }
    }
}
int lcm(int a,int b,int c)
{

    int L;
    for(L=a>b?a>c?a:c:b>c?b:c;L<=a*b*c;L++)
        if(L%a==0&&L%b==0&&L%c==0)
            return L;
    return 0;
}
int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int nextPrime(int n)
{
    for(n++;!isPrime(n);n++);
    return n;
}
void printPrimeFactors(int n)
{
    int i=2,flag=1;
    while(n>1)
    {
        while(n%i==0)
        {
            n=n/i;
            flag=0;
        }
        if(flag==0)
            cout<<i<<"  ";
        i=nextPrime(i);
    }
}
int main()
{
    //int A[]={1,2,3,4,5};
    char str[][20]={"Kanpur","Jaipur","Bhopal"};
    //rotate(A,5,-1,2);
    sortStrings(str,3,false);
    for(int i=0;i<=2;i++)
        cout<<str[i]<<" ";
    cout<<endl;
    return 0;
}