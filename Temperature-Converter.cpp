#include<iostream>
using namespace std;
// Defined Conversion Constants
const double celToFahMul = 9.0/5.0;
const double fahToCelMul = 5.0/9.0;
const int fahOffset = 32;
int main()
{
    int choice;
    double temp,converted;
    // Repeat until user chooses to exit
    while(true)
    {
        // Display menu and get user choice
        cout<<"\nTemperature Converter :\n";
        cout<<"1. Celsius to Fahrenheit\n";
        cout<<"2. Fahrenheit to Celsius\n";
        cout<<"3. Exit\n";
        cout<<"Enter your choice (1-3): ";
        cin>> choice;
        // Exit Condition
        if(choice == 3)
        {
            cout<<"Exiting Temperature Converter.\n";
            break;
        }

        // Celsius to Fahrenheit Conversion
        if(choice == 1)
        {
            cout<<"Enter temperature in Celsius: ";
            cin>> temp;
            converted = (temp * celToFahMul) + fahOffset;
            cout<< temp <<" C = "<< converted <<" F\n";
        }

        // Fahrenheit to Celsius Conversion
        else if(choice == 2)
        {
            cout<<"Enter temperature in Fahrenheit: ";
            cin>> temp;
            converted = (temp - fahOffset) * fahToCelMul;
            cout<< temp <<" F = "<< converted <<" C\n";
        }

        // Invalid Choice 
        else
        {
            cout<<"Invalid choice. Please try again.\n";
        }
    }
    return 0;
}