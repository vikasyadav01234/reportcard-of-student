#include<iostream>
using namespace std;
class student{
	char name;
	int roll_num;
	float s1,s2,s3,s4,s5,ton,top;
	public:
		void input()
		{
			cout<<"Enter The Name Of Student:=";
			cin>>name;
			fflush(stdin);
			cout<<"Enter The Roll Number of The Student:=";
			cin>>roll_num;
			cout<<"Enter The Marks of Subject 1:=";
			cin>>s1;
			cout<<"Enter The Marks of Subject 2:=";
			cin>>s2;
			cout<<"Enter The Marks of Subject 3:=";
			cin>>s3;
			cout<<"Enter The Marks of Subject 4:=";
			cin>>s4;
			cout<<"Enter The Marks of Subject 5:=";
			cin>>s5;
		}
		void proc()
		{
			ton=s1+s2+s3+s4+s5;
			top=(ton/500)*100;
		}
		void output()
		{
			cout<<"Total Obtain Number By The Student:="<<ton<<endl;
			cout<<"Total Obtain Persentage By The Student:="<<top;
		}
};
int main()
{
	student vik;
	vik.input();
	vik.proc();
	vik.output();
	return 0;
}
