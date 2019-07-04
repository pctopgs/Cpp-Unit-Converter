// Converter++
// Take a unit and converts it into various other units of the same measurment
#include <iostream>
using namespace std;

// int menuChoice;

//pseudo functions
int lengthMenu();
int lengthChoice(int type);

//int displayMenu();
//int typeMenus(int);
float toInches(int, float);

int main()
{
    // menuChoice = displayMenu();
    lengthChoice(lengthMenu());
    //cout << "You chose " << menuChoice << endl;
    //typeMenus(menuChoice);

    return 0;
}
/*
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
*/
int lengthMenu()
{
    // Ask the user what unit he is converting from and displays a list of units of lengths
    int choice; 
    cout << "What unit of length are you converting from?" << endl;
    cout << "1. Meters" << endl;
    cout << "2. Inches" << endl;
    cout << "3. Miles" << endl;
    cout << "4. Kilometers" << endl;
    cout << "0. Go back" << endl;

    cout << endl << "You're choice: " ;
    cin >> choice;

    return choice;
}

int lengthChoice(int type)
// recieves the unit of length and ask the user to enter the amount of the unit.
{
    float amount; // the amount of the type to be converted from
    string lengthtype;
    if (type == 1)
        lengthtype = "meters";
    else if (type == 2)
        lengthtype = "inches";
    cout << "How many " << lengthtype << " would you like to convert?" << endl;
    cin >> amount;
    cout << "\n" << amount << " " << lengthtype << " is:" << endl;
    cout << toMeters(type, amount) << " in meters" << endl;
    cout << toInches(type, amount) << " in inches" << endl;    
    /*
    cout << toMiles(type, amount) << " in miles" << endl;
    cout << toKilometers(type, amount) << " in kilometers" << endl;
    */

    return 0;
}

float toMeters(int baseType, float baseAmount)
{
    float metersToMeters,
          inchesToMeters,
          milesToMeters,
          kilometersToMeters,
          inMeters;
}

float toInches(int baseType, float baseAmount)
{
    float metersToInches = baseAmount * 39.37,
          milesToInches = baseAmount * 63360,
          kilometersToInches = baseAmount * 39370.07,
          inchesToInches = baseAmount,
          inInches;
          
    if (baseType == 1) // If the type we are converting from is meters...
    {
        inInches = metersToInches;
        //cout << metersToInches << " in inches" << endl;
    }
    else if(baseType == 2) // If the type we are converting from is inches
    {
        inInches = inchesToInches;
    }

    else if(baseType == 3) // If the type we are converting from is miles...
    {
        inInches = milesToInches;
        cout << milesToInches << " inches" << endl;
    }

    else if (baseType == 4)
    inInches = kilometersToInches;

    return inInches;
}
