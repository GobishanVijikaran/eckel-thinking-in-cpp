/*

Makes a Stack that holds doubles and fills it with 25 values and then prints them to the console 

*/

#include <iostream>
#include <string>
#include "Stack.h"

using namespace std; 


int main(){
	Stack stack; 
	stack.initialize();  // initialize member function 
	
	for(int i=0; i < 25; i++){
		double* d = new double(i*0.1); // the push member function thats in a pointer as an argument so created a pointer of type double that points to double (using new keyword to allocate member to heap) 
		stack.push(d); 
	}
	
	double* d; 
	while( (d =(double*)stack.pop()) != 0){    // not sure what this is rn 
		cout << *d << endl; 
		delete d; 
	}
}
