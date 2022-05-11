/*Input vector coordinate from the base class name base.class derived inherites
all the properties of base class .class derived must contain function name 
addvector() that adds the two vectors input froom base class and finally
 display the information from function display() that is friend from base class*/ 
#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
    protected:
    int v1[3],v2[3],sum[3];
    public:
     void getvector(){
         cout<<"Enter the first vector"<<endl;
     
     for (int i=0;i<3;i++)
     
     {
         cin>>v1[i];
     }
     cout<<"ENter the second coordinate"<<endl;
    for(int i=0;i<3;i++){
        cin>>v2[i];
    }
  }
void displayvector(){
    cout<<"First vector coordinate is:"<<endl;
    for(int i=0;i<3;i++)
    {
    cout<<v1[i]<<endl;
    
    }
    cout<<"second vector coordinate is:"<<endl;
    for(int i=0;i<3;i++){
        cout<<v2[i]<<endl;
    }}
    friend void display(Base b);
    };
    class Derived:public Base{
        public:
        void addvector()
        {
            for(int i=0;i<3;i++){
                sum[i]=v1[i]+v2[i];            }
        }
    };
    void display(Base b){
        cout<<"Resultant vector coordinate"<<endl;
    
    for(int i=0;i<3;i++){
        cout<<b.sum[i]<<endl;
    }
    }
    int main(){
        Derived d;
        d.getvector();
        d.displayvector();
        d.addvector();
        display(d);
        getch();
    }
    