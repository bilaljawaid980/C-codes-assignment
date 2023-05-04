//QUESTION NO 11:
#include<iostream>
using namespace std;
main(){
	int num1,num2,num3;
	cout << "ENTER NUMBER 1 :"<<endl;
	cin >>num1;
	cout << "ENTER NUMBER 2 :"<<endl;
	cin >>num2;
	cout << "ENTER NUMBER 3 :"<<endl;
	cin >>num3;
	if(num1>num2&&num1>num3){
		cout << "NUMBER 1 IS GREATOR"<<endl;
	}
	
	else if(num2>num1&&num2>num3){
		cout << "NUMBER 2 IS GREATOR"<<endl;
	}
	else{
		cout << "NUMBER 3 IS GREATOR"<<endl;
	}
}
	
