#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <math.h>
#include <vector>

using namespace std;

// Question 10
class Simple{
	public:
		Simple(int num);
		int a;
};

int main(){
	Simple a; // no default constructor and only a constructor w/ arg so this object cannot be compiled
	Simple a(3);
}

