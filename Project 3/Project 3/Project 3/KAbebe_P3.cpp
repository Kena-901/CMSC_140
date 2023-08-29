/*
 * Class: CMSC140 CRN 30414
 * Instructor:Charles Naegeli
 * Project<number> Project 3
 * Description: You are required to write a program that calculates the occupancy rate and the total hotel income for one night
				and displays this information as well as some other information described below.

	•	The program starts by asking the location where this hotel chain is located and the number of floors in the hotel.
			o	The number of floors may not exceed 5.
	•	Then the user enters the total number of rooms for each floor.
	•	Then the program asks specifically the number of occupied rooms for each room type on this floor.
			o	The total number of rooms on each floor may not exceed 30
			o	The total number of occupied rooms on each floor should not exceed the total of rooms on that floor.

 * Due Date: 04/04/2023
 * I pledge that I have completed the programming assignment independently.
 *I have not copied the code from a student or any source.
 *I have not given my code to any student.
 Print your Name here: Kenawak Abebe
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	int displayCounter1 = 1;
	string locationName;
	double hotelIncome;
	double occupancyRate;
	int numFloors;
	int occupiedTotal;
	int leastOccupiedFloor, totalRoomLeast;
	int roomTotal, singleTotal, doubleTotal, kingTotal, suiteTotal, unoccupiedTotal;
	int numRooms1, singleRoom1, doubleRoom1, kingRoom1, suiteRoom1, totalOccupied1;
	int numRooms2, singleRoom2, doubleRoom2, kingRoom2, suiteRoom2, totalOccupied2;
	int numRooms3, singleRoom3, doubleRoom3, kingRoom3, suiteRoom3, totalOccupied3;
	int numRooms4, singleRoom4, doubleRoom4, kingRoom4, suiteRoom4, totalOccupied4;
	int numRooms5, singleRoom5, doubleRoom5, kingRoom5, suiteRoom5, totalOccupied5;

	// declare constants
	const int floorMax = 5, floorMin = 1, roomMax = 30, roomMin = 1;
	const int singleRate = 60, doubleRate = 75, kingRate = 100, suiteRate = 150;
	const string programmerName = "Kenawak Abebe";
	const string dueDate = "04/04/2023";
	const int assignmentNumber = 3;


	// use loop to display equal sign 
	while (displayCounter1 <= 108)
	{
		cout << "=";
		displayCounter1++;
	}

	cout << endl << setw(60) << "BlueMont Hotel" << endl;

	displayCounter1 = 1;
	while (displayCounter1 <= 108)
	{
		cout << "=";
		displayCounter1++;
	}


	//prompt user for location name and recive location
	cout << endl << "Enter the location of this hotel chain: ";
	getline(cin, locationName);

	//pompt user for number of floors and get number
	cout << endl << "Enter total number of floors of the hotel: ";
	cin >> numFloors;

	//use loop to varify input for floor number
	while (numFloors < floorMin || numFloors > floorMax)
	{
		cout << "Number of floors should be between 1 and 5 !! please try again"
			<< endl << "Enter total number of floors of the hotel: ";
		cin >> numFloors;
	}


	// use if else to get occupancy of each type of room depending on number of floors

	//if statement for one floor
	if (numFloors == 1)
	{
		cout << endl << "Enter total number of rooms on the 1st floor: ";
		cin >> numRooms1;

		// use loop to varify Room number
		while (numRooms1 < roomMin || numRooms1 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 1st floor: ";
			cin >> numRooms1;
		}

		cout << "How many SINGLE rooms are occupied on the 1st floor: ";
		cin >> singleRoom1;
		cout << "How many DOUBLE rooms are occupied on the 1st floor: ";
		cin >> doubleRoom1;
		cout << "How many KING rooms are occupied on the 1st floor: ";
		cin >> kingRoom1;
		cout << "How many SUITES are occupied on the 1st floor: ";
		cin >> suiteRoom1;

		totalOccupied1 = singleRoom1 + doubleRoom1 + kingRoom1 + suiteRoom1;

		// use loop to varify number of occupied rooms
		while (totalOccupied1 > numRooms1)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;

			cout << endl << "Enter total number of rooms on the 1st floor: ";
			cin >> numRooms1;

			while (numRooms1 < roomMin || numRooms1 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 1st floor: ";
				cin >> numRooms1;
			}

			cout << "How many SINGLE rooms are occupied on the 1st floor: ";
			cin >> singleRoom1;
			cout << "How many DOUBLE rooms are occupied on the 1st floor: ";
			cin >> doubleRoom1;
			cout << "How many KING rooms are occupied on the 1st floor: ";
			cin >> kingRoom1;
			cout << "How many SUITES are occupied on the 1st floor: ";
			cin >> suiteRoom1;
			totalOccupied1 = singleRoom1 + doubleRoom1 + kingRoom1 + suiteRoom1;
		}

		//do required calculations depending on input
		singleTotal = singleRoom1;
		doubleTotal = doubleRoom1;
		kingTotal = kingRoom1;
		suiteTotal = suiteRoom1;

		hotelIncome = (singleTotal * 60) + (doubleTotal * 75) + (kingTotal * 100) + (suiteTotal * 150);
		occupiedTotal = totalOccupied1;
		roomTotal = numRooms1;
		unoccupiedTotal = roomTotal - occupiedTotal;
		occupancyRate = (static_cast<double>(occupiedTotal) / roomTotal) * 100;
		leastOccupiedFloor = numFloors;
		totalRoomLeast = numRooms1;

	}

	//if statement for two floor
	else if (numFloors == 2)
	{
		cout << endl << "Enter total number of rooms on the 1st floor: ";
		cin >> numRooms1;

		// use loop to varify number of rooms
		while (numRooms1 < roomMin || numRooms1 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 1st floor: ";
			cin >> numRooms1;
		}

		cout << "How many SINGLE rooms are occupied on the 1st floor: ";
		cin >> singleRoom1;
		cout << "How many DOUBLE rooms are occupied on the 1st floor: ";
		cin >> doubleRoom1;
		cout << "How many KING rooms are occupied on the 1st floor: ";
		cin >> kingRoom1;
		cout << "How many SUITES are occupied on the 1st floor: ";
		cin >> suiteRoom1;

		totalOccupied1 = singleRoom1 + doubleRoom1 + kingRoom1 + suiteRoom1;

		//use loop to varify number of occupied rooms for every floor
		while (totalOccupied1 > numRooms1)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;

			cout << endl << "Enter total number of rooms on the 1st floor: ";
			cin >> numRooms1;

			while (numRooms1 < roomMin || numRooms1 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 1st floor: ";
				cin >> numRooms1;
			}

			cout << "How many SINGLE rooms are occupied on the 1st floor: ";
			cin >> singleRoom1;
			cout << "How many DOUBLE rooms are occupied on the 1st floor: ";
			cin >> doubleRoom1;
			cout << "How many KING rooms are occupied on the 1st floor: ";
			cin >> kingRoom1;
			cout << "How many SUITES are occupied on the 1st floor: ";
			cin >> suiteRoom1;
			totalOccupied1 = singleRoom1 + doubleRoom1 + kingRoom1 + suiteRoom1;
		}


		cout << endl << "Enter total number of rooms on the 2nd floor: ";
		cin >> numRooms2;

		while (numRooms2 < roomMin || numRooms2 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 2nd floor: ";
			cin >> numRooms2;
		}

		cout << "How many SINGLE rooms are occupied on the 2nd floor: ";
		cin >> singleRoom2;
		cout << "How many DOUBLE rooms are occupied on the 2nd floor: ";
		cin >> doubleRoom2;
		cout << "How many KING rooms are occupied on the 2nd floor: ";
		cin >> kingRoom2;
		cout << "How many SUITES are occupied on the 2nd floor: ";
		cin >> suiteRoom2;

		totalOccupied2 = singleRoom2 + doubleRoom2 + kingRoom2 + suiteRoom2;

		while (totalOccupied2 > numRooms2)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;
			cout << endl << "Enter total number of rooms on the 2nd floor: ";
			cin >> numRooms2;

			while (numRooms2 < roomMin || numRooms2 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 2nd floor: ";
				cin >> numRooms2;
			}

			cout << "How many SINGLE rooms are occupied on the 2nd floor: ";
			cin >> singleRoom2;
			cout << "How many DOUBLE rooms are occupied on the 2nd floor: ";
			cin >> doubleRoom2;
			cout << "How many KING rooms are occupied on the 2nd floor: ";
			cin >> kingRoom2;
			cout << "How many SUITES are occupied on the 2nd floor: ";
			cin >> suiteRoom2;
			totalOccupied2 = singleRoom2 + doubleRoom2 + kingRoom2 + suiteRoom2;
		}

		// do required calculations based on input
		singleTotal = singleRoom1 + singleRoom2;
		doubleTotal = doubleRoom1 + doubleRoom2;
		kingTotal = kingRoom1 + kingRoom2;
		suiteTotal = suiteRoom1 + suiteRoom2;

		hotelIncome = (singleTotal * 60) + (doubleTotal * 75) + (kingTotal * 100) + (suiteTotal * 150);
		occupiedTotal = totalOccupied1 + totalOccupied2;
		roomTotal = numRooms1 + numRooms2;
		unoccupiedTotal = roomTotal - occupiedTotal;
		occupancyRate = (static_cast<double>(occupiedTotal) / roomTotal) * 100;

		if (numRooms1 < numRooms2)
		{
			leastOccupiedFloor = 1;
			totalRoomLeast = numRooms1;
		}
		else
		{
			leastOccupiedFloor = 2;
			totalRoomLeast = numRooms2;
		}


	}

	//if statement for three floor
	else if (numFloors == 3)
	{
		cout << endl << "Enter total number of rooms on the 1st floor: ";
		cin >> numRooms1;

		//use loop to varify number of rooms
		while (numRooms1 < roomMin || numRooms1 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 1st floor: ";
			cin >> numRooms1;
		}

		cout << "How many SINGLE rooms are occupied on the 1st floor: ";
		cin >> singleRoom1;
		cout << "How many DOUBLE rooms are occupied on the 1st floor: ";
		cin >> doubleRoom1;
		cout << "How many KING rooms are occupied on the 1st floor: ";
		cin >> kingRoom1;
		cout << "How many SUITES are occupied on the 1st floor: ";
		cin >> suiteRoom1;

		totalOccupied1 = singleRoom1 + doubleRoom1 + kingRoom1 + suiteRoom1;

		//use loop to varify number of occupied rooms for every floor
		while (totalOccupied1 > numRooms1)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;

			cout << endl << "Enter total number of rooms on the 1st floor: ";
			cin >> numRooms1;

			while (numRooms1 < roomMin || numRooms1 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 1st floor: ";
				cin >> numRooms1;
			}

			cout << "How many SINGLE rooms are occupied on the 1st floor: ";
			cin >> singleRoom1;
			cout << "How many DOUBLE rooms are occupied on the 1st floor: ";
			cin >> doubleRoom1;
			cout << "How many KING rooms are occupied on the 1st floor: ";
			cin >> kingRoom1;
			cout << "How many SUITES are occupied on the 1st floor: ";
			cin >> suiteRoom1;
			totalOccupied1 = singleRoom1 + doubleRoom1 + kingRoom1 + suiteRoom1;
		}


		cout << endl << "Enter total number of rooms on the 2nd floor: ";
		cin >> numRooms2;

		while (numRooms2 < roomMin || numRooms2 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 2nd floor: ";
			cin >> numRooms2;
		}

		cout << "How many SINGLE rooms are occupied on the 2nd floor: ";
		cin >> singleRoom2;
		cout << "How many DOUBLE rooms are occupied on the 2nd floor: ";
		cin >> doubleRoom2;
		cout << "How many KING rooms are occupied on the 2nd floor: ";
		cin >> kingRoom2;
		cout << "How many SUITES are occupied on the 2nd floor: ";
		cin >> suiteRoom2;

		totalOccupied2 = singleRoom2 + doubleRoom2 + kingRoom2 + suiteRoom2;

		while (totalOccupied2 > numRooms2)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;
			cout << endl << "Enter total number of rooms on the 2nd floor: ";
			cin >> numRooms2;

			while (numRooms2 < roomMin || numRooms2 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 2nd floor: ";
				cin >> numRooms2;
			}

			cout << "How many SINGLE rooms are occupied on the 2nd floor: ";
			cin >> singleRoom2;
			cout << "How many DOUBLE rooms are occupied on the 2nd floor: ";
			cin >> doubleRoom2;
			cout << "How many KING rooms are occupied on the 2nd floor: ";
			cin >> kingRoom2;
			cout << "How many SUITES are occupied on the 2nd floor: ";
			cin >> suiteRoom2;
			totalOccupied2 = singleRoom2 + doubleRoom2 + kingRoom2 + suiteRoom2;
		}

		cout << endl << "Enter total number of rooms on the 3rd floor: ";
		cin >> numRooms3;

		while (numRooms3 < roomMin || numRooms3 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 3rd floor: ";
			cin >> numRooms3;
		}

		cout << "How many SINGLE rooms are occupied on the 3rd floor: ";
		cin >> singleRoom3;
		cout << "How many DOUBLE rooms are occupied on the 3rd floor: ";
		cin >> doubleRoom3;
		cout << "How many KING rooms are occupied on the 3rd floor: ";
		cin >> kingRoom3;
		cout << "How many SUITES are occupied on the 3rd floor: ";
		cin >> suiteRoom3;

		totalOccupied3 = singleRoom3 + doubleRoom3 + kingRoom3 + suiteRoom3;

		while (totalOccupied3 > numRooms3)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;
			cout << endl << "Enter total number of rooms on the 3rd floor: ";
			cin >> numRooms3;

			while (numRooms3 < roomMin || numRooms3 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 3rd floor: ";
				cin >> numRooms3;
			}

			cout << "How many SINGLE rooms are occupied on the 3rd floor: ";
			cin >> singleRoom3;
			cout << "How many DOUBLE rooms are occupied on the 3rd floor: ";
			cin >> doubleRoom3;
			cout << "How many KING rooms are occupied on the 3rd floor: ";
			cin >> kingRoom3;
			cout << "How many SUITES are occupied on the 3rd floor: ";
			cin >> suiteRoom3;
			totalOccupied3 = singleRoom3 + doubleRoom3 + kingRoom3 + suiteRoom3;
		}

		// do required calculations based on input
		singleTotal = singleRoom1 + singleRoom2 + singleRoom3;
		doubleTotal = doubleRoom1 + doubleRoom2 + doubleRoom3;
		kingTotal = kingRoom1 + kingRoom2 + kingRoom3;
		suiteTotal = suiteRoom1 + suiteRoom2 + suiteRoom3;

		hotelIncome = (singleTotal * 60) + (doubleTotal * 75) + (kingTotal * 100) + (suiteTotal * 150);
		occupiedTotal = totalOccupied1 + totalOccupied2 + totalOccupied3;
		roomTotal = numRooms1 + numRooms2 + numRooms3;
		unoccupiedTotal = roomTotal - occupiedTotal;
		occupancyRate = (static_cast<double>(occupiedTotal) / roomTotal) * 100;

		if (numRooms1 < numRooms2 && numRooms1 < numRooms3)
		{
			leastOccupiedFloor = 1;
			totalRoomLeast = numRooms1;
		}
		else if (numRooms2 < numRooms1 && numRooms2 < numRooms3)
		{
			leastOccupiedFloor = 2;
			totalRoomLeast = numRooms2;
		}
		else
		{
			leastOccupiedFloor = 3;
			totalRoomLeast = numRooms3;
		}
	}

	//if statement for four floor
	else if (numFloors == 4)
	{
		cout << endl << "Enter total number of rooms on the 1st floor: ";
		cin >> numRooms1;

		// use loop to varify number of rooms
		while (numRooms1 < roomMin || numRooms1 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 1st floor: ";
			cin >> numRooms1;
		}

		cout << "How many SINGLE rooms are occupied on the 1st floor: ";
		cin >> singleRoom1;
		cout << "How many DOUBLE rooms are occupied on the 1st floor: ";
		cin >> doubleRoom1;
		cout << "How many KING rooms are occupied on the 1st floor: ";
		cin >> kingRoom1;
		cout << "How many SUITES are occupied on the 1st floor: ";
		cin >> suiteRoom1;

		totalOccupied1 = singleRoom1 + doubleRoom1 + kingRoom1 + suiteRoom1;

		//use loop to varify number of occupied rooms for every floor
		while (totalOccupied1 > numRooms1)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;

			cout << endl << "Enter total number of rooms on the 1st floor: ";
			cin >> numRooms1;

			while (numRooms1 < roomMin || numRooms1 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 1st floor: ";
				cin >> numRooms1;
			}

			cout << "How many SINGLE rooms are occupied on the 1st floor: ";
			cin >> singleRoom1;
			cout << "How many DOUBLE rooms are occupied on the 1st floor: ";
			cin >> doubleRoom1;
			cout << "How many KING rooms are occupied on the 1st floor: ";
			cin >> kingRoom1;
			cout << "How many SUITES are occupied on the 1st floor: ";
			cin >> suiteRoom1;
			totalOccupied1 = singleRoom1 + doubleRoom1 + kingRoom1 + suiteRoom1;
		}


		cout << endl << "Enter total number of rooms on the 2nd floor: ";
		cin >> numRooms2;

		while (numRooms2 < roomMin || numRooms2 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 2nd floor: ";
			cin >> numRooms2;
		}

		cout << "How many SINGLE rooms are occupied on the 2nd floor: ";
		cin >> singleRoom2;
		cout << "How many DOUBLE rooms are occupied on the 2nd floor: ";
		cin >> doubleRoom2;
		cout << "How many KING rooms are occupied on the 2nd floor: ";
		cin >> kingRoom2;
		cout << "How many SUITES are occupied on the 2nd floor: ";
		cin >> suiteRoom2;

		totalOccupied2 = singleRoom2 + doubleRoom2 + kingRoom2 + suiteRoom2;

		while (totalOccupied2 > numRooms2)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;
			cout << endl << "Enter total number of rooms on the 2nd floor: ";
			cin >> numRooms2;

			while (numRooms2 < roomMin || numRooms2 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 2nd floor: ";
				cin >> numRooms2;
			}

			cout << "How many SINGLE rooms are occupied on the 2nd floor: ";
			cin >> singleRoom2;
			cout << "How many DOUBLE rooms are occupied on the 2nd floor: ";
			cin >> doubleRoom2;
			cout << "How many KING rooms are occupied on the 2nd floor: ";
			cin >> kingRoom2;
			cout << "How many SUITES are occupied on the 2nd floor: ";
			cin >> suiteRoom2;
			totalOccupied2 = singleRoom2 + doubleRoom2 + kingRoom2 + suiteRoom2;
		}

		cout << endl << "Enter total number of rooms on the 3rd floor: ";
		cin >> numRooms3;

		while (numRooms3 < roomMin || numRooms3 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 3rd floor: ";
			cin >> numRooms3;
		}

		cout << "How many SINGLE rooms are occupied on the 3rd floor: ";
		cin >> singleRoom3;
		cout << "How many DOUBLE rooms are occupied on the 3rd floor: ";
		cin >> doubleRoom3;
		cout << "How many KING rooms are occupied on the 3rd floor: ";
		cin >> kingRoom3;
		cout << "How many SUITES are occupied on the 3rd floor: ";
		cin >> suiteRoom3;

		totalOccupied3 = singleRoom3 + doubleRoom3 + kingRoom3 + suiteRoom3;

		while (totalOccupied3 > numRooms3)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;
			cout << endl << "Enter total number of rooms on the 3rd floor: ";
			cin >> numRooms3;

			while (numRooms3 < roomMin || numRooms3 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 3rd floor: ";
				cin >> numRooms3;
			}

			cout << "How many SINGLE rooms are occupied on the 3rd floor: ";
			cin >> singleRoom3;
			cout << "How many DOUBLE rooms are occupied on the 3rd floor: ";
			cin >> doubleRoom3;
			cout << "How many KING rooms are occupied on the 3rd floor: ";
			cin >> kingRoom3;
			cout << "How many SUITES are occupied on the 3rd floor: ";
			cin >> suiteRoom3;
			totalOccupied3 = singleRoom3 + doubleRoom3 + kingRoom3 + suiteRoom3;
		}
		cout << endl << "Enter total number of rooms on the 4th floor: ";
		cin >> numRooms4;

		while (numRooms4 < roomMin || numRooms4 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 4th floor: ";
			cin >> numRooms4;
		}

		cout << "How many SINGLE rooms are occupied on the 4th floor: ";
		cin >> singleRoom4;
		cout << "How many DOUBLE rooms are occupied on the 4th floor: ";
		cin >> doubleRoom4;
		cout << "How many KING rooms are occupied on the 4th floor: ";
		cin >> kingRoom4;
		cout << "How many SUITES are occupied on the 4th floor: ";
		cin >> suiteRoom4;

		totalOccupied4 = singleRoom4 + doubleRoom4 + kingRoom4 + suiteRoom4;

		while (totalOccupied4 > numRooms4)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;
			cout << endl << "Enter total number of rooms on the 4th floor: ";
			cin >> numRooms4;

			while (numRooms4 < roomMin || numRooms4 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 4th floor: ";
				cin >> numRooms4;
			}

			cout << "How many SINGLE rooms are occupied on the 4th floor: ";
			cin >> singleRoom4;
			cout << "How many DOUBLE rooms are occupied on the 4th floor: ";
			cin >> doubleRoom4;
			cout << "How many KING rooms are occupied on the 4th floor: ";
			cin >> kingRoom4;
			cout << "How many SUITES are occupied on the 4th floor: ";
			cin >> suiteRoom4;
			totalOccupied4 = singleRoom4 + doubleRoom4 + kingRoom4 + suiteRoom4;
		}

		//do required calculations based on input
		singleTotal = singleRoom1 + singleRoom2 + singleRoom3 + singleRoom4;
		doubleTotal = doubleRoom1 + doubleRoom2 + doubleRoom3 + doubleRoom4;
		kingTotal = kingRoom1 + kingRoom2 + kingRoom3 + kingRoom4;
		suiteTotal = suiteRoom1 + suiteRoom2 + suiteRoom3 + suiteRoom4;

		hotelIncome = (singleTotal * 60) + (doubleTotal * 75) + (kingTotal * 100) + (suiteTotal * 150);
		occupiedTotal = totalOccupied1 + totalOccupied2 + totalOccupied3 + totalOccupied4;
		roomTotal = numRooms1 + numRooms2 + numRooms3 + numRooms4;
		unoccupiedTotal = roomTotal - occupiedTotal;
		occupancyRate = (static_cast<double>(occupiedTotal) / roomTotal) * 100;

		if (numRooms1 < numRooms2 && numRooms1 < numRooms3 && numRooms1 < numRooms4)
		{
			leastOccupiedFloor = 1;
			totalRoomLeast = numRooms1;
		}
		else if (numRooms2 < numRooms1 && numRooms2 < numRooms3 && numRooms2 < numRooms4)
		{
			leastOccupiedFloor = 2;
			totalRoomLeast = numRooms2;
		}
		else if (numRooms3 < numRooms1 && numRooms3 < numRooms2 && numRooms3 < numRooms4)
		{
			leastOccupiedFloor = 3;
			totalRoomLeast = numRooms3;
		}
		else
		{
			leastOccupiedFloor = 4;
			totalRoomLeast = numRooms4;
		}

	}

	//if statement for five floor
	else
	{
		cout << endl << "Enter total number of rooms on the 1st floor: ";
		cin >> numRooms1;

		//use loop to varify number of rooms
		while (numRooms1 < roomMin || numRooms1 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 1st floor: ";
			cin >> numRooms1;
		}

		cout << "How many SINGLE rooms are occupied on the 1st floor: ";
		cin >> singleRoom1;
		cout << "How many DOUBLE rooms are occupied on the 1st floor: ";
		cin >> doubleRoom1;
		cout << "How many KING rooms are occupied on the 1st floor: ";
		cin >> kingRoom1;
		cout << "How many SUITES are occupied on the 1st floor: ";
		cin >> suiteRoom1;

		totalOccupied1 = singleRoom1 + doubleRoom1 + kingRoom1 + suiteRoom1;

		//use loop to varify number of occupied rooms for every floor
		while (totalOccupied1 > numRooms1)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;

			cout << endl << "Enter total number of rooms on the 1st floor: ";
			cin >> numRooms1;

			while (numRooms1 < roomMin || numRooms1 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 1st floor: ";
				cin >> numRooms1;
			}

			cout << "How many SINGLE rooms are occupied on the 1st floor: ";
			cin >> singleRoom1;
			cout << "How many DOUBLE rooms are occupied on the 1st floor: ";
			cin >> doubleRoom1;
			cout << "How many KING rooms are occupied on the 1st floor: ";
			cin >> kingRoom1;
			cout << "How many SUITES are occupied on the 1st floor: ";
			cin >> suiteRoom1;
			totalOccupied1 = singleRoom1 + doubleRoom1 + kingRoom1 + suiteRoom1;
		}


		cout << endl << "Enter total number of rooms on the 2nd floor: ";
		cin >> numRooms2;

		while (numRooms2 < roomMin || numRooms2 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 2nd floor: ";
			cin >> numRooms2;
		}

		cout << "How many SINGLE rooms are occupied on the 2nd floor: ";
		cin >> singleRoom2;
		cout << "How many DOUBLE rooms are occupied on the 2nd floor: ";
		cin >> doubleRoom2;
		cout << "How many KING rooms are occupied on the 2nd floor: ";
		cin >> kingRoom2;
		cout << "How many SUITES are occupied on the 2nd floor: ";
		cin >> suiteRoom2;

		totalOccupied2 = singleRoom2 + doubleRoom2 + kingRoom2 + suiteRoom2;

		while (totalOccupied2 > numRooms2)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;
			cout << endl << "Enter total number of rooms on the 2nd floor: ";
			cin >> numRooms2;

			while (numRooms2 < roomMin || numRooms2 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 2nd floor: ";
				cin >> numRooms2;
			}

			cout << "How many SINGLE rooms are occupied on the 2nd floor: ";
			cin >> singleRoom2;
			cout << "How many DOUBLE rooms are occupied on the 2nd floor: ";
			cin >> doubleRoom2;
			cout << "How many KING rooms are occupied on the 2nd floor: ";
			cin >> kingRoom2;
			cout << "How many SUITES are occupied on the 2nd floor: ";
			cin >> suiteRoom2;
			totalOccupied2 = singleRoom2 + doubleRoom2 + kingRoom2 + suiteRoom2;
		}

		cout << endl << "Enter total number of rooms on the 3rd floor: ";
		cin >> numRooms3;

		while (numRooms3 < roomMin || numRooms3 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 3rd floor: ";
			cin >> numRooms3;
		}

		cout << "How many SINGLE rooms are occupied on the 3rd floor: ";
		cin >> singleRoom3;
		cout << "How many DOUBLE rooms are occupied on the 3rd floor: ";
		cin >> doubleRoom3;
		cout << "How many KING rooms are occupied on the 3rd floor: ";
		cin >> kingRoom3;
		cout << "How many SUITES are occupied on the 3rd floor: ";
		cin >> suiteRoom3;

		totalOccupied3 = singleRoom3 + doubleRoom3 + kingRoom3 + suiteRoom3;

		while (totalOccupied3 > numRooms3)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;
			cout << endl << "Enter total number of rooms on the 3rd floor: ";
			cin >> numRooms3;

			while (numRooms3 < roomMin || numRooms3 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 3rd floor: ";
				cin >> numRooms3;
			}

			cout << "How many SINGLE rooms are occupied on the 3rd floor: ";
			cin >> singleRoom3;
			cout << "How many DOUBLE rooms are occupied on the 3rd floor: ";
			cin >> doubleRoom3;
			cout << "How many KING rooms are occupied on the 3rd floor: ";
			cin >> kingRoom3;
			cout << "How many SUITES are occupied on the 3rd floor: ";
			cin >> suiteRoom3;
			totalOccupied3 = singleRoom3 + doubleRoom3 + kingRoom3 + suiteRoom3;
		}
		cout << endl << "Enter total number of rooms on the 4th floor: ";
		cin >> numRooms4;

		while (numRooms4 < roomMin || numRooms4 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 4th floor: ";
			cin >> numRooms4;
		}

		cout << "How many SINGLE rooms are occupied on the 4th floor: ";
		cin >> singleRoom4;
		cout << "How many DOUBLE rooms are occupied on the 4th floor: ";
		cin >> doubleRoom4;
		cout << "How many KING rooms are occupied on the 4th floor: ";
		cin >> kingRoom4;
		cout << "How many SUITES are occupied on the 4th floor: ";
		cin >> suiteRoom4;

		totalOccupied4 = singleRoom4 + doubleRoom4 + kingRoom4 + suiteRoom4;

		while (totalOccupied4 > numRooms4)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;
			cout << endl << "Enter total number of rooms on the 4th floor: ";
			cin >> numRooms4;

			while (numRooms4 < roomMin || numRooms4 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 4th floor: ";
				cin >> numRooms4;
			}

			cout << "How many SINGLE rooms are occupied on the 4th floor: ";
			cin >> singleRoom4;
			cout << "How many DOUBLE rooms are occupied on the 4th floor: ";
			cin >> doubleRoom4;
			cout << "How many KING rooms are occupied on the 4th floor: ";
			cin >> kingRoom4;
			cout << "How many SUITES are occupied on the 4th floor: ";
			cin >> suiteRoom4;
			totalOccupied4 = singleRoom4 + doubleRoom4 + kingRoom4 + suiteRoom4;
		}

		cout << endl << "Enter total number of rooms on the 5th floor: ";
		cin >> numRooms5;

		while (numRooms5 < roomMin || numRooms5 > roomMax)
		{
			cout << "Number of Rooms should be between 1 and 30 !! please try again"
				<< endl << "Enter total number of rooms on the 5th floor: ";
			cin >> numRooms5;
		}

		cout << "How many SINGLE rooms are occupied on the 5th floor: ";
		cin >> singleRoom5;
		cout << "How many DOUBLE rooms are occupied on the 5th floor: ";
		cin >> doubleRoom5;
		cout << "How many KING rooms are occupied on the 5th floor: ";
		cin >> kingRoom5;
		cout << "How many SUITES are occupied on the 5th floor: ";
		cin >> suiteRoom5;

		totalOccupied5 = singleRoom5 + doubleRoom5 + kingRoom5 + suiteRoom5;

		while (totalOccupied5 > numRooms5)
		{
			cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Please try again!!" << endl << endl;
			cout << endl << "Enter total number of rooms on the 5th floor: ";
			cin >> numRooms5;

			while (numRooms5 < roomMin || numRooms5 > roomMax)
			{
				cout << "Number of Rooms should be between 1 and 30 !! please try again"
					<< endl << "Enter total number of rooms on the 5th floor: ";
				cin >> numRooms5;
			}

			cout << "How many SINGLE rooms are occupied on the 5th floor: ";
			cin >> singleRoom5;
			cout << "How many DOUBLE rooms are occupied on the 5th floor: ";
			cin >> doubleRoom5;
			cout << "How many KING rooms are occupied on the 5th floor: ";
			cin >> kingRoom5;
			cout << "How many SUITES are occupied on the 5th floor: ";
			cin >> suiteRoom5;
			totalOccupied5 = singleRoom5 + doubleRoom5 + kingRoom5 + suiteRoom5;
		}

		//do required calculations based on input
		singleTotal = singleRoom1 + singleRoom2 + singleRoom3 + singleRoom4 + singleRoom5;
		doubleTotal = doubleRoom1 + doubleRoom2 + doubleRoom3 + doubleRoom4 + doubleRoom5;
		kingTotal = kingRoom1 + kingRoom2 + kingRoom3 + kingRoom4 + kingRoom5;
		suiteTotal = suiteRoom1 + suiteRoom2 + suiteRoom3 + suiteRoom4 + suiteRoom5;

		hotelIncome = (singleTotal * 60) + (doubleTotal * 75) + (kingTotal * 100) + (suiteTotal * 150);
		occupiedTotal = totalOccupied1 + totalOccupied2 + totalOccupied3 + totalOccupied4 + totalOccupied5;
		roomTotal = numRooms1 + numRooms2 + numRooms3 + numRooms4 + numRooms5;
		unoccupiedTotal = roomTotal - occupiedTotal;
		occupancyRate = (static_cast<double>(occupiedTotal) / roomTotal) * 100;

		if (numRooms1 < numRooms2 && numRooms1 < numRooms3 && numRooms1 < numRooms4 && numRooms1 < numRooms5)
		{
			leastOccupiedFloor = 1;
			totalRoomLeast = numRooms1;
		}
		else if (numRooms2 < numRooms1 && numRooms2 < numRooms3 && numRooms2 < numRooms4 && numRooms2 < numRooms5)
		{
			leastOccupiedFloor = 2;
			totalRoomLeast = numRooms2;
		}
		else if (numRooms3 < numRooms1 && numRooms3 < numRooms2 && numRooms3 < numRooms4 && numRooms3 < numRooms5)
		{
			leastOccupiedFloor = 3;
			totalRoomLeast = numRooms3;
		}
		else if (numRooms4 < numRooms1 && numRooms4 < numRooms2 && numRooms4 < numRooms3 && numRooms4 < numRooms5)
		{
			leastOccupiedFloor = 4;
			totalRoomLeast = numRooms4;
		}
		else
		{
			leastOccupiedFloor = 5;
			totalRoomLeast = numRooms5;
		}
	}

	// display hotel room rates
	displayCounter1 = 1;

	while (displayCounter1 <= 108)
	{
		cout << "=";
		displayCounter1++;
	}

	cout << endl << setw(60) << "BlueMont Hotel located in " << locationName << endl
		<< setw(68) << "TODAY'S ROOM RATES (US$/NIGHT)" << endl;

	displayCounter1 = 1;
	while (displayCounter1 <= 108)
	{
		cout << "=";
		displayCounter1++;
	}

	cout << endl << setw(24) << "Single room" << setw(19)
		<< "Double room" << setw(17) << "King room" << setw(18)
		<< "Suite room" << endl;
	cout << endl << setw(24) << "60" << setw(19)
		<< "75" << setw(17) << "100" << setw(18)
		<< "150" << endl;

	displayCounter1 = 1;
	while (displayCounter1 <= 108)
	{
		cout << "=";
		displayCounter1++;
	}

	// display result of calcutations
	cout << setw(44) << "Hotel income:" << setw(15) << "$" << showpoint << fixed << setprecision(2) << hotelIncome
		<< endl << setw(31) << "Total # of rooms:" << setw(20) << roomTotal
		<< endl << setw(31) << "Total # of occupied rooms:" << setw(20) << occupiedTotal
		<< endl << setw(31) << "Total # of unoccupied rooms:" << setw(20) << unoccupiedTotal
		<< endl << setw(31) << "Occupancy Rate:" << setw(20) << occupancyRate << "%" << endl << endl;

	cout << leastOccupiedFloor << "th floor with " << totalRoomLeast << " rooms, has the least number of rooms."
		<< endl << "Need to improve hotel occupancy rate!!";

	// display programmer and project info 
	cout << endl << endl << "Thank you for testing my program!! \n"
		<< "PROGRAMMER: " << programmerName << endl
		<< "CMSC140 Common Project " << assignmentNumber << endl
		<< "Due Date :" << dueDate << endl << endl;

	return 0;

}