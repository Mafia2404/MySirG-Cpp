#include<iostream>
using namespace std;
void swap(int*,int*);
int main(){
    int a,b;
    cout<<"Enter two nos:";
    cin>>a>>b;
    cout<<"value before swap"<<endl;
    cout<<"a is "<<a<<" and b is "<<b;
    swap(&a,&b);
    cout<<endl<<"values after swap"<<endl;
    cout<<"a is "<<a<<" and b is "<<b;
    return 0;
}
void swap(int *a ,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}