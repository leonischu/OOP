#include<iostream>
#include<conio.h>
using namespace std;
class area
{
    public:
    void calculatea(float l,float b){
        cout<<"Area of rectangle is:"<<l*b<<endl;
        
    } 
    void calculatea(int b,int h){
        cout<<"Area of triangle is:"<<(1/2)*b*h<<endl;
    }
};
int  main ()
{
    area a;
    float l,b,h;
    cout<<"Enter the length bredth of rectangle:"<<endl;
    cin>>l>>b;
    a.calculatea(l,b);
    cout<<"Enter the length and height of triangle:"<<endl;
    cin>>b>>h;
    a.calculatea(b,h);
    getch();
    
}