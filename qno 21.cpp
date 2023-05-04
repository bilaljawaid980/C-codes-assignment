#include<iostream>
#include<string>
#include<sstream>//sstream library use to convert string into int
using namespace std;
main(){
	
using namespace std;

    

	int num;
	stringstream ss;
	string str;
	cout << "ENTER YOUR STRING :"<<endl;
	cin >>str;
	ss<<str;//store string into ss variable using << operator
	ss>>num;//now assign store string into int variable using >> operator
	cout << "YOUR CONVERSION FROM STRING TO INT IS :"<<num<<endl;
}
	
	
