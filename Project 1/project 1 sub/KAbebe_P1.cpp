/*
 * Class: CMSC140 CRN 30414
 * Instructor:Charles Naegeli
 * Project<number> Project 1
 * Description: The Department plans to purchase a humanoid robot.
				The Chairman would like you to write a program to show a
				greeting script the robot can use later. Your task is to build the prototype.
 * Due Date: 02/20/2023
 * I pledge that I have completed the programming assignment independently.
 *I have not copied the code from a student or any source.
 *I have not given my code to any student.
 Print your Name here: Kenawak Abebe
*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
	const string robot_name = "Nao";//declaring all variables and constants used
	const string Programmer_name = "Kenawak Abebe";
	const string Due_Date = "02/20/2023";
	const int assignmentNumber = 1;
	const int days_of_months = 30;
    int dogAge = 7;
	const int goldfishYear = 5;
	string visitorName;
	int userAge;
	int months;
	int days;
	int hours;
	int minutes;
	int seconds;
	int goldfishAge;
	int numberOne;
	int numberTwo;
	int result1;
	int result2;
	double result3;

	cout << "**************** Robot Prototype Scripting ********************" << endl; // greet user and prompt for name
	cout << "Hello, welcome to Montgomery College! My name is " << robot_name << ".May I have your name ? " << endl;

	getline(cin, visitorName);//get users name

	cout << "Nice to have you with us today, " << visitorName << "!" << endl //display username and prompt for user age
		<< "Let me impress you with a small game." << endl
		<< "Give me the age of an important person or a pet to you." << endl
		<< "Please give me only a number:" << endl;

	cin >> userAge;// get user age

	cout << endl << "You have entered " // verify user age and show age in human years 
		<< userAge << "." << endl
		<< "If this is for a person, the age can be expressed as :" << endl
		<< userAge << " years" << endl;

	months = userAge * 12; //convert user age into months
	days = months * days_of_months; //convert user age into days
	hours = months * days; //convert user age into hours
	minutes = hours * 60; //convert user age into minutes
	seconds = minutes * 60; //convert user age into seconds
	dogAge = userAge * dogAge; //convert user age into dog age
	goldfishAge = userAge * goldfishYear; //convert user age into goldfish age


	cout << " or " << months << " months." << endl // display converted ages
		<< " or " << days << " days." << endl
		<< " or " << hours << " hours." << endl
		<< " or " << minutes << " minutes." << endl
		<< " or " << seconds << " seconds." << endl;

	cout << " If this is for a dog, it is " << dogAge
		<< " years old in human age." << endl
		<< " If this is for a gold fish, it is " << goldfishAge
		<< " years old in human age." << endl << endl
		<< "Let's play another game, " << visitorName //propmt user for two numbers
		<< ".Give me a whole number." << endl;

	cin >> numberOne; // get first number

	cout  << "Very well. Give me another whole number." << endl;

	cin >> numberTwo;// get second numner

	result1 = numberOne + numberTwo; //calculate result for addition
	result2 = numberOne / numberTwo; // calculate result for division in int data type
	result3 = static_cast<double>(numberOne) / (numberTwo);// type cast division result into double data type

	cout << "Using the operator '+' in C++, the result of " // display result for addition
		<< numberOne << " + " << numberTwo << " is " << result1 << "." << endl
		<< "Using the operator '/', the result of " << numberOne  // display result for division in int data type
		<< " / " << numberTwo << " is " << result2 << endl
		<< "however, the result of " << numberOne << ".00 / " // display result for double data type
		<< numberTwo << ".00 is about " << result3 << "." << endl;

	cout << endl <<"Thank you for testing my program!! \n" // display programmer and project information
		<< "PROGRAMMER: " << Programmer_name << endl
		<< "CMSC140 Common Project " << assignmentNumber << endl
		<< "Due Date :" << Due_Date << endl << endl;

	return 0;
}
