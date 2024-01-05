#include<iostream>
using namespace std;
class Game{
private:
    int arr[5];
public:
    void setScore(int round,int score){
        arr[round-1]=score;
    }
    int getScore(int round){               
            cout<<arr[round-1];  
    
    }
};
class GameResult:public Game{
private:
    int result[5];
public:
        void  setResult(int round,int result){
                this->result[round]=result;
}
        int getResult(int round){
            return result[round-1];
        }
        int finalScore(){
            int s=0;
            for(int i=0;i<5;i++){
                s+=result[i];
            }
            cout<<"\nFinalScore="<<s;
        }
};