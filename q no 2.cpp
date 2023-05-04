//QUESTION NO:02
#include<iostream>
using namespace std;
main(){
	int n,num,digit,rev=0;
	cout <<"Enter a number to check if its palindrome number or not :"<<endl;
	cin >> num;
	n=num;
	
	while(num!=0){
		digit=num%10;
		rev=(rev * 10) + digit;
		num=num/10;
	}
	if(n==rev){
		cout << "ITS PALINDROME "<<endl;
	}
	else{
		cout <<"Not a palindrome number"<<endl;
	}
}
