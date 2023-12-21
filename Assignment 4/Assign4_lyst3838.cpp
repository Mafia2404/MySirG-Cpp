#include<iostream>
using namespace std;
int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
void printPrime(int a,int b)
{
    int x;
    for(x=a+1;x<b;x++)
    {
        if(isPrime(x))
            cout<<x<<" ";
    }
}
int highestValueDigit(int n)
{
    int maxDigit;
    maxDigit=n%10;
    n=n/10;
    while(n)
    {
        if(maxDigit<n%10)
            maxDigit=n%10;
        n/=10;
    }
    return maxDigit;
}
float power(float x,float y)
{
    if(y==0)
        return 1;
    if(y>0)
    {
        return power(x,y-1)*x;
    }
    else
    {
        return power(x,y+1)*(1/x);
    }
}
int fact(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}
int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
void printPascalTriangle(int lines)
{
    int i,j,flag,r;
    for(i=1;i<=lines;i++)
    {
        flag=1;
        r=0;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i&&j<=lines-1+i)
            {
                if(flag)
                    cout<<combi(i-1,r++);
                else
                    cout<<" ";
                flag=1-flag;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int inFib(int n)
{
    int a=-1,b=1,c=0,i;
    for(i=0;c<=n;i++)
    {
        c=a+b;
        if(n==c)
            return 1;
        a=b;
        b=c;
    }
    return 0;
}
int main()
{
    int n=55;
    if(inFib(n))
        cout<<n<<" is in Fibonacci Series";
    else
        cout<<n<<" is not in Fibonacci series";
    cout<<endl;
    return 0;
}