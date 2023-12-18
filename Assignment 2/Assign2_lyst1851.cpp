#include<iostream>
using namespace std;
void f1()
{
    cout<<"Hello MySirG";
}
void f2()
{
    cout<<"Hello"<<endl<<"MySirG";
}
void f3()
{
    int a,b,c;
    cout<<"Enter two numbers";
    cin>>a>>b;
    c=a+b;
    cout<<"Sum is "<<c;
}
void f4()
{
    int r;
    float a;
    cout<<"Enter radius of a circle";
    cin>>r;
    a=3.14*r*r;
    cout<<"Area is "<<a;
}
void f5()
{
    int l,b,h;
    cout<<"Enter length, breadth and height of a cuboid";
    cin>>l>>b>>h;
    int V=l*b*h;
    cout<<"Volume of cuboid is "<<V;
}
int main()
{
    f5();
    cout<<endl;
    return 0;
}