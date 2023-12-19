#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two variables:";
    cin>>a>>b;
    cout<<"values before swap:"<<endl<<"a is "<<a<<" and b is "<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<endl<<"values after swap:"<<endl<<"a is "<<a<<" and b is "<<b;
    return 0;
}