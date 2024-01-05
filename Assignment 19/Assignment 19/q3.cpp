//hybrid class
#include<iostream>
#include<string.h>
using namespace std;
class Actor{
private:
    int age;
    char name[20];
public:
    virtual  void setAge(int x){age=x;}
    virtual void setName(char a[]){strcpy(name,a);}
    int getAge(){return age;}
    char* getName(){return name;}
};
class TVActor:virtual public  Actor{
private:
    int projects;
public:
    void setProjects(int x){projects=x;}
    int getProjects(){return projects;}
    void setTVActor(int x,char a[],int y){
        setAge(x);      
        setName(a);
        projects=y;
    }
    void showTVActor(){
        cout<<getName();
    }
};
class MovieActor:virtual public Actor{
private:
    int does;
public:
    void setDoes(int x){does=x;}
    int getDoes(){return does;}
    void setMovieActor(int x,char a[],int y,int z){
        setAge(x);
        setName(a);        
        setDoes(z);
    }
    void showMovieActor(){
        cout<<endl<<getName()<<" age="<<getAge()<<" Does="<<getDoes()<<endl;
    }


};
class AllScreenActor:public MovieActor,public TVActor{
    public:
        void setActorData(int x,char a[],int y,int z,int v){
                setAge(x);
                setName(a);
                setProjects(z);
                setDoes(v);

        }
        void showActorData(){
            cout<<getAge()<<" "<<getName()<<" "<<getProjects()<<" "<<getDoes()<<endl;
        }
};