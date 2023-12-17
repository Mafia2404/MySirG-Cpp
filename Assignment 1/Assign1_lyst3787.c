#include<stdio.h>
//Q1
void f1()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%2==0)
        printf("Even number");
    else
        printf("Odd number");
}
//Q2
void f2()
{
    int i,f=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        f=f*i;
    printf("Factorial of %d is %d",n,f);
}
//Q3
void f3()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
}
//Q4
int f4(int a,int b)
{
    int L;
    for(L=a>b?a:b;L<=a*b;L++)
        if(L%a==0&&L%b==0)
            return L;

}
//Q5
int f5(int x)
{
    int i;
    for(i=2;i<x;i++)
        if(x%i==0)
            return 0;
    return 1;
}
int main()
{
    f1();
    printf("\n");
    return 0;
}