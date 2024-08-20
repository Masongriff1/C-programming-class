// fileIO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <stdlib.h>
using namespace std;


const string fileName = "example.txt";
string userInput() {
	string text;
	cin >> text;
	return text;
}
void writeFile() {
	ofstream outFile(fileName);
	
	if (outFile.is_open()) {
		
		outFile << "Hello World!" << endl;

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
int main()
{
	writeFile();
	readFile();
}
