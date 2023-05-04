#include<iostream>
using namespace std;
int addDigit(int n);
int main(){
	int num,result;
	cout << "ENTER ANY NUMBERS TO DISPLAY THE SUM OF ITS DIGITS :"<<endl;
	cin >> num;
	result=addDigit(num);
	cout << "SUM OF DIGITS IS :"<<result;
	
}
int addDigit(int n){
	if(n<=1){
		return 0;
	}
	return(n % 10) +addDigit(n /10);
}
