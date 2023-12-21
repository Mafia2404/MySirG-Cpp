#include<iostream>
using namespace std;
void fibo(){
    int x,a,b,c=0,flag=0;
    cout<<"Enter a no.:";
    cin>>x;
    for(a=-1,b=1 ; c<=x ; ){
        c=a+b;
        a=b;
        b=c;
        if(c==x){
            flag=1;
        }
    }
    if(flag==1)
    cout<<"Element is present";
    else 
    cout<<"Element is not present";
}
int main(){
    fibo();
    return 0;
}