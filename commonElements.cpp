/*
* commonElements.cpp
*	created on August 5, 2019 
*	by Wendy Xiao 
*	Find the common elements of 2 int arrays 
*/ 
#include <iostream> 
#include <vector> 
using namespace std; 

void findCommonElements(int* argArr1, int* argArr2, int size1, int size2, vector<int> &results){
	for(int i = 0; i < size1; i++){
		for(int j = 0; j < size2; j++){
			if(argArr1[i] == argArr2[j])
				results.push_back(argArr1[i]); 
		}
	}	
}

int main(){
	int arr1[] = {1, 2, 3, 4}; 
	int arr2[] = {4, 5, 6}; 
	int sizeArr1 = sizeof(arr1) / sizeof(arr1[0]), sizeArr2 = sizeof(arr2) / sizeof(arr2[0]); 
	vector<int> final; 

	//find the matchy matchy elements 
	findCommonElements(arr1, arr2, sizeArr1, sizeArr2, final); 
	for(int i = 0; i < final.size(); i++)
		cout << final[i] << endl; 

	return 0; 
}