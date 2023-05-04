//QUESTION NO 10:
#include<iostream>
using namespace std;
main(){
	int num1,num2;
	cout << "ENTER NUMBER1 TO SWAP TWO NUMBERS :"<<endl;
	cin >>num1;
	cout << "ENTER NUMBER2 TO SWAP TWO NUMBERS :"<<endl;
	cin >>num2;
	num1=num1 +num2;
	num2=num1 - num2;
	num1=num1 -num2;
	cout <<"\t"<<"AFTER SWAPPING "<<endl<<endl << " num1="<< num1<<"\t"<<"num2="<<num2<<endl;
	}

