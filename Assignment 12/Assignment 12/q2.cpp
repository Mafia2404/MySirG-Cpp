#include<iostream>
using namespace std;
class Time{
private:
    int hour,min,second;
public:
    void setTime(int h,int m,int s){
        hour=h;
        min=m;
        second=s;
    }
    void showTime(){
        cout<<hour<<"hr"<<min<<"min"<<second<<"sec"<<endl;
    }
    void normalize(){
        
        min+=second/60;
        second%=60;
        hour+=min/60;
        min%=60;
    }
    bool operator>(Time C){
        
        if(hour==C.hour && min==C.min && second==C.second)
            return true;
        return false;
    }
   // void operator++(){
     //   second+=1;            
    // }
     // t1++ post-increment
    
    //Q3 ++t1 pre-increment
    Time operator++(){
        second++;
        min+=second/60;
        hour+=min/60;
        second%=60;
        min%=60;
        return *this; //return current object;
    }
    //t1++ post increment
    Time operator++(int){
        Time temp=*this;
        second++;
        min+=second/60;
        hour+=min/60;
        second%=60;
        min%60;
        return temp; //return old object;
    }
    //Q4
    Time operator+(Time T){
        Time temp;
        temp.hour=hour+T.hour;
        temp.min=min+T.min;
        temp.second=second+T.second;
        return temp;
    }

};
int main(){
    Time t1,t2,t3;
    t1.setTime(4,46,75);
    t2.setTime(4,46,75);
    t1.normalize();
    t2.normalize();
    ++t1;//operater++();
    t1.showTime();
    t1++;//t2.operater++(int);
    t2.showTime();

    if(t1>t2)
        cout<<"Equal"<<endl;
    else
        cout<<"Not Equal"<<endl;
    
    t3=t1+t2;
    t3.showTime();
    t3.normalize();
    t3.showTime();

    
    return 0;    

}