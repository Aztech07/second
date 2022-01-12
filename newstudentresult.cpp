#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

class SectionA{
	public:	
		string display(){
			string studentname1="nakul";
		return studentname1;
		}
};

class SectionB{
	public:
		string display(){
		    string studentname2="Sudhir";
		return studentname2;
		}
};

class Department:public SectionA,public SectionB{
	public:
		SectionA secA;
		float percentage,sum;
		int oops,ds,de;
		string student = secA.display();
		Department(){};
		Department(int oops,int ds,int de){
			sum=oops+ds+de;
//			cout<<endl<<sum;
			percentage=((sum)*100)/300;
//			cout<<endl<<percentage;
		}
			void display(){
			bool ispassed=true;
			
				if(percentage<40.0){
					ispassed=false;
			}
			if(ispassed==true){
				cout<<student<<" has passed with percentage: "<<percentage<<endl;
			}
			else
				cout<<student<<" has failed. "<<endl;
			}
};

int main(){
	
	Department D1(90,80,80);	
	D1.display();

//	SectionB SecB;
//	cout<<SecB.studentname<<" ";
	Department D2(40,30,47);
	D2.display();

return 0;
}

	



