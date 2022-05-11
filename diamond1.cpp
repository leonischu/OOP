#include<iostream>
#include<conio.h>
using namespace std;
class person
{
    protected:
    char name[50];
    int code;
    public:
    void display(){
        cout<<"Enter your name and code"<<endl;
        cin>>name>>code;
        cout<<"Name="<<name<<"code="<<code<<endl;
    }};
    class account:public virtual person
    {
        protected:
        int salary;
        public:
        void display(){
            cout<<"Enter the salary"<<endl;
            cin>>salary;
        cout<<"The salary is"<<salary<<endl;
        
        }
        
    };
    class admin:public virtual person{
        protected:
        int n;
        public:
        void display(){
            cout<<"Enter the number of years of experience"<<endl;
            cin>>n;
            cout<<"The no of years of experience is:"<<n<<endl;
        }
    };
    class record :public account,public admin{
        protected:
        int rec;
        public:
        void display(){
            cout<<"Enter the record number:"<<endl;
            cin>>rec;
            cout<<"The recocrd dnumber is:"<<rec<<endl;
        }
        
    };
    int main(){
        record r;
        r.person::display();
        r.account::display();
        r.admin::display();
        r.display();
        getch();
        
    }
    
        