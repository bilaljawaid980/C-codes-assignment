#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	string str,c;
	cout << "ENTER A STRING"<<endl;
	cin >>str;
	cout << "ENTER ANY CHARACTER TO REMOVE FROM STRING"<<endl;
	cin >>c;
	cout << "INITIAL STRING IS :"<<str<<endl;
	str.erase(remove(str.begin(),str.end(),c),str.end());
	cout << "FINAL STRING AFTER REMOVING "<<c << "IS :"<<str;
}
	
