#include<iostream>
using namespace std;
class Complex
{
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData();
        
};
void Complex:: showData()
{
    cout<<"\na="<<a<<" b="<<b;
}
int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,6);
    cout<<endl;
    return 0;
}