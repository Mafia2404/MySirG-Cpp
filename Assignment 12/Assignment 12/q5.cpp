#include<iostream>
using namespace std;
class matrix{
private:
    int a[3][3];
public:
    void setMatrix(){
        int x;
        cout<<"Enter 9 elements\n";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<"Element a["<<i<<"]"<<"["<<j<<"]:";
                    cin>>x;
                    a[i][j]=x;
            }
        }
    }
    void showMatrix(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    //add
    matrix operator+(matrix M){
        cout<<"Addition\n";
        matrix temp;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                temp.a[i][j]=a[i][j]+M.a[i][j];
            }
        }
        return temp;
    }
   
     //sub
    matrix operator-(matrix M){
        cout<<"Subtraction\n";
        matrix temp;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                temp.a[i][j]=a[i][j]-M.a[i][j];
            }
        }
        return temp;
    }
     //multiply
    matrix operator*(matrix M){
        cout<<"Multiply\n";
        matrix temp;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                temp.a[i][j]=0;
                for(int k=0;k<3;k++)
                    temp.a[i][j]+=a[i][j]+M.a[i][j];
            }
        }
        return temp;
    }
};
int main(){
    matrix m1,m2,m3;
    m1.setMatrix();
    m2.setMatrix();
    m3=m1+m2;
    m3.showMatrix();
    m3=m1-m2;
    m3.showMatrix();
    m3=m1*m2;
    m3.showMatrix();
    return 0;
}