// 1.1 assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// comments: notes for developers, code will ignore.
// Mason Griffith
// This Code is in our second week
// 05/20/2024

#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
using namespace std;
const string fileName = "example.txt";
void writeFile();
void readFile();

void writeFile() {
	ofstream outFile(fileName);
	if (outFile.is_open()) {
		outFile << "This is a test file" << endl;
		outFile << "Writing some initial text" << endl;
		outFile.close();
		outFile << "file written successfully" << endl;
	}
	else {
		cout << "Error oppening file for writing" << endl;
	}
}

void readFile() {
	ifstream inFile(fileName);
	if (inFile.is_open()) {
		string Line;
		cout << "Reading file contents: " << endl;
		while (getline(inFile, Line)) {
			cout << Line << endl;
		}
		inFile.close();
		cout << "File read successfully" << endl;
	}
	else {
		cout << "Error opening ";
	}
}

//void welcome();
//int addition(int x, int y);
//int subtraction(int x, int y);
//int multiplication(int x, int y);
//double division(double x, double y);
//
//void welcome() {
//	cout << "Welcome to our calculator application." << endl;
//}
//
//int addition(int x, int y) {
//	int result = x + y;
//	cout << "We are going to perform addition." << endl;
//	cout << "The result of addition is " << result << endl;
//	return result;
//}
//int subtraction(int x, int y) {
//	int result = x - y;
//	cout << "We are going to perform subtraction." << endl;
//	cout << "The result of subtraction is " << result << endl;
//	return result;
//}
//int multiplication(int x, int y) {
//	int result = x * y;
//	cout << "We are going to perform multiplication." << endl;
//	cout << "The result of multiplication is " << result << endl;
//	return result;
//}
//double division(double x, double y) {
//	double result = x / y;
//	cout << "We are going to perform division." << endl;
//	cout << "The result of division is " << result << endl;
//	return result;
//}

int main() // main function
{
	writeFile();
	readFile();
	//string line;
	//ifstream infile("example.txt");
	//ofstream outfile("output.txt");
	//if (infile.is_open()) {
	//	if (outfile.is_open()) {
	//		while (getline(infile, line)) {
	//			cout << line << endl;
	//		}
	//		infile.close();
	//		outfile.close();
	//	}
	//	else cout << "Unable to open outfile" << endl;
	//}
	//else cout << "Unable to open infile";

	/*
 int x, y;
	double result;
	welcome();
	cout << "Please enter the first number: ";
	cin >> x;
	cout << "Please enter the second number: ";
	cin >> y;
	
	addition(x, y);
	
	subtraction(x, y);
	
	multiplication(x, y);

	division(x, y);

	cout << "\nThank you for using our app." << endl;*/
	
	/*const int rows = 3;
	const int cols = 3;
	int myArray[rows][cols];

	cout << "Enter elements for this 3*3 array: " << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << "Please enter an element: ";
			cin >> myArray[i][j];
		}
	}
	cout << "Elements of the 3*3 array: " << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j){
			cout << myArray[i][j];
		}
	}*/
	
	
	
	/*string str1 = "This is C language";
	string str2 = "java language";
	cout << "Before replacement, string is: " << str1 << '\n';
	str1.replace(8, 1, str2,0,4);
	cout << "After replacement, string is: " << str1 << '\n';
	return 0;*/
	
	
	//declare and initialize a string
	/*string myString = "Hello, welcome to UAT.";

	cout << "Original String: " << myString << endl;

	myString.append(" Enjoy your visit.");
	cout << "Original String after append: " << myString << endl;

	string subString = myString.substr(7, 7);
	cout << "Substring extracted using substr(): " << subString << endl;

	string anotherString = "Hello, welcome to UAT.";
	int result = myString.compare(anotherString);
	if (result == 0) {
		cout << "The strings are equal" << endl;
	}
	else if (result < 0) {
		cout << "myString is less than anotherString." << endl;
	}
	else {
		cout << "myString is greater than anotherString." << endl;
	}*/

	/*string myString = "Hello, welcome to UAT.";

	cout << "Original string: " << myString << endl;

	cout << "Length of the Original string is: " << myString.size() << endl;
	
	
	string substring = "welcome";
	int position = myString.find(substring);
		
	
	*/
	
	
	/*if (position < myString.size()) {
			cout << "Substring " << substring << " Found at position " << position << endl;
	}

		if (myString.empty()) {
			cout << "The string is empty" << endl;
		}
		else {
			cout << "The string is not empty" << endl;
		}
		myString.clear();
		if (myString.empty()) {
			cout << "The string is empty" << endl;
		}
		else {
			cout << "The string is not empty" << endl;
		}*/

	
	/*char choice;
	do {
		cout << "Logic" << endl;
		cout << "Would you like to play again? (y/n)";
		cin >> choice;
	} while (choice != 'y' && choice != 'n'); {
		cout << "Invalid Input, (y,n)";
		cin >> choice;
	}*/

	
	/*int i = 1;
	while (i <= 100) {
		cout << i << endl;
		i = i + 1;
	}*/


	//int day;
	//cout << "Please enter a number between 1-7: " << endl;
	//cin >> day;
	//switch (day) {
	//case 1:
	//	cout << "It's Monday, go to work.";
	//	break;
	//case 2:
	//	cout << "It's Tuesday, go to work.";
	//	break;
	//case 3:
	//	cout << "Wednesday";
	//	break;
	//case 4:
	//	cout << "Thursday";
	//	break;
	//case 5:
	//	cout << "Friday";
	//	break;
	//case 6:
	//	cout << "Saterday";
	//	break;
	//case 7:
	//	cout << "sunday";
	//	break;
	//default:
	//	cout << "Invalid Input";


	// }

	//string firstname, lastname;
	//// string lastname;
	//int age;
	//cout << "Please enter your first name: " << endl;
	//cin >> firstname;
	//cout << "Please enter your last name: " << endl;
	//cin >> lastname;
	//cout << "Please enter your age: " << endl;
	//cin >> age;
	//cout << "Your first name is: " << firstname<< " and your last name is: " << lastname << endl;
	//cout << "Your age is: " << age << endl;

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
