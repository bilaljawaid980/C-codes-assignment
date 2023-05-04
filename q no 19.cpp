#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int st(string s,char c);

int main(){
	string str;
	char c;
	cout << "ENTER A STRING "<<endl;
	cin >>str;
	cout << "ENTER A CHAR";
	cin >> c;
	int len=strlen(str);
cout << st(str,c,len);
	
}
int st(string s,char c,int l){
	int ch=0;
	for(int i=0;i<=l;i++){
		if(s[i]==c){
			ch++;
		}
	}
	return ch;
}
