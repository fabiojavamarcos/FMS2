/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// ContactManagementSystem2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Name.h"
#include "Equipment.h"
#include "Flight.h"

int main()
{
    Name name("Liskov", "Barbara", "Huberman");
    //cout << name << endl << endl;

    Equipment equipment("404 Ridgeway Dr", "NC", "27403");
    //cout << address << endl << endl;

    Flight flight(name, equipment, "336-274-3344");
    //cout << contact << endl;
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
