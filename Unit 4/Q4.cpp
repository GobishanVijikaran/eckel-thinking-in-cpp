/*

Create a struct with a single int data member, and two global functions, 
each of which takes a pointer to that struct. The first function has a second 
int argument and sets the struct’s int to the argument value, the second 
displays the int from the struct. 

*/

#include <iostream>
#include <string>

using namespace std; 

struct QuestionFour{
	int num; 
};

void first_func(QuestionFour* ptr, int change){
	ptr->num = change; 
}

void second_func(QuestionFour* ptr){
	cout << "Int value of Struct: " << ptr->num << endl; 
}

int main(){
	
	QuestionFour q;
	int value = 50; 
	first_func(&q, value); 
	second_func(&q); 
}
