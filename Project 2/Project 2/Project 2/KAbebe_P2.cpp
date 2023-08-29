/*
 * Class: CMSC140 CRN 30414
 * Instructor:Charles Naegeli
 * Project<number> Project 2
 * Description: There are two main systems for measuring distance, weight and temperature; the Imperial System of Measurement, and 
				the Metric System of Measurement.Most countries use the Metric System, which uses the measuring units such as 
				meters and grams and adds prefixes like kilo, milli and cent to count orders of magnitude. In the United States, 
				we use the older Imperial system, where things are measured in feet, inches, and pounds.

				Write a program that lets the user to convert from Metric to Imperial system.

 * Due Date: 03/06/2023
 * I pledge that I have completed the programming assignment independently.
 *I have not copied the code from a student or any source.
 *I have not given my code to any student.
 Print your Name here: Kenawak Abebe
*/







#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	// Declare and assign all variables and constants
	int choice;
	int tempCelsius;
	int tempFahrenheit;
	double distanceMile;
	double weightPound;
	double distanceKM;
	double weightKG;
	string countryName;

	const double mileConversionRate = 0.6;
	const double poundConversionRate = 2.2;
	const int  fahrenheitConstant1 = (9/5);
	const double fahrenheitConstant2 = 32;
	const string programmerName = "Kenawak Abebe";
	const string dueDate = "03/06/2023";
	const int assignmentNumber = 2;


	// Prompt user for country and assign input to variable
	
	cout << "Enter a country name: ";

	getline(cin,countryName);

	// Display menu for converter toolkit

	cout << endl << endl << endl 
		 << "Converter Toolkit \n"
		 << "-------------------- \n"
		 << "1. Temperature Converter \n"
		 << "2. Distance Converter \n"
		 << "3. Weight Converter \n"
		 << "4. Quit \n" << endl 
		 << "Enter your choice (1-4): ";

	// Get users choice for the tool
	
	cin >> choice;

	// Create switch statement for menu   

	switch (choice)
	{
	case 1: cout << endl << "Please enter Temprature in Celsius ( such as 24): ";
		    cin >> tempCelsius;
			break;

	case 2: cout << endl << "Please enter Distance in Kilometers ( such as 86.35): ";
		    cin >> distanceKM;
		    break;

	case 3: cout << endl << "Please enter Weight in Kilograms ( such as 99.6): ";
		    cin >> weightKG;
		    break;

	case 4: return 0;
		    break;

	default: cout << "You did not enter 1, 2, 3, 4 as your choice. Restart program and try again" << endl << endl;
		     return 0;
	}

	// Create if else statement to calculate input according to choice
	
	if (choice == 1)
	{
		tempFahrenheit = fahrenheitConstant1 * tempCelsius + fahrenheitConstant2;
		cout << "It is " << tempFahrenheit << " in Fahrenheit." << endl << endl;
	}
	else if (choice == 2)
	{
		// Create embedded if statement for input validation of distance converter

		if (distanceKM > 0)
		{
			distanceMile = distanceKM * mileConversionRate;
			cout << "It is " << fixed << setprecision(2) << distanceMile << " in Miles." << endl << endl;
		}
		else
			cout << "!!! Program does not convert negative distance !!!" << endl << endl;
	}
	else
	{
		// Create embedded if statement for input validation of weight converter

		if (weightKG > 0)
		{
			weightPound = weightKG * poundConversionRate;
			cout << "It is " << fixed << setprecision(1) << weightPound << " in Pounds." << endl << endl;
		}
		else
			cout << "!!! Program does not convert negative weight !!!" << endl << endl;

	}

	// Display user's country and programmer information  

	cout << countryName << " sounds fun!" << endl << endl << endl ;

	cout << endl << "Thank you for testing my program!! \n" 
		<< "PROGRAMMER: " << programmerName << endl
		<< "CMSC140 Common Project " << assignmentNumber << endl
		<< "Due Date :" << dueDate << endl << endl;


	return 0;
}