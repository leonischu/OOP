
#include <iostream>

using namespace std;

class SI{
    int time;
    float principle, rate;
    public:
        SI(){
            time = 0;
            principle = 0;
            rate = 0;
        }

        SI(int t, float p, float r = 8.0){
            time = t;
            principle = p;
            rate = r;
        }

        void display(){
            cout<<"Principle: "<<principle<<endl<<"Rate: "<<rate<<endl
            <<"Time: "<<time<<endl;
        }

        void calculate(){
            float si = (principle * time * rate) / 100;
            cout<<"The simple interest is: "<<si<<endl<<endl;
        }
};

int main(void){
    SI cus1(10, 10000.00), cus2(5, 9500.50), cus3(8, 150000.00);
    cus1.display();
    cus1.calculate();
    cus2.display();
    cus2.calculate();
    cus3.display();
    cus3.calculate();    
}