#include<iostream>
#include<string.h>
using namespace std;
class Game
{
    private:
        int score[5];
    public:
        void setScore(int round, int score)
        {
            this->score[round-1]=score;
        }
        int getScore(int round)
        {
            return score[round-1];
        }
};
class GameResult:public Game
{
    private:
        int result[5];
    public:
        static const int WIN=2,LOOSE=0,DRAW=1;
        void setResult(int round,int result)
        {
            this->result[round-1]=result;
        } 
        int getResult(int round)
        {
            return result[round-1];
        }
        void finalResult()
        {
            int scoreSum=0,resultSum=0;
            for(int i=0;i<=4;i++)
            {
                resultSum+=result[i];
                scoreSum+=getScore(i+1);
            }
            cout<<"\nTotal Score="<<scoreSum;
            cout<<"\nTotal Result Points="<<resultSum;
        }
};
class Actor
{
    private:
        char name[30];
        int age;
    public:
        void setName(char n[]) { strcpy(name,n);}
        void setAge(int a) { age=a;}
        char* getName() { return name;}
        int getAge() { return age;}
};
class TVActor:virtual public Actor
{
    private:
        int tvProjectCount;
    public:
        void setTVProjectCount(int x) { tvProjectCount=x;}
        int getTVProjectCount() { return tvProjectCount;}
        void setTVActor(char n[],int a,int pcount)
        {
            setName(n);
            setAge(a);
            setTVProjectCount(pcount);
        }
        void showTVActor()
        {
            cout<<endl;
            cout<<getName()<<" "<<getAge()<<" "<<getTVProjectCount();
        }
};
class MovieActor:virtual public Actor
{
    private:
        int movieProjectCount;
    public:
        void setMovieProjectCount(int x) { movieProjectCount=x;}
        int getMovieProjectCount() { return movieProjectCount;}
        void setMovieActor(char n[],int a,int pcount)
        {
            setName(n);
            setAge(a);
            setMovieProjectCount(pcount);
        }
        void showMovieActor()
        {
            cout<<endl;
            cout<<getName()<<" "<<getAge()<<" "<<getMovieProjectCount();
        }
};
class AllScreenActor:public TVActor,public MovieActor
{
    public:
        void setActorData(char n[],int a,int tvProject,int movieProject)
        {
            setName(n);
            setAge(a);
            setTVProjectCount(tvProject);
            setMovieProjectCount(movieProject);
        }
        void showActorData()
        {
            cout<<endl;
            cout<<getName()<<"  ";
            cout<<getAge()<<"  ";
            cout<<getTVProjectCount()<<"  ";
            cout<<getMovieProjectCount();

        }
};