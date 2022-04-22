#include<iostream>
#include<conio.h>
using namespace std;
class Rational{
    int num,den;
    public:
    Rational();
    Rational(int n,int d);
    Rational(Rational &r);
    void getdata();
    
};
Rational::Rational(){
    num=2;
    den=3;
    
}
Rational::Rational(int n,int d){
    num=n;
    den=d;
    
}
Rational::Rational(Rational&r){
    num=r.num;
    den=r.den;
    
}
void Rational::getdata()
{
    cout<<"Rational number is:"<<num<<"/"<<den<<endl;
}
int main()
{
    Rational R1,R2(5,6),R3(R2);
    R1.getdata();
    R2.getdata();
    R3.getdata();
    getch();
}
