#include<iostream>
#include<string.h>
using namespace std;
class Cuboid
{
    private:
        int length,breadth,height;
    public:
        Cuboid()
        {
            length=0;
            breadth=0;
            height=0;
        }
        Cuboid(int x,int y,int z)
        {
            length=x;
            breadth=y;
            height=z;
        }
};
class Customer
{
    private:
        int cust_id;
        char name[20];
        char email[40];
        char mobile[15];
    public:
        Customer()
        {
            cust_id=0;
            strcpy(name,"Anonymous");
            strcpy(email,"xyz@gmail.com");
            strcpy(mobile,"0000000000");
        }
        Customer(int id,char n[],char e[],char m[])
        {
            cust_id=id;
            strcpy(name,n);
            strcpy(email,e);
            strcpy(mobile,m);
        }
};
class Time
{
    private:
        int hr,min,sec;
    public:
        Time(int a,int b,int c)
        {
            hr=a;
            min=b;
            sec=c;
        }
};
class Book{
    private:
        int bookid;
        char title[40];
        float price;
    public:
        Book()
        {
            bookid=0;
            strcpy(title,"no-title");
            price=0.0f;
        }
        Book(int id,char t[],float p)
        {
            bookid=id;
            strcpy(title,t);
            price=p;
        }
};
class Complex
{
    private:
        int a,b;
    public:
        Complex(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"\na="<<a<<" b="<<b;
        }
};
int main()
{
    Complex c[5]={Complex(1,2),Complex(3,4),Complex(5,6),Complex(7,8),Complex(9,10)};
    for(int i=0;i<5;i++)
        c[i].showData();
    cout<<endl;
    return 0;
}