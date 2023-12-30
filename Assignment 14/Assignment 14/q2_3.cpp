#include<iostream>
using namespace std;
class Time{
private:
    int h,m,s;
public:
    void setData(int x,int y,int z){
        h=x;
        m=y;
        s=z;
    }
    void showData(){
        cout<<h<<"hr "<<m<<"min "<<s<<"sec\n";
    }
    void operator=(Time T){
        h=T.h;
        m=T.m;
        s=T.s;        
    }
    friend istream& operator>>(istream& ,Time&);
    friend ostream& operator<<(ostream&,Time);

};
istream& operator>>(istream &din,Time &T){
    din>>T.h>>T.m>>T.s;
    return din;
}
ostream& operator<<(ostream &dout,Time T){

        dout<<T.h<<"hr "<<T.m<<"min "<<T.s<<"sec\n";
        return dout;
}

int main(){
    Time t1,t2,t3;
   //insertion operator
   cout<<"Enter hr,m and s\n";
    cin>>t1;
    cout<<t1;    
    t3=t1;//t3.operator=(t1);
    t3.showData();
    return 0;


}