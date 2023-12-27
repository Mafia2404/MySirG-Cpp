#include<iostream>
using namespace std;
class Matrix{
private:
    int a[3][3];
public:
    void setData(int i,int j,int x){
        a[i][j]=0;
        a[i][j]=x;
    }
    int getData(int x,int y){
            return a[x][y];
    }
    Matrix add(Matrix M){
        Matrix temp;
        cout<<"Add\n";
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){        
                  temp.a[i][j]=a[i][j]+M.a[i][j];           
            }
        }
        return temp;
    }
    Matrix sub(Matrix M){
        cout<<"Subtract\n";
        Matrix temp;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){        
                  temp.a[i][j]=a[i][j]-M.a[i][j];           
            }
        }
        return temp;
    }
    Matrix mult(Matrix M){
        cout<<"Multiply\n";
        Matrix temp;
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++){
                        temp.a[i][j]=0;
                    for(int k=0;k<3;k++){
                        temp.a[i][j]+=a[i][k]*M.a[k][j];
                    }}
        return temp;
    }
    Matrix transpose(){
        cout<<"Transpose\n";
        Matrix temp;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){        
                  temp.a[i][j]=a[j][i];           
            }
        }
        return temp;
    }
    bool is_singular(){
            cout<<"check Singular\n";
            int s;
            s=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
            if(s==0)
                return true;
            else
                return false;
    }
};
void setMatrix(Matrix &m){
    int x;
    cout<<"Enter 9 elements\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){        
            cin>>x;
            m.setData(i,j,x);
        }
    }
    cout<<endl;
}
void display(Matrix m){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<m.getData(i,j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){

    Matrix m1,m2,m3;
    setMatrix(m1);
    display(m1);
    setMatrix(m2);
    display(m2);
    m3=m1.add(m2);
    display(m3);
    m3=m1.sub(m2);
    display(m3);
    m3=m1.mult(m2);
    display(m3);
    m3=m1.transpose();
    display(m3);
    cout<<m1.is_singular();
    return 0;
}