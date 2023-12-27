#include<iostream>
using namespace std;
class Time{
private:
    int h,m,s;
public:
    void setTime(int ,int ,int );
    void showTime(){
        cout<<h<<"hr "<<m<<"min "<<s<<"s"<<endl;
    }
    // normalize means 75sec=1min 15 sec
    void normalize(){
        int t,x;
        t=s%60;
        m=m+(s-t)/60;
        x=m%60;
        h=h+(m-x)/60;
        m=x;
        s=t;
        cout<<h<<"hr "<<m<<"min "<<s<<"s"<<endl;
    }
    Time add(Time T){
        Time t;
        t.h=h+T.h;
        t.m=m+T.m;
        t.s=s+T.s;
        t.normalize();
        return t;
    }
    bool is_greater(Time T){
        if(h>T.h)
            return true;
        else if(h<T.h)
            return false;
        else if(m>T.m)
            return true;
        else if(m<T.m)
            return false;
        else if(s>T.s)
            return true;
        else
            return false;
    }
};
void Time::setTime(int x,int y,int z){
    h=x;
    m=y;
    s=z;
}
int main(){
    Time t1,t2, t3,t4;
    t1.setTime(3,105,120);
    t2.setTime(3,45,40);
    t1.showTime();
    t3=t1.add(t2);
    t3.normalize();
    t1.normalize();
    cout<<t2.is_greater(t1);
    return 0;
}
