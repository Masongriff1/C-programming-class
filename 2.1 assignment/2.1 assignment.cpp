// 2.1 assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    string play = "y";
    while (play == "y" || play == "Y") {
        string first = "";
        string secondC = "";
        string secondD = "";
        string name = "";
        string Cname = "";
        string Dname = "";
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
                cout << "You have found a small slimy creature with tentacles growing out its back, \nit has not been discovered until now.\nWhat do you call the creature?\n";
                cin >> Cname;
                cout << "You have now found your first " << Cname << "!\nYOU WIN!\n";
            }
        }
        if (first == "d") {
            cout << "Its very dark down here, what does captain " << name << " do?\nFlashlight (f) or sonar (s)\n";
            cin >> secondD;
            if (secondD == "f") {
                cout << "You startle a nearby squid and it sprays ink on your window,\nunfortunately, you don't have window wipers.\nYOU LOSE.\n";
            }
            if (secondD == "s") {
                cout << "You use the sonar to detect any beings nearby and a night vision camera, \nyou see a glimpse of a bear-like creature with a fish tail and big black eyes, \nwhat do you call it?\n";
                cin >> Dname;
                cout << "You have now found your first " << Dname << "!\nYOU WIN!\n";
            }
        }
        
        cout << "Would you like to play again?" << endl;
        cin >> play;
    }
    cout << "alright then, bye!";
}


