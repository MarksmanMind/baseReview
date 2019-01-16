#include <iostream>
using namespace std;


int main() {
	cout << "Hello!!!" << endl;
	const int b = 4;

	auto ai = 2;

	cout << ai+b << endl;

	cout << b << endl; //Prints the contents of the variable
	cout << &b <<endl; //Prints the address of the variable in the RAM memory. Tasty :9

	int side1 = 0, side2 = 0, side3 = 0, count = 0;
	cout << "Starting the triangle size measurement" << endl;
	cout << "for simplicity purpose, let's use only integer numbers" << endl;
	cout << "Type the size of the 1st side of the triangle" << endl;
	cin >> side1;
	cout << "Type the size of the 2nd side of the triangle" << endl;
	cin >> side2;
	cout << "Type the size of the 3rd side of the triangle" << endl;
	cin >> side3;
	cout << "Now, the software will calculate the type of the proposed triangle by checking the sides" << endl;

	//Feel the power of a reworked exercise. This new logic uses compare counter. Higher performance code than the previous version.
	if (side1 == side2)
		count++;
	if (side1 == side3)
		count++;
	if (side2 == side3)
		count++;
	switch (count){
	case 1:
		cout << "Isosceles" << endl;
		break;
	case 3:
		cout << "Equilateral" << endl;
		break;
	case 0:
		cout << "Scalene" << endl;
		break;
	default:
		cout << "The software didn't understood the input data." << endl;
	}
	return 0;
}


