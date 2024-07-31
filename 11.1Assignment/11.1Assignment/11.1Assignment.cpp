// 11.1Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Each type of bottle being passed down.
void minusbottle(int* bottles) {
	*bottles = *bottles - 1;
}
void secondshipping(int* refill) {
	*refill = *refill - 1;
}

int main()
{
	// Variables being made in main.
	int bottles;
	int refill;
	cout << "How many bottles are there?" << endl;
	cin >> bottles; // asks you how many bottles there are.
	while (bottles > 0) {
		// all IF ELSE statements are for grammarly correcting bottles to bottle when there is one.
		if (bottles == 1) {
			cout << "\n" << bottles << " bottle of beer on the wall." << endl;
			cout << bottles << " bottle of beer." << endl;
			cout << "Take one down, pass it around, " << endl;
			minusbottle(&bottles);
			cout << bottles << " bottles of beer on the wall." << endl;
		}
		else {
			cout << "\n" << bottles << " bottles of beer on the wall." << endl;
			cout << bottles << " bottles of beer." << endl;
			cout << "Take one down, pass it around, " << endl;
			minusbottle(&bottles);
			if (bottles == 1) {
				cout << bottles << " bottle of beer on the wall." << endl;
			}
			else {
				cout << bottles << " bottles of beer on the wall." << endl;
			}
		}
		//(number) bottles of beer on the wall.
		//(number) bottles of beer.
		//Take one down, pass it around,
		//(number - 1) bottles of beer on the wall.
	}
	cout << "\nWell, we ran out of beer, how many water do we have?" << endl;
	cin >> refill;
	while (refill > 0) {
		if (refill == 1) {
			cout << "\n" << refill << " bottle of water on the wall." << endl;
			cout << refill << " bottle of water." << endl;
			cout << "Take one down, pass it around, " << endl;
			secondshipping(&refill);
			cout << refill << " bottles of water on the wall." << endl;
		}
		else {
			cout << "\n" << refill << " bottles of water on the wall." << endl;
			cout << refill << " bottles of water." << endl;
			cout << "Take one down, pass it around, " << endl;
			secondshipping(&refill);
			if (refill == 1) {
				cout << refill << " bottle of water on the wall." << endl;
			}
			else {
				cout << refill << " bottles of water on the wall." << endl;
			}
		}
	}
}
