//Heather Johnson
//This program displays the compound interest based on the user's input
//04/04/2021


#include <string>
#include <iostream>
#include <iomanip> 
#include "AmoritizationCalculator.h"

using namespace std;
/// Prints the user menu
void AmoritizationCalculator::menuInput() {
	cout << "Initial Investment Amount: ";  //Accepts user input
	cin >> m_initialInvestment;

	cout << "\nMonthly Deposit: ";
	cin >> m_monthlyDeposit;

	cout << "\nAnnual Interest: ";
	cin >> m_annualInterest;
	m_annualInterest /= 100;
	m_monthlyInterest = m_annualInterest / 12;

	cout << "\nNumber of years: ";
	cin >> m_numYears;

	cout << "\nNumber of years: \n";
	cout << "Press any key to continue..." << endl;
}

// Initilizes the report
void AmoritizationCalculator::initCalculation() {
	m_openingAmt = m_initialInvestment;
}

// Prints Amoritization Report
void AmoritizationCalculator::printUserMenu() {
	cout << fixed << setprecision(2);
	cout << "=======================================================\n"; // Prints user menu
	cout << "Year\t\t"
		<< "Year End Balance\t\t"
		<< "Year End Earned Interest\n";
	cout << "-------------------------------------------------------\n";
}

// Calculates Amoritization
void AmoritizationCalculator::amoritReport() {
	for (int year = 1; year <= m_numYears; ++year) { // Compounds interest based on user input
		for (int month = 1; month <= 12; ++month) {
			m_dollarTotal = m_openingAmt + m_monthlyDeposit;
			m_dollarInterest = m_dollarTotal * m_monthlyInterest;
			m_closingBalance = m_dollarTotal + m_dollarInterest;
			m_openingAmt = m_closingBalance;
		}
		m_yearEndBalance += m_openingAmt; // Additional formatting and calculation
		m_yearEndInterest += m_dollarInterest;
		cout << year << "\t\t"
			<< m_yearEndBalance << "\t\t"
			<< m_yearEndInterest << endl;
	}
}

int main() {
	AmoritizationCalculator amoritizationCalculator;
	amoritizationCalculator.menuInput();
	amoritizationCalculator.initCalculation();
	amoritizationCalculator.printUserMenu();
	amoritizationCalculator.amoritReport();
}