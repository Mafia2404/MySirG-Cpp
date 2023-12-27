#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        Complex sumGreater(Complex C)
        {
            if( (a+b) < (C.a+C.b) )
                return C;
            else
                return *this;
        }
        void setData(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void showData()
        {
            cout<<"\na="<<a<<" b="<<b;
        }
        Complex operator+(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex operator+(int k)
        {
            Complex temp;
            temp.a=a+k;
            temp.b=b;
            return temp;
        }
        Complex operator-()
        {
            Complex temp;
            temp.a=-a;
            temp.b=-b;
            return temp;
        }
        friend Complex operator+(int,Complex);
        friend ostream& operator<<(ostream&,Complex);
        friend istream& operator>>(istream&,Complex&);
};
istream& operator>>(istream &din, Complex &C)
{
    din>>C.a>>C.b;
    return din;
}
ostream& operator<<(ostream &dout,Complex C)
{
    dout<<"\na="<<C.a<<" b="<<C.b;
    return dout;
}
Complex operator+(int k,Complex C)
{
    Complex temp;
    temp.a=k+C.a;
    temp.b=C.b;
    return temp;
}
int main()
{
    Complex c1,c2,c3,c4;
    cin>>c1;
    c2.setData(5,6);
    c3=5+c1; //c3=operator+(5,c1);  
        
    cout<<c1;
    c2.showData();
    c3.showData();
    c4=-c1; //c4=c1.operator-();
    c4.showData();
    c4=c1.sumGreater(c2);
    c4.showData();
    cout<<endl;
    return 0;
}