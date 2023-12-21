#include<iostream>
using namespace std;
void pow(){
    int x,y,i,f=1;
    cout<<"Enter no. and power:";
    cin>>x>>y;
    for(i=1;i<=y;i++){
        f*=x;
    }
    cout<<"x raised to power y is "<<f;
}
int main(){
    pow();
    return 0;
}