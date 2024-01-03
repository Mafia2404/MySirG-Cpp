#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class Person
{
    private:
        char name[30];
        int age;
    protected:
        void setName(char n[]){ strcpy(name,n);}
        void setAge(int a) { age=a;}
        char* getName(){ return name;}
        int getAge() { return age;}
};
class Employee:public Person
{
    private:
        float salary;
    public:
        void setEmployee(char n[],int a,float s)
        {
            setName(n);
            setAge(a);
            salary=s;
        }
        void showEmployee()
        {
            cout<<endl;
            cout<<getName()<<" "<<getAge()<<" "<<salary;
        }
};
class Circle
{
    private:
        int radius;
    public:
        void setRadius(int r){radius=r;}
        int getRadius(){return radius;}
        float getArea(){return 3.14*radius*radius;}
};
class ThickCircle:public Circle
{
    private:
        int thickness;
    public:
        void setThickness(int t) { thickness=t;}
        int getThickness() { return thickness;}
        float getArea(){ 
            return 3.14*(getRadius()+thickness)*(getRadius()+thickness)-3.14*getRadius()*getRadius();
        }
};
class Coordinate
{
    private:
        int x,y;
    public:
        void setCoordinate(int x,int y)
        { this->x=x; this->y=y;}
        void showCordinate() { cout<<"\n()"<<x<<","<<y<<")";}
        double getDistance()
        {
            return sqrt(x*x+y*y);
        }
        double getDistance(Coordinate C)
        {
            return sqrt((x-C.x)*(x-C.x)+(y-C.y)*(y-C.y));
        }
};
class Shape
{
    private:
        char shapeName[20];
    public:
        void setShapeName(char n[]){strcpy(shapeName,n);}
        char* getShapeName(){ return shapeName;}
};
class StraightLine: public Shape
{
    private:
        Coordinate c1,c2;
    public:
        void setLine(Coordinate c1,Coordinate c2)
        { this->c1=c1; this->c2=c2;}
        double getDistance()
        {return c1.getDistance(c2);}
        void showLine()
        {
            c1.showCordinate();
            c2.showCordinate();
        }
};