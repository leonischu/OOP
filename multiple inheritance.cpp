#include<iostream>
#include<conio.h>
using namespace std;
class alpha{
    protected:
    int x;
    public:
    void getx(){
        cout<<"Enter the vlaue of x"<<endl;
        cin>>x;
        
    }
    void displayx(){
        cout<<"The value of x is:"<<x<<endl;
    }
    
};
class beta{
    protected:
    int y;
    public:
    void gety(){
    cout<<"Enter the value of y:"<<endl;
    cin>>y;
    }
    void displayy(){
        cout<<"The value of y is"<<y<<endl;
    }
};
class gamma:public alpha,public beta{
    public:
    int z;
    void getz(){
        cout<<"ENter the value of z:"<<endl;
        cin>>z;
    }
    void displayz(){
        cout<<"The value of z is "<<z<<endl;
    }
};
int  main(){
    gamma z;
    z.getx();
    z.gety();
    z.getz();
    z.displayx();
    z.displayy();
    z.displayz();
    getch();
}

    
    