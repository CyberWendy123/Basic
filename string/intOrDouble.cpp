/*
* intOrDouble.cpp 
*	by Wendy Xiao 
* 	August 6, 2019 
*	Determine if a string is an int or a double 
*/ 
#include <iostream> 
#include <string> 
#include <cstring> 
using namespace std; 

string isIntOrDouble(string value){
	//turn string into a char array
	int stringLen = value.length(); 

	char charArr[stringLen + 1]; 

	strcpy(charArr, value.c_str()); 
	for(int i = 0; i < stringLen; i++){
		if(charArr[i] == '.')
			return "double"; 
	}
	return "int"; 
}

int main(){
	string x1 = "5"; 
	string x2 = "4.5"; 

	cout << "This is a " << isIntOrDouble(x2) << endl; 

	return 0; 
}

/* What is the difference between int and double? 
	well, double is a floating point data type aka can have decimal
	and also takes up twice as much space as an int 
*/ 