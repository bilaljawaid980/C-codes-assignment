#include<iostream>
using namespace std;
main(){

	int arr[6] = {1,2,3,4,5,6};
	int	max1 = arr[0];
	int	max2 = max1;
		
	for(int i = 0; i < 6; i++){
		int x = arr[i];
		if(x > max1){
			max1 = x;
		}
	}
	
	for(int i = 0; i < 6; i++){
		int x = arr[i];
		
		if((x > max2) && (x < max1)){
			max2 = x;
		}
	}
	

	cout << "Max 1: " << max1 << endl;
	cout << "Max 2: " << max2;
	
}
