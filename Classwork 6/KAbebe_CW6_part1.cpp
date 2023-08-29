#include <iostream>
using namespace std;

int getChoice();
bool validateChoice(int);
void getNumbers(int&, int&);   // by reference
int addition(int, int);
int subtraction(int, int);
void displayResult(int);  // implied

int main()
{
	int my_num1, my_num2, choice, my_result;
	do {
		choice = getChoice();  /// initiazed here

		if (!validateChoice(choice)) {
			cout << "\nInvlaid choice of the operation. Try again" << endl;
		}
	} while (!validateChoice(choice));
	getNumbers(my_num1, my_num2);
	my_result = (choice == 1 ? addition(my_num1, my_num2) :
		subtraction(my_num1, my_num2));
	displayResult(my_result);



	cout << endl;
	system("pause");
	return 0;
}
/********************************************************/
int getChoice()
{

	int choice;// local variable

	cout << "Enter your choice, 1 for Addition, 2 for Subtraction:";
	cin >> choice;  // initialize choice

	return choice;
}

/********************************************************/
bool validateChoice(int choice)
{
	return (choice == 1 || choice == 2);
}
/********************************************************/
void getNumbers(int& num1, int& num2)   // defined function by reference
{
	cout << "Enter first number:";
	cin >> num1;
	cout << "Enter second number:";
	cin >> num2;
}
/********************************************************/
int addition(int num1, int num2)
{
	return num1 + num2;
}
/********************************************************/
int subtraction(int num1, int num2)
{
	return num1 - num2;
}

void displayResult(int result)
{

	cout << "\nThe result of the operation is: " << result << endl;

}