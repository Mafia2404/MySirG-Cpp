#include<iostream>
using namespace std;
int lcm(int,int);
int main(){
    int a,b;
    cout<<"Enter two nos.";
    cin>>a>>b;
    cout<<"Lcm is "<<lcm(a,b);
    return 0;
}
int lcm(int a,int b){
    int i=2;
    while(i%a!=0 || i%b!=0){
        i++;
    }
    return i;
}