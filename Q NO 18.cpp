#include<iostream>
#include<string.h>
using namespace std;


int main(void) {
 
 char str[100] ;
 cout << "ENTER A STRING"<<endl;
 cin >> str;
 int len  = strlen(str);
 int flag;
 for(int i = 0; i < len; i++) {
  
     flag = 0; 
  
     for(int j = 0; j < len; j++) {
     
        if((str[i] == str[j]) && (i != j)) {
             flag = 1;
             break;
        }
     }
  
      if (flag == 0) {
          cout <<"First non-repeating character is "<<str[i];
          break;
      }
  
 }
 
 if (flag == 1) {
     cout<<"Didn't find any non-repeating character";
 }
 
  return 0;
}
