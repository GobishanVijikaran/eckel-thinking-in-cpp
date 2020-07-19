#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <cassert>
#include <stdio.h>

using namespace std;

// Practice Question 3

class Yer{
	public:
		void f(int) const{cout << "this is f"; };
		void g(int) const{cout << "this is g"; };
		void h(int) const{cout << "this is h"; };
};
int main(){
	Yer a, *ptr = &a;

	void(Yer::*pmem)(int) const = &Yer::g;
	a.*pmem;
	ptr->*pmem;
}
