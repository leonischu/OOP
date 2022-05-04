#include<iostream>
#include<conio.h>
using namespace std;
class rational
{
    int num,den;
    public:
    rational()
    {
        num=0;
        den=0;
    }
    rational(int n,int d){
        num=n;
        den=d;
        
    }
    void displayrational(){
        cout<<"Rational number is:"<<num<<"/"<<den<<endl;
    }
    rational operator+(rational r2){
        rational r;
        r.num=num+r2.den+r2.num*den;
        r.den=den*r2.den;
        return r;
    }
};
int main(){
     rational r1(2,3),r2(3,4),r3;
     r1.displayrational();
     r2.displayrational();
     r3=r1+r2;
     cout<<"After addition:"<<endl;
     r3.displayrational();
     getch();
}
