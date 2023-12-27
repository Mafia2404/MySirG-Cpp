#include<iostream>
using namespace std;
class TestResult{
private:
    int roll_no,right,wrong,net_score;
    static int right_weightage,worng_weightage;
public:
   TestResult(){}
   TestResult(int x,int y,int z){
        roll_no=x;
        right=y;
        wrong=z;
        net_score=(right*right_weightage-wrong*worng_weightage);
    }
    void showData(){
        cout<<"Roll_no="<<roll_no<<" right="<<right<<" wrong="<<wrong<<" net_score="<<net_score<<endl;
    }
    int get_net_score(){
        return net_score;
    }
    TestResult swap(TestResult &T){
        
        roll_no=T.roll_no;
        right=T.right;
        wrong=T.wrong;
        net_score=T.net_score;
    }

};
//set static variable
int TestResult::right_weightage=10;
int TestResult::worng_weightage=3;
int main (){
    TestResult t[5], t1(1,8,2),t2(2,7,3),t3(3,3,7),t4(4,5,5),t5(5,10,0),temp;
    t[0]=t1;
    t[1]=t2;
    t[2]=t3;
    t[3]=t4;
    t[4]=t5;
   
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(t[i].get_net_score()<t[j].get_net_score()){
                temp=t[i];
                t[i]=t[j];
                t[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        t[i].showData();
    }
    return 0;
}