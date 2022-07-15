// Midterm Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void exit(bool v);

using namespace std;
int main()
{
    bool testing = true;
    while (testing)
    {
        int input;
        cout << "Hello, welcome to my multiple choice test." << "\nToday you will be answering 4 different, non biased, questions.";
        cout << "You can press 1. To take the test " << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "Please enter the number (1) to continue to the test: ";
        cin >> input;
        switch (input)
        {
        case 1:
            system("CLS");
            char q1;
            cout << "Question 1: " << "\nWhen was minecraft fully released?" << "\na) 2007" << "\tb) 2015" << "\nc) 2011" << "\td) 2017" << endl;
            cout << "--------------------------" << endl;
            cout << "Please enter your select: ";
            cin >> q1;
            system("CLS");
            char q2;
            cout << "Question 2: " << "\nWhat is the name of the final course of all 'Mario Kart' video games?" << "\na) Rainbow Road" << "\t\tb) Moo Moo Farm" << "\nc) Kalimari Desert" << "\td) Koopa Troopa Beach" << endl;
            cout << "--------------------------" << endl;
            cout << "Please enter your select: ";
            cin >> q2;
            system("CLS");
            char q3;
            cout << "Question 3: " << "\nWhich famous video game franchise is the game 'V-Bucks' from?" << "\na) Roblox" << "\tb) Minecraft" << "\nc) Among Us" << "\td) Fortnite" << endl;
            cout << "--------------------------" << endl;
            cout << "Please enter your select: ";
            cin >> q3;
            system("CLS");
            char q4;
            cout << "Question 4: " << "\nWhat is the name of the circular object used to collect Pokémon?" << "\na) A Baseball" << "\t\tb) A Poke Ball" << "\nc) A Spherical Stone" << "\td) A Marble " << endl;
            cout << "--------------------------" << endl;
            cout << "Please enter your select: ";
            cin >> q4;
            system("CLS");
            int t1;
            int t2;
            int t3;
            int t4;
            if (q1 == 'c')
            {
                t1 = +1;
            }
            else
            {
                t1 = 0;
            }
            if (q2 == 'a')
            {
                t2 = +1;
            }
            else
            {
                t2 = 0;
            }
            if (q3 == 'd')
            {
                t3 = +1;
            }
            else
            {
                t3 = 0;
            }
            if (q4 == 'b')
            {
                t4 = +1;
            }
            else
            {
                t4 = 0;
            }
            cout << "Congrats, you finished the test, now continue to see your score!" << endl;
            system("PAUSE");
            system("CLS");
            int test = t1 + t2 + t3 + t4;
            if (test == 4)
            {
                cout << "Great Job!!!" << "\nYou recieved a " << test << "/4" << endl;
                cout << "You got 100%!" << endl;
                system("PAUSE");
                system("CLS");
            }
            else if (test == 3)
            {
                cout << "Nice Try!" << "\nYou recieved a " << test << "/4" << endl;
                cout << "You got 75%, but it is better than a 0." << endl;
                system("PAUSE");
                system("CLS");
            }
            else if (test == 2)
            {
                cout << "Well, that didn't go well..." << "\nYou recieved a " << test << "/4" << endl;
                cout << "You got 50%, but just for you, ill let you slide this time." << endl;
                system("PAUSE");
                system("CLS");
            }
            else if (test == 1)
            {
                cout << "Yikes, you were only able to ge ONE???" << "\nYou recieved a " << test << "/4" << endl;
                cout << "You got 25%, I think you should just try again, but open your eyes this time lmao." << endl;
                system("PAUSE");
                system("CLS");
            }
            else
            {
                cout << "I don't know how to tell you this, but you shouldn't look, because this score even scared me..." << "\nYou recieved a " << test << "/4" << endl;
                cout << "You got 0%, Did you purposely try to fail this test or what man???" << endl;
                system("PAUSE");
                system("CLS");
            }
            break;
        }
    }
}
void exit(bool v)
{
    system("CLS");
    cout << "Have A Trash Day LOOOOSER!" << "\n" << "ps. i love you <3" << endl;
    system("PAUSE");
    v = false;
    _Exit(1);
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
