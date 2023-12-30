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
        cout<<"\na="<<a<<" b="<<b;
    }
    Complex operator+(Complex C){
        Complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
    Complex operator-(Complex C){
        Complex temp;
        temp.a=a-C.a;
        temp.b=b-C.b;
        return temp;
    }
    Complex operator*(Complex C){
        Complex temp;
        temp.a=a*C.a-b*C.b ;
        temp.b=a*C.b +b*C.a;
        return temp;
    }
    bool operator==(Complex C){
            if(a==C.a && b==C.b)
            return true;
        return false;
    }
    
};
int main(){
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(3,4);
    c3=c1+c2;
    c3.showData();
   cout<<endl;
   if(c1==c2)
   cout<<"Equal";
   else
   cout<<"Not Equal";
    
    return 0;
    
}