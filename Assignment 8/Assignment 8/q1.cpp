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
    void getData(){
        cout<<"a="<<a<<" and b="<<b;
    }
};
int main(){
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,6);
    c1.getData();
    cout<<endl;
    c2.getData();
    return 0;
}