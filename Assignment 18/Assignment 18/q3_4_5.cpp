#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class Coordinate{
private:
    int x;
    int y;
public:
    void setCoordinate(int x,int y){
        this->x=x;
        this->y=y;
    }
    void showCoordinate(){cout<<"\n("<<x<<" , "<<y<<")"<<endl;}
    float getDistance(){return sqrt(x*x + y*y);}
    float getDistance(Coordinate C){return sqrt(pow((x-C.x),2) + pow((y-C.y),2));}
};

class Shape{
private:
    char shapeName[20];
public:
    void setShapeName(char a[]){strcpy(shapeName,a);}
    char* getShapeName(){return shapeName;} 
};

class StraightLine:public Shape{
private:
    Coordinate c1,c2;
public:
    void setLine(Coordinate C,Coordinate X){
        this->c1=c1;
        this->c2=c2;
    }
    void showLine(){
        c1.showCoordinate();
        c2.showCoordinate();
    }
    float getDistance(Coordinate C){
      return c1.getDistance(c2);
    }
    
};