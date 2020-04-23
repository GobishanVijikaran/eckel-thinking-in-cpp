/*
Create a struct declaration with a single member function, then create a definition for that member function. 
Create an object of your new data type, and call the member function.
*/

#include <iostream>

using namespace std;

struct Test{
	void printStatement(); 
};

void Test::printStatement(){
	cout << "This is the single member function" << endl; 
}
	
int main(){
	Test test_object; 
	test_object.printStatement(); 
}
