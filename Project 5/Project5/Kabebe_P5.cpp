/*
 * Class: CMSC140 CRN 30414
 * Instructor:Charles Naegeli
 * Project<number> Project 5
 * Description: • Write a program that simulates a magic square using 3 one dimensional
                  parallel arrays of integer type. Using a two-dimensional array is not allowed in this Project.

 * Due Date: 05/04/2023
 * I pledge that I have completed the programming assignment independently.
 *I have not copied the code from a student or any source.
 *I have not given my code to any student.
 Print your Name here: Kenawak Abebe
*/
#include<iostream>
#include<iomanip>
using namespace std;

// Global constants
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number

// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);

int main()
{       // define variables and constants
        char choice;
        int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];
        bool magicSquare;
        const string programmerName = "Kenawak Abebe";
        const string dueDate = "05/04/2023";
        const int assignmentNumber = 5;
    do {
        // call functions
        fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
        showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
        magicSquare = isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

        if (magicSquare)
        {
            cout << endl << "This is a Lo Shu Magic square." << endl
                << "Do you want to try again?(Y/N): ";
            cin >> choice;
        }
        else
        {
            cout << endl << "This is not a Lo Shu Magic square." << endl
                << "Do you want to try again?(Y/N): ";
            cin >> choice;
        }
    } while (choice == 'Y' || choice == 'y');

    //display programmer information
    cout << endl << endl << "Thank you for testing my program!! \n"
        << "PROGRAMMER: " << programmerName << endl
        << "CMSC140 Common Project " << assignmentNumber << endl
        << "Due Date :" << dueDate << endl << endl;

    return 0;
}

// Function definition for fillArray
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    //get input for all three arrays
    for (int i = 0, rowC = 0, columnC = 0; i < size; i++, columnC++)
    {
        cout << "Enter the number for row " << rowC << " and column " << columnC << " :";
        cin >> arrayRow1[i];
    }

    for (int i = 0, rowC = 1, columnC = 0; i < size; i++, columnC++)
    {
        cout << "Enter the number for row " << rowC << " and column " << columnC << " :";
        cin >> arrayRow2[i];
    }

    for (int i = 0, rowC = 2, columnC = 0; i < size; i++, columnC++)
    {
        cout << "Enter the number for row " << rowC << " and column " << columnC << " :";
        cin >> arrayRow3[i];
    }
}

// Function definition for showArray
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{   //display array values
    for (int i = 0; i < size; i++)
    {
        cout << setw(3) << arrayrow1[i];
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << setw(3) << arrayrow2[i];
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << setw(3) << arrayrow3[i];
    }
}

// Function definition for checkDiagSum
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{   // check if diagonal sum is 15
    int a;
    int b;

    a = arrayrow1[0] + arrayrow2[1] + arrayrow3[2];
    b = arrayrow1[2] + arrayrow2[1] + arrayrow3[0];

    if (a == 15 && b == 15)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Function definition for checkColSum
bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{   //check if column sum is 15
    int a;
    int b;
    int c;

    a = arrayrow1[0] + arrayrow2[0] + arrayrow3[0];
    b = arrayrow1[1] + arrayrow2[1] + arrayrow3[1];
    c = arrayrow1[2] + arrayrow2[2] + arrayrow3[2];

    if (a == 15 && b == 15 && c == 15)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Function definition for checkRowSum
bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{   //check if row sum is 15
    int a;
    int b;
    int c;

    a = arrayrow1[0] + arrayrow1[1] + arrayrow1[2];
    b = arrayrow2[0] + arrayrow2[1] + arrayrow2[2];
    c = arrayrow3[0] + arrayrow3[1] + arrayrow3[2];

    if (a == 15 && b == 15 && c == 15)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Function definition for checkRange
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max)
{   //check if array values are in range
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < size; i++)
    {
        if (min <= arrayRow1[i] || arrayRow1[i] <= max)
        {
            a = a + 0;
        }
        else
        {
            a = a + 1;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (min <= arrayRow2[i] || arrayRow2[i] <= max)
        {
            b = b + 0;
        }
        else
        {
            b = b + 1;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (min <= arrayRow3[i] || arrayRow3[i] <= max)
        {
            c = c + 0;
        }
        else
        {
            c = c + 1;
        }
    }
    if (a + b + c == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

// Function definition for checkUnique
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) 
{   //check if array values are unique
    int a = 0, b = 0, c = 0, sum = 0;
    for (int i = 0; i < size; i++) {
        if (arrayRow1[i] == arrayRow1[i + 1] || arrayRow1[i] == arrayRow2[i] || arrayRow1[i] == arrayRow3[i]) {
            a = a + 1;
        }
        if (arrayRow2[i] == arrayRow2[i + 1] || arrayRow2[i] == arrayRow1[i] || arrayRow2[i] == arrayRow3[i]) {
            b = b + 1;
        }
        if (arrayRow3[i] == arrayRow3[i + 1] || arrayRow3[i] == arrayRow2[i] || arrayRow3[i] == arrayRow1[i]) {
            c = c + 1;
        }
    }
    sum = a + b + c;
    if (sum == 0) {
        return true;
    }
    else return false;
}

// Function definition for isMagicSquare
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{   //check if all properties of magic square are fulfilled
    bool a, b, c, d, e;

    a = checkDiagSum(arrayRow1, arrayRow2, arrayRow3, COLS);
    b = checkColSum(arrayRow1, arrayRow2, arrayRow3, COLS);
    c = checkRowSum(arrayRow1, arrayRow2, arrayRow3, COLS);
    d = checkRange(arrayRow1, arrayRow2, arrayRow3, COLS, MIN, MAX);
    e = checkUnique(arrayRow1, arrayRow2, arrayRow3, COLS);

    return (a && b && c && d && e);
}