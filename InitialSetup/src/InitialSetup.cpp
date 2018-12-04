//============================================================================
// Name        : InitialSetup.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


double square(double x){
	return x*x;
}

void print_square(double x){
	cout << "the square of " << x << " is " << square(x) << endl;
}


int main() {
	cout << "!!!Hello World!!!" << endl;
	cout << "We must stand it until humans put their foot on mars!" << endl;

	cout << "Let's make a joke by swapping numbers." << endl;
    int first = 5, second = 10, temp;

    cout << "Before swapping." << endl;
    cout << "first = " << first << ", second = " << second << endl;

    temp = first;
    first = second;
    second = temp;

    cout << "After swapping." << endl;
    cout << "Now the first became = " << first << ", and the second becomes = " << second << endl;

    cout << "call the print square function " << endl;
    print_square(1.234);

	return 0;
}






