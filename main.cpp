/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Koby Montenegro
 */

#include <iostream>
#include "header.h"

using namespace std;

//Use to assign attributes to names
class name_value
{
    public:
        string name;
        int num;
};

int main()
{
    Vector<name_value> vectorOfNames;

    //Declare variables
    name_value tempNameNum;
    string tempName;
    int tempNum;
    bool sameName = false;

    //Tell the user how to input
    cout << "Enter a name and value (i.e. Name 1): ";
    cout << "When you are finished, enter 'Done -1'.\n";

    //Input and Function
    while(tempName != "Done" && tempNum != -1)
    {
        //Input happens here
        cin >> tempName >> tempNum;
        tempNameNum.name = tempName;
        tempNameNum.num = tempNum;

        //For loop to cycle through the names
        for (int i = 0; i<vectorOfNames.size(); i++)
        {
            //If names match, display an error
            if (vectorOfNames[i].name == tempName)
            {
                sameName = true;
            }
        }
        if (!sameName)
        {
            vectorOfNames.push_back(tempNameNum);
        }
        else
        {
            cout << "Sorry, you can't use the same name again.\n";
            sameName = false;
            //It will loop back after
        }
    }

    //Loop to display all names and numbers
    for (int i = 0; i<vectorOfNames.size(); i++)
    {
        cout << "Name: " << vectorOfNames[i].name << "\tNumber:" << vectorOfNames[i].num << "\n";
    }

    return 0;
}