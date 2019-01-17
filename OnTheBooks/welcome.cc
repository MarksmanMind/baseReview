#include <iostream>
using namespace std;

int main() {
    cout << "Hello!!!" << endl;
    const int b = 4;
    /*
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
     */

    int space, rows;

    cout << "How Many Rows?: ";
    cin >> rows;

    for (int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for (space = 1; space <= rows - i; ++space) {
            cout << "  ";
        }

        while (k != 2 * i - 1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }

    //Arrays & ponters

    int array[5]; //declaration: Type name[numofelemens];

    array[0] = 105; //var[index];
    array[1] = 103;
    array[2] = 120;
    array[3] = 110;
    array[4] = 125;

    cout << "array [0] = " << array[0] << ", Mem. address: " << &array[0] << endl;
    cout << "array [1] = " << array[1] << ", Mem. address: " << &array[1] << endl;
    cout << "array [2] = " << array[2] << ", Mem. address: " << &array[2] << endl;
    cout << "array [3] = " << array[3] << ", Mem. address: " << &array[3] << endl;
    cout << "array [4] = " << array[4] << ", Mem. address: " << &array[4] << endl;

    //Multidimensional Arrays
    int matrix[5][4]; //declaration: Type name[vertical height][horizontal size]

    //filling the bidimensional array.
    auto num = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = num;
            num++;
        }
    }

    //and printing it as well.
    for (int i = 0; i < 5; i++) {
        cout << "\n";
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j];
        }
    }
    return 0;
}


