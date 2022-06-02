#include<iostream>
#include<conio.h>
using namespace std;
class time{
    int hr,min;
    public:
    time(int h,int m){
        hr=h;
        min=m;
    }
    void display(){
        cout<<"Time is:"<<"hour"<<hr<<"min"<<min<<endl;
        
    }
    void initial(){
    hr=hr+min/60;
    min=min%60;
    }
    time operator+(time t)
    {
        time t1;
        
       t1.hr=hr+t.hr;
        t1.min=min+t.min;
        t1.initial();
        return (t1);
    }

 
};
int main(){
    time t1(5,30),t2(2,60),t3;
    t3=t1=t2;
    t1.display();
    t2.display();
    t3.display();
    getch();
    
    
}
    
}