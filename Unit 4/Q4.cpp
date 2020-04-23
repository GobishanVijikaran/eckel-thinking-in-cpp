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
