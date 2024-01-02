#include<iostream>
using namespace std;
class Time{
private:
    int hr,min,sec;
public:
    void setTime(int hr,int min,int sec){
        this->hr=hr;
        this->min=min;
        this->sec=sec;
        normalize();
    }
    void showTime(){
        cout<<endl<<hr<<"hr "<<min<<"min "<<sec<<"sec\n";
    }
    //setters
    void sethr(int hr){
        this->hr=hr;
    }
    void setmin(int min){
        this->min=min;
    }
    void setsec(int sec){
        this->sec;
    }
    //getters
    int gethr(){
        return hr;
    }
    int getmin(){
        return min;
    }
    int getsec(){
        return sec;
    }
        
    void normalize(){
        min+=sec/60;
        sec%=60;
        hr+=min/60;
        min%=60;
    }
};
void sortTimeArray(Time *p){
    Time temp;
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
                        if(p[i].gethr()>p[j].gethr()){
                                temp=p[i];
                                p[i]=p[j];
                                p[j]=temp;
                }
                else if(p[i].gethr()==p[j].gethr()){
                        if(p[i].getmin()>p[j].getmin()){
                                temp=p[i];
                                p[i]=p[j];
                                p[j]=temp;
                        }
                }
                else if(p[i].gethr()==p[j].gethr() && p[i].getmin()==p[j].getmin()){
                        if(p[i].getsec()>p[j].getsec()){
                                temp=p[i];
                                p[i]=p[j];
                                p[j]=temp;
                     }
                }
        }
    }
}
Time* createTimeArray(int x){
    Time *ptr=new Time[x];
    return ptr;
}
int main(){
    Time *p;
    int x,y,z;
    p=createTimeArray(3);
    for(int i=0;i<3;i++){
        cout<<i<<" Enter hr,min and sec";
        cin>>x>>y>>z;
        p[i].setTime(x,y,z);
    }
     for(int i=0;i<3;i++){        
        p[i].showTime();
    }
    sortTimeArray(p);
    cout<<"\nAfter sort:\n";
    for(int i=0;i<3;i++){        
        p[i].showTime();
    }
    p[2].showTime();
    return 0;
}
