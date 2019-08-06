/*
* binarySearch.cpp
*	created on August 5, 2019 
*	by Wendy Xiao 
*	Implement binary search of a sorted array of integers 
*/ 
#include <iostream> 
using namespace std; 

bool binarySearch(int* arrArg, int x, int left, int right){ //this is a log n problem 
	if(left > right){	//where x is the value we are searching for 
		return false; 
	}
	int mid = (left + right)/2; 
	if(arrArg[mid] == x)
		return true; 
	else if(x < arrArg[mid]) 
		return binarySearch(arrArg, x, left, mid -1); 
	else
		return binarySearch(arrArg, x, mid + 1, right); 
}

int main(){
	//given this sorted array 
	int sortedArr[] = {0, 0, 0, 2, 4, 5, 7, 11, 12, 12, 14, 14, 15, 16, 17, 20, 21, 24, 26, 27, 29, 30, 32, 34, 35, 46, 48, 50}; 
	int arrSize = sizeof(sortedArr) / sizeof(sortedArr[0]) ;

	int search; 
	cout << "Enter a number you think is in our array: "; 
	cin >> search; 

	if(binarySearch(sortedArr, search, 0, arrSize)) //true == 1 
		cout << search << " exists" << endl; 
	else 
		cout << search << " does not exist" << endl; 

	return 0; 
}