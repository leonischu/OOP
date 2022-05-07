#include<iostream>
#include<conio.h>
using namespace std;
class fibonacci
{
    int a,b,c;
    public:
    fibonacci(){
        a=0;
        b=1;
        cout<<a<<endl<<b<<endl;
        c=a+b;
    }
    void display()
    {
        cout<<c<<endl;
    }
    void operator++ ()
    {
        a=b;
        b=c;
        c=a+b;
    }
};
int main()
{
    int n;
    fibonacci f;
    cout<<"Enter the number of terms of fibonacci series:"<<endl;
    cin>>n;
    cout<<"The fibonacci series up to: "<<n<<"   term is"<<endl;
    
    for(int i=1;i<n-2;i++){
        f.display();
        ++f;
        getch();
    }
}