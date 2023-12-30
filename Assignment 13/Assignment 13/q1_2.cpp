#include<iostream>
using namespace std;
class fraction{
private:
    long numerator;
    long denominator;
public:
   // fraction(long numerator=0,long denominator=0);
    int lcm(int a,int b){
        
        for(int i=(a>b?a:b);;i++){
            if(i%a==0 && i%b==0)
                return i;
        }
        return 0;
    }
    void setFraction(long x,long y){
        numerator=x;
        denominator=y;
        bool flag1=1;
       
        while(flag1){
            for(int i=2;i<=(numerator<denominator?numerator:denominator);i++){
            while(numerator%i==0 && denominator%i==0){
               numerator/=i;
                denominator/=i;
            }
            }
            flag1=0;
        }
    }

    void showFraction(){
        cout<<"\nnumerator="<<numerator<<" denominator="<<denominator;        
    }

    fraction operator+(fraction F){
        fraction temp;
        temp.numerator=numerator*(lcm(denominator,F.denominator)/denominator)
                            +F.numerator*(lcm(denominator,F.denominator)/F.denominator);
        temp.denominator=lcm(denominator,F.denominator);
        
        bool flag1=1;       
        while(flag1){
            for(int i=2;i<=(temp.numerator<temp.denominator?temp.numerator:temp.denominator);i++){
            while(temp.numerator%i==0 && temp.denominator%i==0){
               temp.numerator/=i;
                temp.denominator/=i;
            }
            }
            flag1=0;
        }
        return temp;
    }
    bool operator<(fraction F){
        
        if((numerator*1.0/denominator)<(F.numerator*1.0)/F.denominator)
            return true;
        else 
            return false;
    }
};
int main(){
fraction f1,f2,f3;
f1.setFraction(1,2);
f2.setFraction(1,2);
f3=f1+f2;
f3.showFraction();
bool t=f1<f2;
if(t==true){
    cout<<"\ntrue";
}
else
    cout<<"\nfalse";
    f1.showFraction();
    f2.showFraction();
return 0;
}