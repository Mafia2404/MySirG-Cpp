#include<iostream>
using namespace std;
int  vol(int ,int ,int );
float vol(int,int );
float vol(int);
int main(){
    cout<<"vol of cuboid "<<vol(3,4,5)<<endl;
    cout<<"vol of sphere "<<vol(4)<<endl;
    cout<<"vol of cone "<<vol(3,5);
    return 0;
    
}
int vol(int l,int b ,int h){
    return l*b*h;
}
float vol(int x){
    return 4.0*3.14*x*x*x/3;
}
float vol(int x,int y){
    return 1.0*3.14*x*x*y/3;
}