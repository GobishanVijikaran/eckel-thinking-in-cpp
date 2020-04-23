/*

Repeat Exercise 4 but move the functions so they are member functions of the struct.

*/

#include <iostream>

using namespace std; 

struct QuestionFive{
	int num; 
	void func(QuestionFive* ptr, int value); 
	void func_1(QuestionFive* ptr); 
};

void QuestionFive::func(QuestionFive* ptr, int value){
	num= value; 
}

void QuestionFive::func_1(QuestionFive* ptr){
	cout << "Data member value is: " << num << endl; 
}

int main(){
	QuestionFive q; 
	q.func(&q, 5); 
	q.func_1(&q); 
}
