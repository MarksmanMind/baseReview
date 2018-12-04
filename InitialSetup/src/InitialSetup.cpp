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

	return 0;
}
