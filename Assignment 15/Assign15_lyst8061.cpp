#include<iostream>
#include<string.h>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y) { a=x; b=y;}
        void showData(){ cout<<"\na="<<a<<" b="<<b;}
        friend Complex operator-(Complex);
};
Complex operator-(Complex C)
{
    Complex temp;
    temp.a=-C.a;
    temp.b=-C.b;
    return temp;
}
class Integer
{
    private:
        int a;
    public:
        friend bool operator!(Integer);
        friend bool operator==(Integer,Integer);
};
bool operator!(Integer I)
{
    return !(I.a);
}
bool operator==(const Integer I1,const Integer I2)
{
    return I1.a==I2.a;
}
class Coordinate
{
    private:
        int x, y;
    public:
        Coordinate():x(0),y(0){}
        Coordinate(int x,int y):x(x),y(y){}
        Coordinate operator,(Coordinate C)
        {
            return C;
        }
        void show(){ cout<<"\n("<<x<<","<<y<<")";}
        friend ostream& operator<<(ostream&,Coordinate);
        friend istream& operator>>(istream&,Coordinate&);
};
ostream& operator<<(ostream &dout,Coordinate C)
{
    cout<<"\n("<<C.x<<","<<C.y<<")";
    return dout;
}
istream& operator>>(istream &din,Coordinate &C)
{   
    din>>C.x>>C.y;
    return din;
}
class Student
{
    private:
        int rollno;
        char name[40];
        int age;
    public:
        void setStudent(int r,char n[],int a)
        {
            rollno=r;
            strcpy(name,n);
            age=a;
        }
        void showStudent()
        {
            cout<<"\n"<<rollno<<" "<<name<<" "<<age;
        }
        bool operator==(Student s)
        {
            return rollno==s.rollno && age==s.age && (!strcmp(name,s.name));
        }
};




int main()
{
    Coordinate C1(2,3),C2(5,-1),C3;
    C3=(C1,C2);
    C3.show();
    cout<<endl;
    return 0;
}
