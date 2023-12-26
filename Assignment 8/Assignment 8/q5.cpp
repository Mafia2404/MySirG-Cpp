#include<iostream>
using namespace std;
class Circle{
private:
    int r;
public:
    void setRadius(int x);
    void getRadius();
    float area(){
        return 3.14*r*r;
    }
    float circum(){
        return 2*3.14*r;
    }
};
//membership label
void Circle:: setRadius(int x){
    r=x;
}
void Circle:: getRadius(){
    cout<<"Radius="<<r<<endl;
}
int main(){
    Circle c1;
    c1.setRadius(5);
    c1.getRadius();
    cout<<"Area is="<<c1.area()<<endl;
    cout<<"Circumference is="<<c1.circum();
    return 0;
}