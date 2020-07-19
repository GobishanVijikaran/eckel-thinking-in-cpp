#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <cassert>
#include <stdio.h>

using namespace std;

// Practice Question 1

int main(){
	int a = 10;
	int* ptr = &a;
	int* b;
	cout << "ptr before: " << ptr << endl;
	cout << "b before: " << b << endl;
	b = ptr;
	cout << "ptr after: " << ptr << endl;
	cout << "b after: " << b << endl;
	cout << *ptr << "yerrrr : " << *b << endl;
}
