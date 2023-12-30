#include<iostream>
using namespace std;
class Array{
private:
    int *p;
    int size;
public:
    void showArray(int x){
        cout<<p[x];
    }
    //constructor
    Array(int x){
        size=x;
        p=new int[size];
    }
    //overloading subscript operator
    int& operator[](int x){
        if(x>=size){
            cout<<"Array out of index";
        }
        else
            return p[x];
    }
    //destructor
    ~Array(){
        delete []p;
        cout<<"\nSuccesfully Deleted/free!";
    }
};
int main(){
    Array a1(5);
    int x;
    for(int i=0;i<5;i++){
        cout<<"Enter element "<<i;
        cin>>a1[i];
    }           
    a1.showArray(4);
    cout<<endl<<a1[3];
    return 0;
} 