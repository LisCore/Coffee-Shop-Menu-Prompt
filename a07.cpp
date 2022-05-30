/******************************************************************************
# Author:           Corey Lee
# Assignment:       A07 (CS161A)
# Date:             May 29, 2022
# Description:      This program will prompt user to list which items they want to 
#					purchase, the lists will extend to different tab will subcategories
#					Whichever item is checked will be added to the total cost. The program
#					will continue to loop if input is not correct and will end when 4 is
#					pressed. 
# Input:            char option = input the user makes when deciding between which 
								  breakfast item to choose from 
					double tip = input if the user wants to add additional tip
# Output:           Output the total cost of all the items checked within 
#					the program	
# Sources:          Assignment 7 specifications, zybooks chapter 5, 6,and 7
#******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//Added conost value of the cost and tip percents
	const double TEN_TIP = 0.10;
	const double FIFTEEN_TIP = 0.15;
	const double TWENTY_TIP = 0.20;
	const double MUFFIN = 4.50;
	const double PASTRY = 5.50;
	const double DONUT = 4.00;                          
	const double BAGEL = 3.75;
	const double TOAST = 2.25;
	const double COFFEE = 3.50;
	const double TEA = 2.50;
	//Have two total variables, one to gather cost of an item and the other to find cost of total
	double total = 0.00;
	double total1 = 0.00, total2 = 0.00, total3 = 0.00, total4 = 0.00, total5 = 0.00, total6 = 0.00, total7 = 0.00;
	double tipAmount = 0.00; 
	char option = ' ';

	cout << "Welcome to Corey's Coffee Shop! \n" << endl;

	//used do while loop in order to get the first input from user
	do {
		cout << "Please pick an option below" << endl;
		cout << "     1. Donuts/Muffins/Pastries" << endl;
		cout << "     2. Bagels/Toast" << endl;
		cout << "     3. Coffee/Tea" << endl;
		cout << "     4. Quit" << endl;
		cin.get(option);
		cin.ignore(100, '\n');
		cin.clear();
		//in order to exit out of loop, I found that this had to be inserted into the program to exit
		if (option == '4') {
			break; 
		}
		//to cycle loop with invalid response
		while (option != '1' && option != '2' && option != '3') {
			cout << "Invalid response, Try again." << endl;
			cout << "     1. Donuts/Muffins/Pastries" << endl;
			cout << "     2. Bagels/Toast" << endl;
			cout << "     3. Coffee/Tea" << endl;
			cout << "     4. Quit" << endl;
			cin.get(option);
			cin.ignore(100, '\n');
			cin.clear();
			continue;
		}
		while (option == '1') {
			cout << "Would you like" << endl;
			cout << "     D: Donuts $4.00" << endl;
			cout << "     M: Muffins $4.50" << endl;
			cout << "     P: Pastres $5.50" << endl;
			cin.get(option);
			cin.ignore(100, '\n');
			cin.clear();
			if (option == tolower('d')) {
				//to gather total item cost
				total1 += DONUT;
				total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
				cout << "Donuts added" << endl;
				cout << fixed << setprecision(2) << "total: $" << total << endl;
			}
			else if (option == tolower('m')) {
				total2 += MUFFIN;
				total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
				cout << "Muffins added" << endl;
				cout << fixed << setprecision(2) << "total: $" << total << endl;
			}
			else if (option == tolower('p')) {
				total3 += PASTRY;
				total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
				cout << "Pastries added" << endl;
				cout << fixed << setprecision(2) << "total: $" << total << endl;
			}
			//Added whole new else if statement if input was not to the correct response
			//This condition checks different option menus compared to the first conditional statement
			else if (option != tolower('d') || option == tolower('m') || option == tolower('p')) {
				cout << "Incorrect" << endl;
				cout << "Would you like" << endl;
				cout << "     D: Donuts $4.00" << endl;
				cout << "     M: Muffins $4.50" << endl;
				cout << "     P: Pastres $5.50" << endl;
				cin.get(option);
				cin.ignore(100, '\n');
				cin.clear();
				if (option == tolower('d')) {
					total1 += DONUT;
					total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
					cout << "Donuts added" << endl;
					cout << fixed << setprecision(2) << "total: $" << total << endl;
				}
				else if (option == tolower('m')) {
					total2 += MUFFIN;
					total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
					cout << "Muffins added" << endl;
					cout << fixed << setprecision(2) << "total: $" << total << endl;
				}
				else if (option == tolower('p')) {
					total3 += PASTRY;
					total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
					cout << "Pastries added" << endl;
					cout << fixed << setprecision(2) << "total: $" << total << endl;
				}
			}
		}
		//Once the first while loop was made, the other two while loops consist of the same algorithm,
		//just changed numbers to match the program
		while (option == '2') {
			cout << "Would you like" << endl;
			cout << "     B: Bagels $3.75" << endl;
			cout << "     T: Toast $2.25" << endl;
			cin.get(option);
			cin.ignore(100, '\n');
			cin.clear();
			if (option == tolower('b')) {
				total4 += BAGEL;
				total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
				cout << "Bagels added" << endl;
				cout << fixed << setprecision(2) << "total: $" << total << endl;
			}
			else if (option == tolower('t')) {
				total5 += TOAST;
				total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
				cout << "Toast added" << endl;
				cout << fixed << setprecision(2) << "total: $" << total << endl;
			}
			else if (option != tolower('b') || option == tolower('t')) {
				cout << "Incorrect" << endl;
				cout << "Would you like" << endl;
				cout << "     B: Bagels $3.75" << endl;
				cout << "     T: Toast $2.25" << endl;
				cin.get(option);
				cin.ignore(100, '\n');
				cin.clear();
				if (option == tolower('b')) {
					total4 += BAGEL;
					total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
					cout << "Bagels added" << endl;
					cout << fixed << setprecision(2) << "total: $" << total << endl;
				}
				else if (option == tolower('t')) {
					total5 += TOAST;
					total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
					cout << "Toast added" << endl;
					cout << fixed << setprecision(2) << "total: $" << total << endl;
				}
			}
		}
		while (option == '3') {
			cout << "Would you like" << endl;
			cout << "     C: Coffee $3.50" << endl;
			cout << "     T: Tea $2.50" << endl;
			cin.get(option);
			cin.ignore(100, '\n');
			cin.clear();
			if (option == tolower('c')) {
				total6 += COFFEE;
				total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
				cout << "Coffee added" << endl;
				cout << fixed << setprecision(2) << "total: $" << total << endl;
			}
			else if (option == tolower('t')) {
				total7 += TEA;
				total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
				cout << "Tea added" << endl;
				cout << fixed << setprecision(2) << "total: $" << total << endl;
			}
			else if (option != tolower('c') || option == tolower('t')) {
				cout << "Incorrect" << endl;
				cout << "Would you like" << endl;
				cout << "     C: Coffee $3.50" << endl;
				cout << "     T: Tea $2.50" << endl;
				cin.get(option);
				cin.ignore(100, '\n');
				cin.clear();
				if (option == tolower('c')) {
					total6 += COFFEE;
					total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
					cout << "Coffee added" << endl;
					cout << fixed << setprecision(2) << "total: $" << total << endl;
				}
				else if (option == tolower('t')) {
					total7 += TEA;
					total = total1 + total2 + total3 + total4 + total5 + total6 + total7;
					cout << "Tea added '\n'" << endl;
					cout << fixed << setprecision(2) << "total: $" << total << endl;
				}
			}
		}

	}while (option != '4');

	cout << "Your total is: $" << total << "\n" << endl;
	//Added do while in case the input was not y/n
	do {
		cout << "Would you like to add a tip? (Y/N)" << endl;
		cin.get(option);
		cin.ignore(100, '\n');
		cin.clear();
	} while (option != tolower('y') && option != tolower('n'));

	if (option == tolower('y')) {
	cout << "Suggested amounts : \n" << endl;
	//total * tip percent will display the tip amount
	cout << "10% = $" << total * TEN_TIP << endl;
	cout << "15% = $" << total * FIFTEEN_TIP << endl;
	cout << "20% = $" << total * TWENTY_TIP << "\n" << endl;
	cout << "Enter tip amount: $" << endl;
	cin >> tipAmount;
	total += tipAmount;
	cout << "Your total is: $" << total; 
	}
	//If no tip amount, the program will display total and end the program
	else if (option == tolower('n')) {
		cout << "Your total is: $" << total;
	}
	return 0;
}