#include<iostream>
using namespace std;
class Coordinate{
private:
    int a,b;
public:
    void setCoordinate(int x,int y){
        a=x;
        b=y;
    }
    void showCoordinate(){
        cout<<"\na="<<a<<" b="<<b<<endl;
    }
    Coordinate operator,(Coordinate C){
        Coordinate temp;
        temp.a=C.a;
        temp.b=C.b;
        return temp;
    }
    friend ostream& operator<<(ostream&,Coordinate);
    friend istream& operator>>(istream&,Coordinate&);

};
ostream& operator<<(ostream &dout,Coordinate C){
    dout<<"\n a="<<C.a<<" b="<<C.b<<endl;
    return dout;
}
istream& operator>>(istream &din,Coordinate &C){
    cout<<"enter a and b\n";
    din>>C.a>>C.b;
    return din;
}
int main(){
    Coordinate c1,c2,c3;
    cin>>c1; //c1.setCoordinate(4,5);
    cin>>c2; //c2.setCoordinate(5,6);
    c3=(c1,c2);
    cout<<c3; //c3.showCoordinate();
    return 0;
}