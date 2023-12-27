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
    Complex add(Complex C){
        Complex t;
        t.a=a+C.a;
        t.b=b+C.b;
        return t;
    }
    Complex sub(Complex C){
        Complex t;
        t.a=a-C.a;
        t.b=b-C.b;
        return t;
    }
    Complex mult(Complex C){
        Complex t;
        t.a=a*C.a-b*C.b;
        t.b=a*C.b+b*C.a;
        return t;
    }
};
int main(){
    Complex c1,c2,c3,c4,c5;
    c1.setData(4,5);
    c2.setData(5,6);
    c3=c2.add(c1);
    c4=c1.sub(c2);
    c5=c3.mult(c1);
    c3.showData();
    c4.showData();
    c5.showData();
    return 0;
}