//QUESTION NO 7:
#include<iostream>
using namespace std;
main(){
	int n,num,digit,rev=0;
	cout <<"Enter a number to check if its palindrome number or not :"<<endl;
	cin >> num;
	
	
	while(num!=0){
		digit=num%10;
		rev=(rev * 10) + digit;
		num=num/10;
	}
	cout << "REVERSE OF NUMBER IS :"<<rev<<endl;
}
