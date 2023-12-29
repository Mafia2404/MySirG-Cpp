#include<iostream>
#include<string.h>
using namespace std;
class Room{
private:
    int room_no;
    char type[20];
    bool is_AC;
    float price;
public:
    Room(int x,char a[],bool y,float z){
        room_no=x;
        strcpy(type,a);
        is_AC=y;
        price=z;
    }

    void showRoom(){
        cout<<room_no<<" "<<type<<" "<<"AC room="<<is_AC<<" "<<price<<endl;
    }
};
int main(){
    Room r1(306,"Delux",true,450.55);
    r1.showRoom();
    return 0;
}