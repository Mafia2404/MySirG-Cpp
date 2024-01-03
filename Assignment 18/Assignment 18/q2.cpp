#include<iostream>
using namespace std;
class Circle{
private:
    int radius;
public:
    void setRadius(int x){radius=x;}
    int getRadius(){return radius;}
    float getArea(){return 3.14*radius*radius;}//overriding
};
class ThickCircle:public Circle{
private:
    int thickness;
public:
    void setThickness(int x){thickness=x;}
    int getThickness(){return thickness;}
    float getArea(){return 3.14*(thickness+getRadius())*(thickness+getRadius())
                            - 3.14*getRadius()*getRadius();}//overriding(same function prototype)
};
int main(){
    
    ThickCircle t1;
    t1.setThickness(5);
    cout<<t1.getArea();//function overriding
   
    return 0;
}