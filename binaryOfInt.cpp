/*
* binaryOfInt.cpp 
*	by Wendy Xiao 
*	on August 6, 2019 (Tuesday)
*	write a function that prints out the binary form of an int 
*/ 
#include <iostream> 
using namespace std; 

int binaryForm(int nArg){
	if(nArg == 0 || nArg == 1)//base
		return nArg; 
	else if((nArg % 2) == 0) //if even 
		return 10 * binaryForm(nArg/2); 
	else //odd 
		return 10 * binaryForm(nArg/2) + 1; 
}

int main(){
	int number = 5; 

	cout << binaryForm(number) << endl; 

	return 0; 
}