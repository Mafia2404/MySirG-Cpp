#include<iostream>
using namespace std;
void f1()
{
    int a,b,c;
    float avg;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    avg=(a+b+c)/3.0;
    cout<<"Average is "<<avg;

}
void f2()
{
    int x;
    cout<<"Enter a number ";
    cin>>x;
    int y=x*x;
    cout<<"Square of "<<x<<" is "<<y;
}
void f3()
{
    int a,b; //a=10 b=20
    cout<<"Enter two numbers";
    cin>>a>>b;
    a=a+b;   //a=30 b=20
    b=a-b;   //a=30 b=10
    a=a-b;   //a=20 b=10
    cout<<"a="<<a<<" b="<<b;
}
void f4()
{
    int x,y;
    cout<<"Enter two numbers";
    cin>>x>>y;
    if(x>y)
        cout<<x<<" is greater";
    else
        cout<<y<<" is greater";
}
void f5()
{
    int a[10],i,s=0;
    cout<<"enter 10 numbers";
    for(i=0;i<=9;i++)
        cin>>a[i];
    
    for(i=0;i<=9;i++)
        s=s+a[i];
    cout<<"Sum is "<<s;
}
int main()
{
    f5();
    cout<<endl;
    return 0;
}