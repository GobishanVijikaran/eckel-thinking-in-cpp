/**
Write a function that takes a char* argument. Using new, dynamically allocate
an array of char that is the size of the char array that’s passed to the function.
Using array indexing, copy the characters from the argument to the dynamically allocated
array (don’t forget the null terminator) and return the pointer to the copy.
In your main( ), test the function by passing a static quoted character array,
then take the result of that and pass it back into the function. Print both
strings and both pointers so you can see they are different storage. Using delete,
clean up all the dynamic storage.
**/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char* func(char* arg){
	int size = sizeof(arg); 
	char* ptr = new char[size];  
	
	for(int i=0; i<size; i++){
		*(ptr + i) = *(arg + i); 
	}
	
	return ptr; 
}

int main(){
	char* str = "hellooooo"; 
	char* str1 = func(str); 
	cout << str1; 
}


