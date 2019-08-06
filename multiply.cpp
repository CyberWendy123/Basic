/*
* multiply.cpp 
*	by Wendy Xiao 
* 	on August 6, 2019 
*	write a multiply function that multiples 2 integers without using * 
*/ 
#include <iostream> 
using namespace std; 

int multiply(int x, int y){
	if(y == 1)
		return x; 
	return multiply(x,y-1) + x; 
}

int main(){
	cout << multiply(4, 5) << endl; 
	return 0; 
}