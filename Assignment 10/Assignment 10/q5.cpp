#include<iostream>
using namespace std;
class Complex{
private:
    int a,b;
public:
    Complex(){}
    Complex(int x,int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
int main(){
    Complex a[5],c1(5,6),c2(2,3),c3(6,7),c4(7,8),c5(1,0);
    a[0]=c1;
    a[1]=c2;
    a[2]=c3;
    a[3]=c4;
    a[4]=c5;
   for(int i=0;i<5;i++){
    a[i].showData();
   }
    return 0;

}