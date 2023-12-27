#include<iostream>
using namespace std;
class TestResult{
private:
    int roll_no,right,wrong,net_score;
    static int right_weightage,worng_weightage;
public:
    void setData(int x,int y,int z){
        roll_no=x;
        right=y;
        wrong=z;
        net_score=(right*right_weightage-wrong*worng_weightage);
    }
    void showData(){
        cout<<"Roll_no="<<roll_no<<" right="<<right<<" wrong="<<wrong<<" net_score="<<net_score<<endl;
    }


};
//set static variable
int TestResult::right_weightage=10;
int TestResult::worng_weightage=3;
int main (){
    TestResult t1;
    t1.setData(1,8,2);
    t1.showData();
    return 0;
}