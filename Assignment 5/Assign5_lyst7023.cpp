#include<iostream>
#include<math.h>
using namespace std;
void swap(int &,int &);
int add(int,int,int=0);
float area(int);
int area(int,int);
float area(int,int,int);
int max(int,int);
double max(double,double);
int sum(int,int);
int sum(int,int,int);
void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int add(int x,int y,int z)
{
    return x+y+z;
}
float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
float area(int a,int b,int c)
{
    float s,ar;
    s=(a+b+c)/2.0;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}
int max(int a,int b)
{
    if(a>b)
        return a;
    else 
        return b;
}
double max(double a,double b)
{
    if(a>b)
        return a;
    else 
        return b;
}
int sum(int a,int b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}