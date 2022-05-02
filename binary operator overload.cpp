#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex()
    {
     real=0;
     img=0;
    }
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
void displayComplex(){
    cout<<"Complex no is:"<<real<<"+i"<<img<<endl;
    
}
friend Complex operator+(Complex c1,Complex c2);
};
Complex operator+(Complex c1,Complex c2){
Complex c;
c.real=c1.real+c2.real;
c.img=c1.img+c2.img;
return c;
}
int main()
{
    Complex c1(3,5),c2(4,5),c3;
    c1.displayComplex();
    c2.displayComplex();
    c3=c1+c2;
    cout<<"after addition:"<<endl;
    c3.displayComplex();
    getch();
}
