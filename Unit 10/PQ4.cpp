#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <cassert>
#include <stdio.h>

using namespace std;

// Practice Question 4

int main(){
	int a =5;
	int* ptr = &a; //normal pointer
	*ptr = 10;  // dereferencing the pointer

	int b =0;
	int& c = b; // in
	cout << "b og: " << b << endl;
	c++;
	cout << "a: " << a << "\n" << "b:" <<b;
	f(1);
}
