#include<iostream>
using namespace std;
class Item
{
    private:
        int a,b; //Instance Member Variables (IMV)
        static int k; //static member variable (SMV) |Class Variable
    public:
        void set_a(int x) { a=x;}
        int get_a() { return a;}
        void set_b(int x) { b=x;}
        int get_b() { return b;}
        static void set_k(int x) { k=x;}
        static int get_k() { return k;}
};
int Item::k;
int main()
{
    Item i1,i2;
    i1.set_a(5);
    cout<<i2.get_a()<<endl;
    Item::set_k(6);//Item::k=6;
    cout<<Item::get_k();
    cout<<endl;
    return 0;
}