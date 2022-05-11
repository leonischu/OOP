#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class person{
    protected:
    char name[20];
    int age;
    public:
    person(char *a,int b){
        strcpy(name,a);
        age=b;
        
    }
     void putperson(){
         cout<<"Name is:"<<name<<endl;
         cout<<"Age is:"<<age<<endl;
         
        
    }
};
class student:public person{
    protected:
    int roll,sem;
    public:
    student(char *a,int b,int c,float d):person(a,b)
    {
        roll=c;
        sem=d;
        
    }
    void  putst(){
        cout<<"The roll is:"<<roll;
        cout<<"sem is:"<<sem<<endl;
        
    }
};
class emplyoee:public person{
    private:
    int hour;
    float salary;
    public:
    emplyoee(char *a,int b,int e,float f):person(a,b)
    {
        hour=e;
        salary=f;
        
    }
    void  putemplyoee(){
        cout<<"The working hours is "<<hour<<endl;
        cout<<"salary is:"<<salary<<endl;
    }
};
int main(){
    student s("Nischal",19,23,2.0);
    s.putperson();
    s.putst();
    emplyoee e("Nischal",19,06,60000);
    e.putperson();
    e.putemplyoee();
    getch();
    
}