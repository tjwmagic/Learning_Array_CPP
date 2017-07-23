#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double arrayName[5] = { 0 };

	cout << "\nPlease enter value for arrayName 1: ";
	cin >> arrayName[0];

	cout << "\nPlease enter value for arrayName 2: ";
	cin >> arrayName[1];

	cout << "\nPlease enter value for arrayName 3: ";
	cin >> arrayName[2];

	cout << "\nPlease enter value for arrayName 4: ";
	cin >> arrayName[3];

	cout << "\nPlease enter value for arrayName 5: ";
	cin >> arrayName[4];

	cout << "\n\n\nARRAY REPORT OF arrayName\n";

	cout << arrayName[0] << endl;
	cout << arrayName[1] << endl;
	cout << arrayName[2] << endl;
	cout << arrayName[3] << endl;
	cout << arrayName[4] << endl;

	system("pause");
}