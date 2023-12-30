#include<iostream>
using namespace std;
class Array{
private:
    int size;
    int *p;
public:
    void setData(){
        int x;
        cout<<"Enter "<<size<<" elements:";
       for(int i=0;i<size;i++){
            cin>>x;
            p[i]=x;
       }
            
    }
    void showData(){
        for(int i=0;i<size;i++){
            cout<<p[i]<<" ";
        }
    }
    Array(int s){
        size=s;
        p=new int[size];
        
    }
    //deep copy
 /*  void operator=(Array &A){
        size=A.size;
        for(int i=0;i<size;i++)
            p[i]=A.p[i];
           
    }*/ 
    friend Array operator+(Array,Array);
    ~Array(){
        delete []p;
    }
};
Array operator+(Array A,Array B){
        Array temp(A.size+B.size);
        for(int i=0;i<A.size;i++){
            temp.p[i]=A.p[i];
        }
        for(int i=A.size;i<A.size+B.size;i++){
            temp.p[i]=B.p[i-A.size];
        }
        return temp;
}
int main(){
    Array a1(5),a2(5),a3(5);
    a1.setData();
    a2.setData();
    //a3=a1;
   // a3.showData();
    
    a3 = a1+a2;
    a3.showData();
    
    return 0;
        
}