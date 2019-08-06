/*
* once.cpp
*   created on August 5, 2019
*   by Wendy Xiao
*   find the only element in an array that only occurs once (unsorted)
*/
#include <iostream>
using namespace std;

struct element{
	int value; 
	bool moreThanOnce = false; 
}; 

int whichSingleElement(int* arr, int arrSize){
	element eArr[arrSize]; 
	int eCount = 1, create = 0, final = -1; 

	//first, organize them into elements 
	eArr[0].value = arr[0]; 
	for(int i = 1; i < arrSize; i++){ //travese through the array
		create = 0; 
		for(int j = 0; j < eCount; j++){ //search list to see if element exist
			if(arr[i] == eArr[j].value){
				eArr[j].moreThanOnce = true; 
				create = 1;
			}
		}
		if(create == 0){ //if it doesn't create the element  
			eArr[eCount].value = arr[i]; 
			eCount++; 
		}
	}

	for(int i = 0; i < eCount ;i++){ //see which one only exists once 
		if(!eArr[i].moreThanOnce)
			final = eArr[i].value; 
	}


	return final; //soln should be 

}

int main(){
    int arr[] = {7, 1, 2, 7, 5, 2, 4, 3, 3, 4, 4, 1};
    int arrSize = sizeof(arr) / sizeof(arr[0]); 

    cout << whichSingleElement(arr, arrSize) << endl; 

    return 0;
}
