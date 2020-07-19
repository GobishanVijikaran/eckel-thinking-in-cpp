#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <math.h>
#include <vector>

using namespace std;

// Question 7

int main(){
	const int size = 4;
	double arr[size] = {2.3, 5.2, 3.3};

	for(int i=0; i<sizeof(arr); i++){
		cout << arr[i] << endl;
	}

	cout << "==================================" << endl;
	// automatic counting
	double arr2[] = {1.2, 2.4, 4.6};
	for(int j=0; j<sizeof(arr2); j++){
		cout << arr2[j] << endl;
	}
}
