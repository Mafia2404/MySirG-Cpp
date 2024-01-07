#include<iostream>
#include<string.h>
using namespace std;
class Shape{
private:
    char shapeName[20];
public:
    void setShapeName(char a[]){
        strcpy(shapeName,a);
    }
    void displayShapeName(){
        cout<<endl<<shapeName<<endl;
    }
    virtual void area()=0;//this makes this class abstract
};
class square:public Shape{
public:
    void area(){cout<<"\narea of square";};//error aayega override nhi kiya
};
class rectangle:public Shape{
public:
    void area(){cout<<"\narea of rectangle";} 
};
int main(){
    square s1;
    rectangle r1;
    s1.setShapeName("square");
    r1.setShapeName("rectangle");
    s1.area();
    r1.area();
    return 0;
}