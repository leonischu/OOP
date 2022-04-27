#include<iostream>
#include<conio.h>
using namespace std;
class person{
    protected:
    char name[20];
    int code;
    public:
    void get(){
        cout<<"Enter the name and code"<<endl;
        cin>>name>>code;
        
    }
    void display(){
        cout<<"The name is:"<<name<<endl;
        cout<<"The code is:"<<code<<endl;
    }
    
};
class account:public virtual person
{
  
    float salary;
    public:
    void get(){
        cout<<"Enter the salary:"<<endl;
        cin>>salary;
    }
    void display(){
        cout<<"the salary is :"<<salary<<endl;
        
        
    }
};
class admin:public virtual person
{
  
    int no;
    public:
    void get(){
        cout<<"enter no of years of experience"<<endl;
        cin>>no;
        
    }
    void display(){
        cout<<"The no of years of experience is:"<<no<<endl;
        
    }
};
class record:public virtual account,public virtual admin{
    int record;
    public:
    void get(){
        cout<<"Enter the record no:"<<endl;
         cin>>record;
}
    
    void display(){
        
        cout<<"The record no is"<<record<<endl;
       
}};
int main()
{

 record r;
 r.person::get();
 r.account::get();
 r.admin::get();

 r.record::get();
 r.person::display();
 
 r.account::display();
 r.admin::display();
 r.display();
 getch();
}
 