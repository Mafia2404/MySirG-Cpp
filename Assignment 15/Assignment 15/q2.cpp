#include<iostream>
using namespace std;
class Integer{
private:
    int a;
public:
    void setData(int x){
        a=x;
    }
    void showData(){
        cout<<"\n a="<<a<<endl;
    }
    friend Integer operator!(Integer);
    friend bool operator==(Integer,Integer);
    
};
Integer operator!(Integer I){
    Integer temp;
    temp.a=!(I.a);//not of anything is 0 always;
    return temp;
}
bool operator==(Integer I,Integer C){
    if(I.a==C.a)
        return true;
    return false;
}
int main(){
    Integer i1,i2,i3;
    cout<<!3<<endl;//not of three is zero not binary 
    i1.setData(3);
    i2.setData(-5);
    i3=!i2;
    i3.showData();
    if(i1==i2)
        cout<<"\nequal\n";
    else  
      cout<<"\n not equal\n";
    return 0;
}