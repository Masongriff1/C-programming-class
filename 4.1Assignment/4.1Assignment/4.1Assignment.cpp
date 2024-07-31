// 4.1Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{	
	int guess;
	string playagain = "";

	while (playagain == "y" || playagain == "") {
		srand(time(0));
		string profArray[10] = { "Habib", "Pike", "Peters", "Crusoe", "Belanger", "Hreshchyshyn", "Williams", "Henry", "Rodriguez", "Murray" };
		int size = 10;
		for (int i = 0; i < size; ++i) {
			cout << profArray[i] << " ";
		}
		cout << "\nWho will be coming to your class? (choose by number)" << endl;
		int rightProf = rand() % 10 + 1;
		//	cout << rightProf << endl;
		cin >> guess;
		if (rightProf == guess) {
			cout << "You are correct!" << endl;
			Beep(1000, 1000);
		}
		else {
			cout << "You are wrong!" << endl;
		}
		cout << "Would you like to try again?" << endl;
		cin >> playagain;
	}
}