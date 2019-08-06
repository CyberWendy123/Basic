/*
* ten.cpp 
*	created on August 5, 2029 
* 	by Wendy Xiao 
* 	goal: find paris in an integer array whose sum is equal to 10 
*	(bonus: do it in linear time)
*/ 
#include <iostream> 
using namespace std; 

int main(){

	int arr[] = {-11, -10, 0, 3, 5, -3, 13, 5, 10, 2, 6, 1, 12, -4, 8}; 
	int count; 

	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++){
		for(int j = 1; j < sizeof(arr)/sizeof(arr[0]); j++){
			if((arr[i]+arr[j]) == 10)
				count++; 
		}
	}
	cout << count/2 << endl; 

	//vs doing this in linear time - aka only having one array 

	return 0; 
}