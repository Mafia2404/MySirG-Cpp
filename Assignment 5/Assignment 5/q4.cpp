#include<iostream>
using namespace std;
int max(int ,int);
float max(float ,float);
int main(){
    int a,b;
    float x,y;
    cout<<"Enter two int variable:";
    cin>>a>>b;
    cout<<"Enter two float variable:";
    cin>>x>>y;
    cout<<"Max is "<<max(a,b)<<endl;
    cout<<"max is "<<max(x,y);
    return 0;
}
int max(int a,int b){
    if(a>b)
    return a;
   return b; 
}
float max(float x,float y){
    if(x>y)
    return x;
   return y; 
}
