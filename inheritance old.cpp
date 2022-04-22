#include<iostream>
#include<conio.h>
using namespace std;
class Person{
    protected:
    char name[50];
    int code;
    public:
    void display()
    {
        cout<<"Enter your name and code:"<<endl;
        cin>>name>>code;
        cout<<"Name="<<name<<endl<<"code="<<code<<endl;
        
    }
};
class account:public virtual Person
{
    protected:
    int salary;
    public:
    void display(){
        cout<<"Enter the salary:"<<endl;
        cin>>salary;
    cout<<"salary"<<salary<<endl;
    
    }
};
class admin:public virtual Person{
    protected:
    int n;
    public:
    void display(){
        cout<<"Enter the number of years of experience:"<<endl;
        cin>>n;
        cout<<"No of years of ex[experience is:"<<n<<endl;
        
    }
};
class record:public account,public admin{
    protected:
    int rec;
    public:
    void display(){
        cout<<"Enter record number:"<<endl;
        cin>>rec;
        cout<<"Record number is  "<<rec<<endl;
    }
};
   int main(){
       record r;
       r.Person::display();
       r.account::display();
       r.admin::display();
       getch();
   }
   