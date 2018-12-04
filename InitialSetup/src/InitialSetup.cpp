//============================================================================
// Name        : InitialSetup.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main() {

	double d1{2.3};
	int i = 2;
	d1 = d1 + i;
	// here we truncat back to integer
	i = d1*i;
	cout << "normal double number ..  " << d1<< endl;
	cout << "Just to demostrate a truncated number ..  " << i << endl;

	return 0;
}






