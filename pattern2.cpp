#include<iostream>
using namespace std;


int main(){
	for(int i=1; i < 6 ; i++){
		for(int j=0; j < i; j++){
			cout << "*" << " ";			
		}
		cout << endl;
	}
	cout << endl;
	
	for(int k=1; k < 6; k++){
		for(int l=6;l>k;l--){
			cout << "*" << " ";			
		}
		cout << endl;
	}
	cout << endl;
	
	int a1=0,a2=0;
	for(int c=1;c<6;c++){
			a2+=1;
		for(int d=0;d<c;d++){
			a1 += 1;
			cout<<a1<<" ";			
		}
		cout<<endl;
	}
	cout<<endl;
	
return 0;
}


