#include<iostream>
using namespace std;
int sum(int ,int);
float sum(float,float);
int main(){
    int a,b;
    float x,y;
    cout<<"Enter two int variable:";
    cin>>a>>b;
    cout<<"Enter two float variable:";
    cin>>x>>y;
    cout<<"sum is "<<sum(a,b)<<endl;
    cout<<"Sum is "<<sum(x,y);
    return 0;
}
int sum(int a,int b){
    return a+b;
}
float sum(float x,float y){
    return x+y;
}