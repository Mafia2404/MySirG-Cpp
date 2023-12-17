#include<iostream>
using namespace std;
int prime(int);
int main(){
    int x;
    cout<<"Enter a no.:";
    cin>>x;
    if(prime(x))
    cout<<"prime";
    else 
    cout<<"not prime";
    return 0;
}
int prime(int x){
int i;
for(i=2;i<x;i++){
    if(x%i==0)
        return 0;
}
return 1;
}