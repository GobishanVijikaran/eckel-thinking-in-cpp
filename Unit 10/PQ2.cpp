#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <cassert>
#include <stdio.h>

using namespace std;

// Practice Question 2

class OO{
	int i;
	public:
		OO(int ii) : i(ii){}
		const OO operator+ (const OO& rv) const{
			cout << "operator+" << endl;
			return (i + rv.i);
		}
		OO& operator+= (const OO& rv) {
			cout << "operator+=" << endl;
			i -= rv.i; // changes the += to -= to see the difference
			cout << i;
			return *this;
		}
};

int main(){
	int i =1, j=2, k=3;
	k += i + j; // result is 6
	cout << k << endl;
	OO ii(1), jj(2), kk(5);
	kk += ii + jj; //result should be 8 if it is a built in type. but it is 2 because of operator overload

}
