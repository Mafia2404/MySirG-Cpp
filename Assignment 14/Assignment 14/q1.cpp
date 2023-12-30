#include<iostream>
using namespace std;
class Complex{
private:
    int a,b;
public:
    void setData(int x,int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    friend Complex operator+(Complex D,Complex C);
    friend Complex operator-(Complex D,Complex C);
    friend Complex operator*(Complex D,Complex C);
};
Complex operator+(Complex D,Complex C){
    Complex temp;
    temp.a=D.a+C.a;
    temp.b=D.b+C.b;
    return temp;
}
Complex operator-(Complex D,Complex C){
    Complex temp;
    temp.a=D.a-C.a;
    temp.b=D.b-C.b;
    return temp;
}
Complex operator*(Complex D,Complex C){
    Complex temp;
    temp.a=D.a*C.a - D.b*C.b;
    temp.b=D.b*C.a+C.b*D.a;
    return temp;
}
int main(){
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1+c2;
    c3.showData();
    c3=c1*c2;
    c3.showData();
    c3=c1-c2;
    c3.showData();
    return 0;
}