// Converter++
// Take a unit and converts it into various other units of the same measurment
#include <iostream>
using namespace std;

// int menuChoice;

//pseudo functions
int lengthMenu();
int lengthChoice(int type);

int massMenu();

int displayMenu();
int typeMenus(int);
float toMeters(int, float);
float toInches(int, float);
float toMiles(int, float);
float toKilometers(int, float);

int main()
{
    int menuChoice;
    menuChoice = displayMenu();
    typeMenus(menuChoice);
    //lengthChoice(lengthMenu());
    //cout << "You chose " << menuChoice << endl;
    //typeMenus(menuChoice);

    return 0;
}

int displayMenu()
//Displays the main menu and ask the user to make a choice. Returns the value that was chosen
{
    int choice = 0;
    cout << "\t\t\n*~*Main Menu*~*" << endl;
    cout << "\t1. Length" << endl;
    cout << "\t2. Mass" << endl;
    cout << "\t3. Tempurature" << endl;
    cout << "Make a choice: " << endl;
    cin >> choice;
    return choice;
}

int typeMenus(int choice)
// This function will take the result from displayMenu() and branch off into the menus of different types of measurements
{
    if (choice == 1)
    {
        lengthChoice(lengthMenu());
    }
    else if(choice == 2)
    {
        massChoice(massMenu());
    }
    else if(choice == 3)
    {
        tempChoice(tempMenu());
    }

    else if(choice == 0)
    {
        cout << "\nGoodbye";
    }

    return 0;
}
int lengthMenu()
{
    // Ask the user what unit he is converting from and displays a list of units of lengths
    int choice; 
    cout << "\tWhat unit of length are you converting from?" << endl;
    cout << "\t1. Meters" << endl;
    cout << "\t2. Inches" << endl;
    cout << "\t3. Miles" << endl;
    cout << "\t4. Kilometers" << endl;
    cout << "\t0. Go back" << endl;

    cout << endl << "\tYou're choice: " ;
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
    else if (type == 3)
        lengthtype = "miles";
    else if (type == 4)
        lengthtype = "kilometers";
    cout << "\tHow many " << lengthtype << " would you like to convert?" << endl;
    cin >> amount;
    cout << "\n\t" << amount << " " << lengthtype << " is:" << endl;
    cout << "\t" << toMeters(type, amount) << " in meters" << endl;
    cout << "\t" << toInches(type, amount) << " in inches" << endl;
    cout << "\t" << toMiles(type, amount) << " in miles" << endl;
    cout << "\t" << toKilometers(type, amount) << " in kilometers" << endl;
    /*
    cout << toMiles(type, amount) << " in miles" << endl;
    cout << toKilometers(type, amount) << " in kilometers" << endl;
    */

    return 0;
}

float toMeters(int baseType, float baseAmount) // Done
{
    float metersToMeters = baseAmount,
          inchesToMeters = baseAmount * 0.0254,
          milesToMeters = baseAmount * 1609.344,
          kilometersToMeters = baseAmount * 1000,
          inMeters;

    if (baseType == 1)
    {
        inMeters = metersToMeters;
    }
    else if(baseType == 2)
    {
        inMeters = inchesToMeters;
    }
    else if(baseType == 3)
    {
        inMeters = milesToMeters;
    }
    else if(baseType == 4)
    {
        inMeters = kilometersToMeters;
    }

    return inMeters;
}

float toInches(int baseType, float baseAmount) // Done
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

    else if (baseType == 4) // If the type we are converting from is kilometers...
    inInches = kilometersToInches;

    return inInches;
}

float toMiles(int baseType, float baseAmount) // Done
{
    float metersToMiles = baseAmount * .00062137,
          inchesToMiles = baseAmount * .00001578,
          milesToMiles = baseAmount,
          kilometersToMiles = baseAmount * .62137119,
          inMiles;

    if (baseType == 1) // If the type we are converting from is meters...
    {
        inMiles = metersToMiles;
    }

    else if (baseType == 2) // If the type we are converting from is inches...
    {
        inMiles = inchesToMiles;
    }

    else if (baseType == 3) // If the type we are converting from is miles...
    {
        inMiles = milesToMiles;
    }

    else if (baseType == 4) // If the type we are converting from is kilometers...
    {
        inMiles = kilometersToMiles;
    }

    return inMiles;
}

float toKilometers(int baseType, float baseAmount) // Done
{
    float metersToKilometers = baseAmount * 0.001,
          inchesToKilometers = baseAmount * .0000254,
          milesToKilometers = baseAmount * 1.609344,
          kilometersToKilometers = baseAmount,
          inKilometers;
    
    if (baseType == 1)
    {
        inKilometers = metersToKilometers;
    }

    else if (baseType == 2)
    {
        inKilometers = inchesToKilometers;
    }

    else if (baseType == 3)
    {
        inKilometers = milesToKilometers;
    }

    else if (baseType == 4)
    {
        inKilometers = kilometersToKilometers;
    }

    return inKilometers;
}
