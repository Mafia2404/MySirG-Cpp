#include<iostream>
using namespace std;
int add(int ,int ,int=0);
int add(int a,int b,int c){
    return a+b+c;
}
int main(){
    int a,b,c;
    cout<<"Enter three no.:";
    cin>>a>>b>>c;
    cout<<"Sum is "<<add(a,b)<<endl;
    cout<<"Sum is "<<add(a,b,c);
    return 0;
}