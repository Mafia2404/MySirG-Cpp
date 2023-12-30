#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y) { a=x; b=y;}
        void showData(){ cout<<"\na="<<a<<" b="<<b;}
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
};
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
Complex operator-(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a-Y.a;
    temp.b=X.b-Y.b;
    return temp;
}
Complex operator*(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a*Y.a-X.b*Y.b;
    temp.b=X.a*Y.b+X.b*Y.a;
    return temp;
}
class Time
{
    private:
        int hr,min,sec;
    public:
        void setTime(int a,int b,int c){hr=a; min=b; sec=c;}
        void showTime(){ cout<<"\n"<<hr<<":"<<min<<":"<<sec;}
        friend ostream& operator<<(ostream&,Time);
        friend istream& operator>>(istream&,Time&);
        Time operator=(Time T)
        {
            hr=T.hr;
            min=T.min;
            sec=T.sec;
            return *this;
        }

};
ostream& operator<<(ostream &dout ,Time T)
{
    dout<<"\n"<<T.hr<<":"<<T.min<<":"<<T.sec;
    return dout;
}
istream& operator>>(istream &din,Time &T)
{
    din>>T.hr>>T.min>>T.sec;
    return din;
}
class Array 
{
    private:
        int *p;
        int size; 
    public:
        Array operator=(const Array arr)
        {
            size=arr.size;
            p=new int[size];
            for(int i=0;i<size;i++)
                p[i]=arr.p[i];
            return *this;
        }
        friend Array* operator+(Array,Array);

};
Array* operator+(Array a1,Array a2)
{
    Array *arrptr=new Array();
    arrptr->size=a1.size+a2.size;
    arrptr->p=new int[arrptr->size];
    int i,k;
    for(i=0,k=0;i<a1.size;i++,k++)
        arrptr->p[k]=a1.p[i];
    for(i=0;i<a2.size;i++,k++)
        arrptr->p[k]=a2.p[i];
    return arrptr;
}