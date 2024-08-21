// Final.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include "functions.h"
using namespace std;

string backend[10] = { "snake", "goldfish", "shark", "stingray", "human", "bear", "snail", "squid", "seahorse", "dolphine" };
string body[10] = { "snake", "goldfish", "shark", "stingray", "human", "bear", "snail", "squid", "seahorse", "dolphine" };
string head[10] = { "snake", "goldfish", "shark", "stingray", "human", "bear", "snail", "squid", "seahorse", "dolphine" };
const string fileName = "creatureName.txt";


// Get the size of the array
int arraySizeBack = sizeof(backend) / sizeof(backend[0]);
int arraySizeBody = sizeof(body) / sizeof(body[0]);
int arraySizeHead = sizeof(head) / sizeof(head[0]);
// Generate a random index
int randomIndexBack = rand() % arraySizeBack;
int randomIndexBody = rand() % arraySizeBack;
int randomIndexHead = rand() % arraySizeHead;


string creaturedesc = "The back end of a " + backend[randomIndexBack] + ", a body of a " + body[randomIndexBody] + " and a head of a " + head[randomIndexHead] + ". ";
string creature;
void writeFile() {
	ofstream outFile(fileName);

	if (outFile.is_open()) {

		outFile << creaturedesc << "\nName: " << creature << endl;

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
string first = "";
string secondC = "";
string secondD = "";
string name = "";

int main()
{
    srand(time(0));
    cout << creaturedesc;
    string play = "y";
    while (play == "y" || play == "Y") {

        cout << "Welcome to my game!\n";
        cout << "You are an underwater explorer, looking for unknown creatures beneath the sea!\nWhat would you like to be named captain?\n";
        cin >> name;
        cout << "Welcome to the submarine, Captain " << name << "!\n";
        while (first != "c" && first != "d") {
            cout << "We are now at 200 meters down, Where would you like to start first, \nthe cave (c) or open depth (d)?\n";
            cin >> first;

        }
        if (first == "c") {
            cout << "There might be hiding creatures down here in this cave, we gotta go slow... right captain?\n fast (f) or slow (s)\n";
            cin >> secondC;
            if (secondC == "f") {
                cout << "You have ran into a wall and broke your lights, you do not know how to get out.\nYOU LOSE.\n";
            }if (secondC == "s") {
                cout << "You have found a creature,\n" << creaturedesc << "\nit has not been discovered until now.\nWhat do you call the creature?\n";
                cin >> creature;
                cout << "You have now found your first " << creature << "!\nYOU WIN!\n";
            }
        }
        if (first == "d") {
            cout << "Its very dark down here, what does captain " << name << " do?\nFlashlight (f) or sonar (s)\n";
            cin >> secondD;
            if (secondD == "f") {
                cout << "You startle a nearby squid and it sprays ink on your window,\nunfortunately, you don't have window wipers.\nYOU LOSE.\n";
            }
            if (secondD == "s") {
                cout << "You use the sonar to detect any beings nearby and a night vision camera, \nyou see a glimpse of a creature.\n" << creaturedesc << "\nwhat do you call it?\n";
                cin >> creature;
                cout << "You have now found your first " << creature << "!\nYOU WIN!\n";
            }
        }
        writeFile();
        readFile();
        cout << "Would you like to play again?" << endl;
        cin >> play;
    }
    cout << "alright then, bye!";
}



