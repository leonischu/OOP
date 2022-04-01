#include<iostream.h>
#include<conio.h>
class person{
	int age,tel;
	char Name,gender;
	public:
	void getdata();
	void displaydata();
};
void person::getdata(){
	cout<<"Enter the name:"<<endl;
	cin>>Name;
	cout<<"Enter the age:"<<endl;
	cin>>age;
	cout<<"Enter the gender:"<<endl;
	cin>>gender;
	cout<<"Enter the telephone"<<endl;
	cin>>tel;
	}
	void person::displaydata(){
		cout<<"The name is:"<<Name<<endl;
			cout<<"The age is:"<<age<<endl;
				cout<<"The gender is:"<<gender<<endl;
		cout<<"The tel is:"<<tel<<endl;
	}
	 main()
		{
		person p;
		p.getdata();
		p.displaydata();
		getch();
	}