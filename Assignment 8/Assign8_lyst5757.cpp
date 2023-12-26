#include<iostream>
using namespace std;
class Complex{
    private:
        int a,b;
    public:
        void setData(int x,int y){
            a=x;
            b=y;
        }
        void showData(){
            cout<<"\na="<<a<<" b="<<b;
        }
};
class Time{
    private:
        int hr,min,sec;
    public:
        void setTime(int x,int y,int z){
            hr=x;
            min=y;
            sec=z;
        }
        void showTime(){
            cout<<endl<<hr<<":"<<min<<":"<<sec;
        }
};
class Date{
    private:
        int d,m,y;
    public:
        void setDate(int x,int y1,int z){
            d=x;
            m=y1;
            y=z;
        }
        char * getMonthName(){
            switch(m){
                case 1:
                    return "Jan";
                case 2:
                    return "Feb";
                case 3:
                    return "Mar";
                case 4:
                    return "Apr";
                case 5:
                    return "May";
                case 6:
                    return "Jun";
                case 7:
                    return "Jul";
                case 8:
                    return "Aug";
                case 9:
                    return "Sep";
                case 10:
                    return "Oct";
                case 11:
                    return "Nov";
                case 12:
                    return "Dec";
            }
        }
        void showDate(int format=1){
            if(format==1)
                cout<<endl<<d<<"/"<<m<<"/"<<y;
            else if(format==2)
                cout<<endl<<d<<"-"<<m<<"-"<<y;
            else if(format==3)
                cout<<endl<<d<<"-"<<getMonthName()<<"-"<<y;
        }
};
class Circle{
    private:
        int radius;
    public:
        void setRadius(int r){
            radius=r;
        }
        int getRadius(){
            return radius;
        }
        float area(){
            return 3.14*radius*radius;
        }
        float circumference(){
            return 2*3.14*radius;
        }
};