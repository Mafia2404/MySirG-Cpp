#include<iostream>
using namespace std;
struct Book
{
    private:
        int bookid;
        char title[20];
        float price;
    public:
        void displayBook()
        {
            cout<<endl;
            cout<<bookid<<" ";
            cout<<title<<" ";
            cout<<price<<endl;
        }
        void inputBook()
        {
            cout<<"Enter bookid, title and price";
            cin>>bookid;
            if(bookid<0)
                bookid=-bookid;
            cin.ignore();
            cin.getline(title,20);
            cin>>price;
        }
};
int main()
{
    Book b1;
    Book b2;
    b1.inputBook();
    b2.inputBook();
    b1.displayBook();
    b2.displayBook();
    cout<<endl;
    return 0;
}