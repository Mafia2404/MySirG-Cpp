#include<iostream>
using namespace std;
class Complex{
private:
    int a,b;
public:
    void setData(int a,int b){
       this->a=a;
        this->b=b;
    }
    void showData(){
        cout<<"\na="<<a<<" b="<<b<<endl;
    }
};
Complex* intantiateClass(){
    Complex *newptr;
    newptr=new Complex();
    return newptr;
}
int main(){
    Complex c1,c2,c3;
    Complex *p;
    c1.setData(3,4);
    p=intantiateClass();
    p->setData(4,5);
    p->showData();

    return 0;
}