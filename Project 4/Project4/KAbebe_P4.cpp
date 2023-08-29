/*
 * Class: CMSC140 CRN 30414
 * Instructor:Charles Naegeli
 * Project<number> Project 4
 * Description: Write a program that calculates the average number of days a company's employees are
                absent during the year and outputs a report on a file named "employeeAbsences.txt".  
 * Due Date: 04/17/2023
 *I pledge that I have completed the programming assignment independently.
 *I have not copied the code from a student or any source.
 *I have not given my code to any student.
 Print your Name here: Kenawak Abebe
*/


#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//prototype functions
int getNumOfEmployees();
int getTotalDaysAbsent(int x);
double calculateAvgDaysAbsent(int y, int z);

//create file
ofstream outFile;
int main()
{
    //define constants
  const string programmerName = "Kenawak Abebe";
  const string dueDate = "04/17/2023";
  const int assignmentNumber = 2;

  //open file and write header for file
  outFile.open("employeeAbsences.txt");
  outFile << "Empolyee Absence Report" << endl;

  //call functions
  int numOfEmployees = getNumOfEmployees();
  int totalabsentdays = getTotalDaysAbsent(numOfEmployees);
  int absentDays = totalabsentdays;
  double calculatedAbsentDays = calculateAvgDaysAbsent(numOfEmployees, absentDays);

  //display programmer name
  cout << "Programmer: " << programmerName;

  //write user information information and programmer data into file 
  outFile <<endl << "The " << numOfEmployees << " employees were absent a total of " << absentDays << " days."
    << endl << "The average number of days absent is " << fixed<<setprecision(1)<< calculatedAbsentDays << " days." << endl << endl
    << "Class: CMSC140 CRN 30414" << endl << "Assignment: Project " << assignmentNumber << endl
    << "programmer: " << programmerName << endl << "Due Date: " << dueDate << endl << endl;
  outFile.close();

}

//define function getNumOfEmployees
int getNumOfEmployees()
{
  int numOfEmployees;

  cout << "Calculate the average number of days a company's employees are absent" << endl
    << endl<< "Please enter number of employees in the company:";
  cin >> numOfEmployees;
  
  //input validation
  while (numOfEmployees < 1)
  {
    cout << "Number of employees has to be greater than 0. Please re-enter number of employees:";
    cin >> numOfEmployees;
  }

  return numOfEmployees;
}

//define function
int getTotalDaysAbsent(int x)
{
  //declare and define variables
  int id;
  int daysAbsent;
  int totalAbsentDays = 0;
  int i = 0;

  //create while loop to get input from user
  while(i< x)
  {
    cout << "Enter an employee ID:";
    cin >> id;
    outFile << id << setw(7);

    cout << "Enter the number of days this employee was absent:";
    cin >> daysAbsent;
    
    //input validation
    while (daysAbsent < 0 || daysAbsent>365)
    {
      cout<<"The number of days must not be negative or greater than 365!!"<<endl
        << "Please re-enter the number of days this employee was absent:";
      cin >> daysAbsent;

    }
    outFile << daysAbsent<< endl;

    totalAbsentDays+= daysAbsent;
    i++;

  }

  return totalAbsentDays;
}

//define function calculateAvgDaysAbsent
double calculateAvgDaysAbsent(int y, int z)
{
  double avgDaysAbsent = static_cast<double>(z) / y;
  return avgDaysAbsent;

}