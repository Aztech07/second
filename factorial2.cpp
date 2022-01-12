#include<iostream>
using namespace std;

int main(){
	long int a, mul = 1;
	for(a = 13; a > 0; a--){
		mul *= a;
	}
	cout << mul;
	return 0;
}
