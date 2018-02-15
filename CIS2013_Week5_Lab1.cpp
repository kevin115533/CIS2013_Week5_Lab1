#include <iostream>
using namespace std;
void add_numbers(int& x, int y) {
	x+=y;
}

int main() {
	int first, second;
	char stay;

	cout << "Enter first number: ";
	cin >> first;

	cout << "Enter second:";
	cin >> second;
	
	add_numbers(first, second);
	cout << "The first time calling add numbers is: " << first << endl;

	add_numbers(first, second);
	cout << "The second time calling add numbers is: " << first << endl;

	add_numbers(first, second);
	cout << "The third time calling add numbers is: " << first << endl;

	cin >> stay;
}