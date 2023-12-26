#include<iostream>
using namespace std;
class Date{
private:
    int d,m,y;
public:
    void setDate(int,int,int);
    void showDate(){
        cout<<"d="<<d<<",m="<<m<<",y="<<y<<endl;
    }
    //q4 i
    void showiDate(){
        cout<<d<<"-"<<m<<"-"<<y<<endl;
    }
    //q4 ii
   
    void showiiDate(){
        char c[12][20]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec"};
        cout<<d<<"-"<<c[m-1]<<"-"<<y<<endl;
    }
};
void Date:: setDate(int x,int w,int z){
    d=x;
    m=w;
    y=z;
}
int main(){
    Date d1;
    d1.setDate(31,12,2022);
    d1.showDate();
    d1.showiDate();
    d1.showiiDate();
    return 0;
}