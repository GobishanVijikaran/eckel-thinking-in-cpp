// Chapter 6 Exercises

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <math.h>
#include <vector>

using namespace std;

// Question 1 and 2
class Simple{
	public:
		Simple();
		~Simple();
};

Simple::Simple(){
	cout << "Constructor Called..." << endl;
}

Simple::~Simple(){
	cout << "Destructor Called..." << endl;
}

int main(){
	Simple s;
}
