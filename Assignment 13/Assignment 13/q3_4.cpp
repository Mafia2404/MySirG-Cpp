#include<iostream>
using namespace std;
class Distance{
private:
    int km,m,cm;
public:
    void setDistance(int x,int y,int z){
        km=x;
        m=y;
        cm=z;
    }
    void showDistance(){
        cout<<endl<<km<<"km "<<m<<"m "<<cm<<"cm "<<endl;
    }
    Distance operator+(Distance D){
        Distance temp;
        temp.km=km+D.km;
        temp.m=m+D.m;
        temp.cm=cm+D.cm;
        return temp;
    }
    //Q4 pre-decrement
    Distance operator--(){
        cm--;
        return *this;
    }
    //Q4 post decrement
    Distance operator--(int){
        Distance temp=*this;
        cm--;
        return temp;
    }

};
int main(){
    Distance d1,d2,d3;
    d1.setDistance(4,5,34);
    d2.setDistance(5,2,36);
    d3=d1+d2;
    d3.showDistance();
    --d3;
    d3.showDistance();
    d3--;
    d3.showDistance();

    return 0;
}