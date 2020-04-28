/*

Create a class that (redundantly) performs data member selection and a member function call using the this keyword. 

*/

#include <iostream>
#include <string>

using namespace std; 

class QuestionSix{
	public: 
		void changeValue(int x);
		void printStatement(); 
	private: 
		int value; 
}; 

void QuestionSix::changeValue(int x){
	this->value = x; 
}

void QuestionSix::printStatement(){
	cout << "Value is: " << this->value << endl;  
}

int main(){
	
	QuestionSix q; 
	q.changeValue(5); 
	q.printStatement(); 
}
