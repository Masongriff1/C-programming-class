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
#include <vector>
#include <list>
#include <algorithm>
#include "1.1 assignment.h"
using namespace std;
struct Student {
	string name;
	int age;
	int studentId;
	float gpa;
	void display() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Student ID: " << studentId << endl;
		cout << "GPA: " << gpa << endl;
	}
};


//const string fileName = "example.txt";
//void writeFile();
//void readFile();
//
//// function that takes a pointer to an integer as an argument
//void modifyValue(int* ptr) {
//	//Modify the value pointer to by the pointer
//	*ptr = 100;
//}
//
//void modifyValue(int& ref) {
//	ref = 42;
//}
//void swap(int& x, int& y) {
//	int temp = x;
//	x = y;
//	y = temp;
//}
//int& getElement(int arr[], int index) {
//	return arr[index];
//}
//void printConstReference(const int& ref) {
//	cout << "Value: " << endl;
//}
//void writeFile() {
//	ofstream outFile(fileName);
//	if (outFile.is_open()) {
//		outFile << "This is a test file" << endl;
//		outFile << "Writing some initial text" << endl;
//		outFile.close();
//		outFile << "file written successfully" << endl;
//	}
//	else {
//		cout << "Error oppening file for writing" << endl;
//	}
//}
//void readFile() {
//	ifstream inFile(fileName);
//	if (inFile.is_open()) {
//		string Line;
//		cout << "Reading file contents: " << endl;
//		while (getline(inFile, Line)) {
//			cout << Line << endl;
//		}
//		inFile.close();
//		cout << "File read successfully" << endl;
//	}
//	else {
//		cout << "Error opening ";
//	}
//}
////void welcome();
////int addition(int x, int y);
////int subtraction(int x, int y);
////int multiplication(int x, int y);
////double division(double x, double y);
////
////void welcome() {
////	cout << "Welcome to our calculator application." << endl;
////}
////
////int addition(int x, int y) {
////	int result = x + y;
////	cout << "We are going to perform addition." << endl;
////	cout << "The result of addition is " << result << endl;
////	return result;
////}
////int subtraction(int x, int y) {
////	int result = x - y;
////	cout << "We are going to perform subtraction." << endl;
////	cout << "The result of subtraction is " << result << endl;
////	return result;
////}
////int multiplication(int x, int y) {
////	int result = x * y;
////	cout << "We are going to perform multiplication." << endl;
////	cout << "The result of multiplication is " << result << endl;
////	return result;
////}
////double division(double x, double y) {
////	double result = x / y;
////	cout << "We are going to perform division." << endl;
////	cout << "The result of division is " << result << endl;
////	return result;
////}

