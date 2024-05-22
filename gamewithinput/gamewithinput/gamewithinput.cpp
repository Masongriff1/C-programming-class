// gamewithinput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string name;
	int age;
	cout << "Please enter your name: " << endl;
	cin >> name;
//	if (name == ) {
//		cout << "please enter your name here: " << endl;
//		cin >> name;
//	}
	cout << "Please enter your age: " << endl;
	cin >> age;
	cout << "Hello, Captain " << name << ", your age is " << age << "." << endl;

	if (age > 90) {
		cout << "No retirement yet? Anyway, ready to set sail?" << endl;
	}
	else {
		cout << "Ready to set sail?" << endl;
	}

	int time = 22;
	if (time < 10) {
		cout << "Good Morning." << endl;
	}
	else if (time < 20) {
		cout << "Good day." << endl;
	}
	else {
		cout << "Good Evening." << endl;
	}
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
