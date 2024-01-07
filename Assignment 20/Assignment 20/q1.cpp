#include<iostream>
using namespace std;
class A{
private:
    int  a,b;
public:
    void setData(int x,int y){
            a=x;
            b=y;
    }
    void showData(){
        cout<<"\na="<<a<<" b="<<b<<endl;
    }
    void input(){
        cout<<"Enter a and b:";
        cin>>a>>b;
    }
};
class B:public A{
private:
    int x;
public:
    void input(){
        int a,b;
        cout<<"Enter a,b and x:";
        cin>>a>>b>>x;
        setData(a,b);
    }
    void showData(){
            A::showData();
            cout<<"x="<<x;
    }
};
int main(){
    B obj;
    obj.input();
    obj.showData();
    return 0;
}
