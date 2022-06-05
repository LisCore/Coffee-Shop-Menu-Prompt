#include <iostream>
#include <iomanip>
using namespace std;

void intro();
void menu();
double option1(double t);
double option2(double p);
double option3(double a);
void tipPrompt();

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
//Changed to just total += const variable
double total = 0.00;
double tipAmount = 0.00;
char option = ' ';

int main() {
	cout << fixed << setprecision(2);
	intro();
	menu();
	total += option1(total) + option2(total) + option3(total);

	return 0;
}
void intro() {
	cout << "Welcome to Corey's Coffee Shop \n" << endl;
}
void menu() {
	do {
		cout << "Please pick an option below" << endl;
		cout << "     1. Donuts/Muffins/Pastries" << endl;
		cout << "     2. Bagels/Toast" << endl;
		cout << "     3. Coffee/Tea" << endl;
		cout << "     4. Quit" << endl;
		cin.get(option);
		cin.ignore(100, '\n');
		cin.clear();
		if (option == '1') {
			option1(total);
			break;
		}
		else if (option == '2') {
			option2(total);
			break;
		}
		else if (option == '3') {
			option3(total);
			break;
		}
		else if (option == '4') {
			tipPrompt();
			break;
		}
	} while (option != '4');
}
void tipPrompt() {
	do {
		cout << "Would you like to add tip (Y/N)" << endl;
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
		cout << "Enter tip amount: $";
		cin >> tipAmount;
		cin.clear();
		total += tipAmount;
	}
	cout << fixed << setprecision(2);
	cout << "Your total is: $" << total << endl;
}
double option1(double t) {
	while (option == '1') {
		do {
			cout << "Would you like" << endl;
			cout << "     D: Donuts $4.00" << endl;
			cout << "     M: Muffins $4.50" << endl;
			cout << "     P: Pastres $5.50" << endl;
			cin.get(option);
			cin.ignore(100, '\n');
			cin.clear();
		} while (option != tolower('d') && option != tolower('m') && option != tolower('p'));
		if (option == tolower('d')) {
			total += DONUT;
			cout << "Total: $" << total << endl;
			menu();
			break;
		}
		else if (option == tolower('m')) {
			total += MUFFIN;
			cout << "Total: $" << total << endl;
			menu();
			break;
		}
		else if (option == tolower('p')) {
			total += PASTRY;
			cout << "Total: $" << total << endl;
			menu();
			break;
		}
	}
	return total;
}
double option2(double p) {
	while (option == '2') {
		do {
			cout << "Would you like" << endl;
			cout << "     B: Bagels $3.75" << endl;
			cout << "     T: Toast $2.25" << endl;
			cin.get(option);
			cin.ignore(100, '\n');
			cin.clear();
		} while (option != tolower('b') && option != tolower('t'));
		if (option == tolower('b')) {
			total += BAGEL;
			cout << "Total: $" << total << endl;
			menu();
			break;
		}
		else if (option == tolower('t')) {
			total += TOAST;
			cout << "Total: $" << total << endl;
			menu();
			break;
		}
	}
	return total;
}
double option3(double a) {
	while (option == '3') {
		do {
			cout << "Would you like" << endl;
			cout << "     C: Coffee $3.50" << endl;
			cout << "     T: Tea $2.50" << endl;
			cin.get(option);
			cin.ignore(100, '\n');
			cin.clear();
		} while (option != tolower('c') && option != tolower('t'));
		if (option == tolower('c')) {
			total += COFFEE;
			cout << "Total: $" << total << endl;
			menu();
			break;
		}
		else if (option == tolower('t')) {
			total += TEA;
			cout << "Total: $" << total << endl;
			menu();
			break;
		}
	}
	return total;
}