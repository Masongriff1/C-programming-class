// 10.1Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int crimeAccount = 357698;
int coffeeAccount = 50;

void originBalance(int crimeAccount, int coffeeAccount) {
	cout << "The amount that the criminals have originally: " << crimeAccount << endl;
	cout << "The amount that the coffee shop has originally: " << coffeeAccount << endl;
}
void afterBalance(int crimeAccount, int coffeeAccount) {
	cout << "The amount that the criminals have AFTER the swap: " << crimeAccount << endl;
	cout << "The amount that the coffee shop has AFTER the swap: " << coffeeAccount << endl;
}
void swap(int& crimeAccount, int& coffeeAccount) {
	int temp = crimeAccount;
	crimeAccount = coffeeAccount;
	coffeeAccount = temp;
	cout << "THE SWAP HAS BEEN MADE" << endl;
}

int main()
{
	originBalance(crimeAccount, coffeeAccount); // The Initial Value of both balances BEFORE the swap

	swap(crimeAccount, coffeeAccount); // the swap of the two accounts

	afterBalance(crimeAccount, coffeeAccount); // The initial value of the coffee shop's balance AFTER the swap
}