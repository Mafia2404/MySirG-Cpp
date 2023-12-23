#include<iostream>
using namespace std;
float area(int);
int area(int ,int);
float area();
int main(){
    int a,b;
    cout<<"Enter two no.:";
    cin>>a>>b;
    cout<<"Area of circle "<<area(a)<<endl;
    cout<<"Area of rectangle "<<area(a,b)<<endl;
   cout<<"Area of triangle "<<area();
    return 0;
}
float area(int r){
    return 3.14*r*r;
}
int area(int x,int y){
    return x*y;
}
float area(){
    int h,b;
    cout<<"Enter height and base:";
    cin>>h>>b;
    return h*b*1.0/2;
}

