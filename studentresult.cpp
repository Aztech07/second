#include<stdio.h>          
#include<conio.h>
#include<iostream>
using namespace std;

class SectionA{
int oops_marks,ds_marks,de_marks;
void getdata(){
	cout<<"Enter OOPS, DS, DE marks: "<<endl;					
	cin>>oops_marks>>ds_marks>>de_marks;
	}
	float percentageA=(oops_marks+ds_marks+de_marks)/300;
	
public:
	float resultA();																	
	
protected:
	void display(){		
	cout<<"percentage is "<<percentageA<<" %"<<endl;

	}
};
	
float SectionA::resultA(){
	bool ispassed=true;
	if(percentageA<40){
		ispassed=false;
	return ispassed;
	}
}


class SectionB{
	int oops_marks,ds_marks,de_marks; 
	void getdata(){
	cout<<"Enter OOPS, DS, DE marks: "<<endl;
	cin>>oops_marks>>ds_marks>>de_marks;
	}
	float percentageB=(oops_marks+ds_marks+de_marks)/300;
	
protected:
	void display(){
	cout<<"percentage is "<<percentageB<<" %"<<endl;
	
	}
	float resultB(){
		bool ispassed=true;
		if(percentageB<40){
		ispassed=false;
return ispassed;
		}
	}
};

class Department:protected SectionA,protected SectionB{
	float total_percentage;
	void dislay(){
		
	}
	friend int main();
};

int main(){
	SectionA SA;
	SA.getdata();
	SectionB SB;
	SB.getdata();
	Department p;
	p.total_percentage;
return 0;	
}

