// 1.1 assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// comments: notes for developers, code will ignore.
// Mason Griffith
// This Code is in our second week
// 05/20/2024

#include <iostream>
using namespace std;
int main() // main function
{
	string firstname, lastname;
	// string lastname;
	int age;
	cout << "Please enter your first name: " << endl;
	cin >> firstname;
	cout << "Please enter your last name: " << endl;
	cin >> lastname;
	cout << "Please enter your age: " << endl;
	cin >> age;
	cout << "Your first name is: " << firstname<< " and your last name is: " << lastname << endl;
	cout << "Your age is: " << age << endl;

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
