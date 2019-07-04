// Converter++
// Take a unit and converts it into various other units of the same measurment
#include <iostream>
using namespace std;

int menuChoice;

//pseudo functions
int displayMenu();
int typeMenus(int);

int main()
{
    menuChoice = displayMenu();
    cout << "You chose " << menuChoice << endl;
    typeMenus(menuChoice);

    return 0;
}

int displayMenu()
//Displays the main menu and ask the user to make a choice. Returns the value that was chosen
{
    int choice = 0;
    cout << "\t\t*~*Main Menu*~*" << endl;
    cout << "\t1. Length" << endl;
    cout << "\t2. Weight" << endl;
    cout << "\t3. Mass" << endl;
    cout << "Make a choice: " << endl;
    cin >> choice;
    return choice;
}

int typeMenus(int choice)
// This function will take the result from displayMenu() and branch off into the menus of different types of measurements
{
    if choice = 
    return 0;
}

int lengthMenu()
// Ask the user what unit he is converting from and displays a list of units of lengths
{
    int choice; 
    cout << "What unit of length are you converting from?" << endl;
    cout << "1. Meters" << endl;
    cout << "2. Inches" << endl;
    cout << "3. Miles" << endl;
    cout << "4. Kilometer" << endl;
    cout << "0. Go back" << endl;

    cin >> choice;
    return choice;
}

int lengthConvert(lengthMenu)
// recieves the unit of length and ask the user to enter the amount of the unit
{

    return 0;
}

