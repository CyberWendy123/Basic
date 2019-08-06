/*
* fibonacci.cpp 
*	created on August 5, 2019 
*	by Wendy Xiao 
*	write fibonacci iteratively and recursively 
*	(bonus: use dynamic programming)
*/ 
#include <iostream> 
using namespace std; 

int findFibonacci(int); 

int main(){
	//begin with iteratively - repeat a sequence until a condition is met (aka loop)
	int nthTerm = 10; 
	int val1 = 0; 
	int val2 = 1; 
	for(int i = 0; i < (nthTerm-1); i++){
		int newVal = val1 + val2; 
		val1 = val2; 
		val2 = newVal; 
	}
	cout << nthTerm << "th Term: " << val2 << endl; 

	//recursively
	cout << "vs recursively: " <<findFibonacci(nthTerm) << endl; 

	return 0; 
}

int findFibonacci(int nArg){
	if(nArg == 0)
		return 0; 
	else if(nArg == 1)
		return 1; 
	else 
		return findFibonacci(nArg-2) + findFibonacci(nArg-1); 
}

/*
What is dynamic programming - mainly optimization over plain recurison 
example found online of dynmaic programming: linear 
	f[0] = 0; 
	f[1] = 1; 

	for(i = 2; i <= n; i++){
		f[i] = f[i-1] + f[i-2]; 
	}
	return f[n]; 
Idea: simply store the results of subproblems so that we do not have to 
recompute them when needed later. 
*/ 