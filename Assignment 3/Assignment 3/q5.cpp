#include<iostream>
using namespace std;
int main(){
    int a[5],i,s=0;
    cout<<"Enter 10 element:";
    for(i=0;i<10;i++){
    cin>>a[i];
    s+=a[i];
    }
    cout<<"Sum is "<<s;
    return 0;
}