// Challenge 2 Prog Fund.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>
int main()
{
    string name;
    string username;
    string clanTag;
    int points;

    cout << "============================" << endl;
    cout << " YOUR CHOSEN GAME PROFILE " << endl;
    cout << "============================" << endl;

    // Ask for the player's name
    cout << "\nWhat is your name? ";
    getline(cin, name);

    // Ask for game username
    cout << "What is your game username? ";
    getline(cin, username);

    // Ask for clan tag
    cout << "What is your clan tag? ";
    getline(cin, clanTag);

    // Ask for points
    cout << "How many points do you want? ";
    cin >> points;

    // Display player information
    cout << "\n============================" << endl;
    cout << "THIS IS YOUR PROFILE YOU MADE" << endl;
    cout << "============================" << endl;

    cout << "Your name is: " << name << endl;
    cout << "Your username is: " << username << endl;
    cout << "Your clan tag is: [" << clanTag << "]" << endl;
    cout << "Your requested points: " << points << endl;

    cout << "\nYou have now been selected for the role!" << endl;

    cout << "============================" << endl;

    return 0;

  
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
