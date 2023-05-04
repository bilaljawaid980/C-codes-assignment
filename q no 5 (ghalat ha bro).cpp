#include<iostream>
using namespace std;
int fib(int n);
main(){
	
	int n;
	int result;
	cout << "ENTER A NUMBER TO GET FIBONICCI SERIES :"<<endl;
	cin >> n;
	result=fib(n);
	cout <<"FIBNOCCI SERIES IS :"<<result<<endl;
}
int fib(int n){
	if(n==0||n==1){
		return n;
	}
	else{
		return fib(n-1)+(n-2);
	}
}
