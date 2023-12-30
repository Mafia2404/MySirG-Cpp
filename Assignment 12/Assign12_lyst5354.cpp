#include<iostream>
using namespace std;
class Complex{
    private:
        int a,b;
    public:
    void setData(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void showData()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    Complex operator+(Complex C){
        Complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
    Complex operator-(Complex C){
        Complex temp;
        temp.a=a-C.a;
        temp.b=b-C.b;
        return temp;
    }
    Complex operator*(Complex C){
        Complex temp;
        temp.a=a*C.a-b*C.b;
        temp.b=a*C.b+b*C.a;
        return temp;
    }
    bool operator==(Complex C)
    {
        if(a==C.a && b==C.b)
            return true;
        else
            return false;
    }

};
class Time{
    private:
        int hr,min,sec;
    public:
        void setTime(int x,int y,int z)
        {
            hr=x;
            min=y;
            sec=z;
        }
        void showTime()
        {
            cout<<endl;
            cout<<hr<<":"<<min<<":"<<sec;
        }
        bool operator>(Time T)
        {
            if(hr>T.hr)
                return true;
            else if(hr<T.hr)
                return false;
            else if(min>T.min)
                return true;
            else if(min<T.min)
                return false;
            else if(sec>T.sec)
                return true;
            else
                return false;
        }
        Time operator++(int) //post increment
        {
            Time temp=*this;
            sec++;
            min+=sec/60;
            sec=sec%60;
            hr+=min/60;
            min=min%60;
            return temp;
        }
        Time operator++() //pre increment
        {
            sec++;
            min+=sec/60;
            sec=sec%60;
            hr+=min/60;
            min=min%60;
            return *this;
        }
        Time operator+(Time T)
        {
            Time temp;
            temp.hr=hr+T.hr;
            temp.min=min+T.min;
            temp.sec=sec+T.sec;
            temp.min+=temp.sec/60;
            temp.sec=temp.sec%60;
            temp.hr+=temp.min/60;
            temp.min=temp.min%60;
            return temp;
        }
};
class Matrix
{
    private:
        int A[3][3];
    public:
        void inputMatrix()
        {
            cout<<"Enter 9 numbers for Matrix: ";
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    cin>>A[i][j];
        }
        void printMatrix()
        {
            cout<<endl;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                    cout<<A[i][j]<<" ";
                cout<<endl;

            }
        }
        Matrix operator+(Matrix M)
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    temp.A[i][j]=A[i][j]+M.A[i][j];
            return temp;
        }
        Matrix operator-(Matrix M)
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    temp.A[i][j]=A[i][j]-M.A[i][j];
            return temp;
        }
        Matrix operator*(Matrix M)
        {
            Matrix temp;
            int sum,k;
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++){
                    for(k=0,sum=0;k<=2;k++)
                        sum+=A[i][k]*M.A[k][j];
                    temp.A[i][j]=sum;
                }
            return temp;
        }
};
int main()
{
    Matrix A,B,C;
    A.inputMatrix();
    B.inputMatrix();
    C=A*B;
    A.printMatrix();
    B.printMatrix();
    C.printMatrix();
    cout<<endl;
    return 0;
}
