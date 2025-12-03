#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from 
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	int num;
	cin >> num;
	while (num < 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> num;
	}
	if (num == 0) {
		cout << "0! = 1" << endl;
	}
	else {
		long factorial = 1;
		cout << num << "! = ";
		for (int i = 1; i <= num; i++) {
			cout << i << " ";
			if (i != num) {
				cout << "* ";
			}
			factorial *= i;
		}
		cout << "= " << factorial << endl;
	}
}
void arithmetic() {
	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at: ";
	int start;
	cin >> start;
	cout << "Enter a number to add each time: ";
	int add;
	cin >> add;
	cout << "Enter the number of elements in the series: ";
	int elements;
	cin >> elements;
	while (elements <= 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> elements;
	}
	int sum = 0;
	int current = start;
	for (int i = 0; i < elements; i++) {
		cout << current << " ";
		if (i != elements - 1) {
			cout << "+ ";
		}
		sum += current;
		current += add;
	}
	cout << "= " << sum << endl;
}
void geometric() {
	cout << "Geometric Series:" << endl;
	cout << "Enter a number to start at: ";
	int start;
	cin >> start;
	cout << "Enter a number to multiply each time: ";
	int mult;
	cin >> mult;
	cout << "Enter the number of elements in the series: ";
	int elements;
	cin >> elements;
	while (elements <= 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> elements;
	}
	int sum = 0;
	int current = start;
	for (int i = 0; i < elements; i++) {
		cout << current << " ";
		if (i != elements - 1) {
			cout << "* ";
		}
		sum += current;
		current *= mult;
	}
	cout << "= " << sum << endl;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}