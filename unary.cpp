#include<iostream>
#include<conio.h>
using namespace std;
class coordinate
{
    int x,y,z;
    public:
   // coordinate(){
   
    coordinate(int a,int b,int c){
        x=a;
        y=b;
        z=c;
        
    }
    void display(){
        cout<<"The value of x is:"<<x<<endl;
        cout<<"The value of y is:"<<y<<endl;
        cout<<"The value of z is:"<<z<<endl;
    }
    void operator -(){
        x=-x;
        y=-y;
        z=-z;

    }
};
int main() {
    coordinate d(1,2,3);
    d.display();
    -d;
    cout<<"After negating :"<<endl;
    d.display();
 getch();
    }
    
    