int main() // main function
{
	// create an instance of the struct
	Student student1;
	// assign values to struct member
	student1.name = "Alice";
	student1.age = 20;
	student1.studentId = 12345;
	student1.gpa = 3.7;

	// access and display the struct member
	cout << "Student 1 information: " << endl;
	student1.display();


	Student student2 = { "Mike", 22, 2345, 2.55 };
	// access and display the struct member
	cout << "Student 2 information: " << endl;
	student2.display();

	// Modify a struct member
	student1.age = 21;
	student1.gpa = 4.0;
	cout << "\n\nStudent 1 information after update: " << endl;
	student1.display();

	//int a = 5, b = 10;
	//cout << "Initial values - a: " << a << " - b: " << b << endl;
	//// call the values
	//int sum = add(a, b);
	//cout << "Sum: " << sum << endl;
	//int product = multiply(a, b);
	//cout << "Product: " << product << endl;


	//int x = 5, y = 10;
	//cout << "Initial values - x: " << x << " Initial value - y: " << y << endl;
	//
	//swapWithPointers(&x, &y);
	//cout << "After swap with pointers, value - x: " << x << " Value - y: " << y << endl;

	//swapWithReferences(x, y);
	//cout << "After swap with references, value - x: " << x << " Value - y: " << y << endl;
	//
	//int score = 7;
	//cout << "initial value of score is: " << score << endl;
	//// pass a pointer to the variable to the function
	//modifyValue(&score);
	////pritn the value fo variable score after the function call
	//cout << "\nMy score after modification is: " << score << endl;


	//int arr[5] = { 10, 20, 30, 40, 50 };
	////declare a pointer to an integer
	//int* ptr;
	////assigning the address of first element of the array to the pointer
	//ptr = arr; // = ptr = &arr[0]
	////print all array elements
	//cout << "Array elements using pointer: " << endl;
	//for (int i = 0; i < 5; ++i) {
	//	cout << *(ptr + i) << " ";
	//}
	//// modify all array elements using poitner
	//for (int i = 0; i < 5; ++i) {
	//	*(ptr + i) += 10; //alias to *(ptr + i) = *(ptr + i) + 10
	//}
	//cout << "\nModified Array elements are: " << endl;
	//for (int i = 0; i < 5; ++i) {
	//	cout << *(ptr + i) << " ";
	//}

	//int num = 10; // declare an integer veriable
	//int* ptr; // declare a pointer to an int
	//ptr = &num; // assign the address of the integer to the pointer
	//// int*ptr == &num;
	//cout << "Value of num: " << num << endl;
	//cout << "Address of num: " << &num << endl;
	//cout << "Value stored in ptr (Address of num): " << ptr << endl;
	//cout << "Value pointed to by ptr: " << *ptr << endl;
	////num = 1000; one way to update variable num
	//// the second way
	//*ptr = 1000;
	//cout << "New value of the num after modification: " << num << endl;


	//vector<int> vic; // a vector if datatype int
	//// adding elements to a vector of int
	//vic.push_back(10);
	//vic.push_back(20);
	//vic.push_back(30);
	//vic.push_back(40);
	//vic.push_back(50);
	//// print the victor elements
	//cout << "Vector elements after the addition: " << endl;
	//for (int i = 0; i < vic.size(); ++i) {
	//	cout << vic[i] << " ";
	//}
	//// delete an element from the vector
	//for (int i = 0; i < vic.size(); ++i) {
	//	if (vic[i] == 30) {
	//		vic.erase(vic.begin() + i);
	//		break;
	//	}
	//}
	////print the vector elements after deletion
	//cout << "\nVector elements after the deletion: " << endl;
	//for (int i = 0; i < vic.size(); ++i) {
	//	cout << vic[i] << " ";
	//}



	////using iterators with a vector
	//vector<int> vec = { 10,20,30,40,50 };
	////declare an iterator for the vector
	//vector<int>::iterator it;
	////traversing the vector using the iterator
	//cout << "Vector elements: " << endl;
	//for (it = vec.begin(); it != vec.end(); ++it) {
	//	cout << *it << " ";
	//}
	////modifying vector elements using iterator
	//for (it = vec.begin(); it != vec.end(); ++it) {
	//	*it += 10; // *it = *it + 10
	//}
	//cout << "\nVector elements after modify: " << endl;
	//for (it = vec.begin(); it != vec.end(); ++it) {
	//	cout << *it << " ";
	//}
	////using reverse iterator with the vector
	//cout << "\nVector elements in reverse: " << endl;
	//vector<int>::reverse_iterator rit;
	//for (rit = vec.rbegin(); rit != vec.rend(); ++rit) {
	//	cout << *rit << " ";
	//}
	//// using iterators with lists
	//list<string> strList = { "apple", "banana", "cherry", "blueberry" };
	////declare iterator for list
	//list<string>::iterator listIt;
	//cout << "\nList elements: " << endl;
	//for (listIt = strList.begin(); listIt != strList.end(); ++listIt) {
	//	cout << *listIt << " ";
	//}
	////modifying list elements using iterator
	//for (listIt = strList.begin(); listIt != strList.end(); ++listIt) {
	//	*listIt = "fruit";
	//}
	////traverse the modified list
	//cout << "\nList elements after Modify: " << endl;
	//for (listIt = strList.begin(); listIt != strList.end(); ++listIt) {
	//	cout << *listIt << " ";
	//}


	//int x = 10;
	//int y = 20;

	//int& refX = x;

	//cout << "Initial values: " << x << " Y= " << y << " refX= " << refX << endl;

	//refX = 15;
	//cout << "Initial values: " << x << " Y= " << y << " refX= " << refX << endl;

	//modifyValue(x);
	//cout << "After calling modifyValue(x): " << endl;
	//cout << "x= " << x << endl;

	//swap(x, y);
	//cout << "After swapping: " << endl;
	//cout << "x= " << x << " y= " << y << endl;
	//int arr[5] = { 1, 2, 3, 4, 5 };
	//int& refElement = getElement(arr, 2);
	//cout << "Initial value of arr[2]: " << refElement << endl;
	//refElement = 99;
	//cout << "Modified value of arr[2]: " << refElement << endl;
	//cout << "Array elements are: " << endl;
	//for (int i = 0; i < 5; ++i) {
	//	cout << arr[i] << " ";
	//}


		/*writeFile();
	readFile();*/
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
