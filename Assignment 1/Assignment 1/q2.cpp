#include<iostream>
using namespace std;
int main(){
    int f=1,x,i;
    cout<<"Enter a no:";
    cin>>x;
    for(i=2;i<=x;i++)
    f*=i;
    cout<<"Factorial of "<<x<<"is "<<f;
    return 0;
}
