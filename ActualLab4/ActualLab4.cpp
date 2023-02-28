// ActualLab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
	int n;
	long factorialnum = 1;
	cout << "Enter a number: ";
	cin >> n;

	if (n > 0) {
		cout << " !" << n << " = ";
		for (int i = 1; i <= n; ++i) {
			factorialnum *= i;
			printf(" %d ", i);
			printf("*");
		}
		cout << " = " << factorialnum;
	
	}
	else {
		cout << "Nice try, please enter a Positive number...";
		factorial();
	}
}
void arithmetic() {
	int a, d, num, value;
	int total = 0;
	cout << "Enter a number to start: ";
	cin >> a;
	cout << "Enter a number to add each time: ";
	cin >> d;
	cout << "Enter the number of time you want it to be added: ";
	cin >> num;

	if (num < 1)
	{
		for (int n = num; num >= n; n--)
		{
			if (n == 0)
			{
				total = a;
				cout << a << " + ";
				value = a + d;
			}
			else if (n == (num - 1))
			{
				total = total + value;
				cout << value << " = " << total << endl;
			}
			else
			{
				total = total + value;
				cout << value << " + ";
				value = value + d;
			}
		}
	}

	for (int count(0); num > count; count++)
	{
		if (count == 0)
		{
			total = a;
			cout << a << " + ";
			value = a + d;
		}
		else if (count == (num - 1))
		{
			total = total + value;
			cout << value << " = " << total << endl;
		}
		else
		{
			total = total + value;
			cout << value << " + ";
			value = value + d;
		}
	}
}
void geometric() {
	int a, d, Num_Ele, Num;
	int Sum = 0;
	cout << "Enter a number to start: ";
	cin >> a;
	cout << "Enter a number to add each time: ";
	cin >> d;
	cout << "Enter the number of time you want it to be added: ";
	cin >> Num_Ele;

	if (Num_Ele < 1)
	{
		while (Num_Ele < 1)
		{
			cout << "A number can only be added a positive amount of times, please enter a POSITIVE number";
			cin >> Num_Ele;
		}
	}

	for (int count(0); Num_Ele > count; count++)
	{
		if (count == 0)
		{
			Sum = a;
			cout << a << " * ";
			Num = a * d;
		}
		else if (count == (Num_Ele - 1))
		{
			Sum = Sum + Num;
			cout << Num << " = " << Sum << endl;
		}
		else
		{
			Sum = Sum + Num;
			cout << Num << " * ";
			Num = Num * d;
		}
	}
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
