//question no 3
#include<iostream>
using namespace std;
int number,n,remainder,result;

main(){
	cout << "ENTER A NUMBER TO CHECK WHEATHER ITS ARMSTRONG OR NOT :"<<endl;
	cin >> number;
	n=number;
	while(n!=0){
		remainder=n%10;
		result=result+(remainder*remainder*remainder);
		n=n/10;
	}
	if(number==result){
		cout << "ITS AN ARMSTRONG NUMBER"<<endl;
	}
	else{
		cout <<  "ITS NOT AN ARMSTRONG NUMBER"<<endl;
	}
}
