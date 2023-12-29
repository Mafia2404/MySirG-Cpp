#include<iostream>
using namespace std;
class Date{
private:
    int d,m,y;
public:
        Date():d(24),m(12),y(2023){}

        void showDate(){
            cout<<d<<"-"<<m<<"-"<<y;
        }
};

int main(){
    Date d1;
    d1.showDate();
    return 0;

}