//Heather Johnson
//This head files defines a class that prints and calculates amoritization.
//04/12/2021
#ifndef REPORTS_AMORITIZATIONCALCULATOR_H_
#define REPORTS_AMORITIZATIONCALCULATOR_H_
class AmoritizationCalculator {
public:
	void menuInput();

	void initCalculation();

	void printUserMenu();

	void amoritReport();

// Initilizes variables
private:
	float
		m_initialInvestment = 0.0,
		m_monthlyDeposit = 0.0,
		m_monthlyInterest = 0.0,
		m_annualInterest = 0.0,
		m_openingAmt = 0.0,
		m_depositedAmt = 0.0,
		m_dollarTotal = 0.0,
		m_dollarInterest = 0.0,
		m_closingBalance = 0.0,
		m_yearEndBalance = 0.0,
		m_yearEndInterest = 0.0;

	int m_numYears = 0;
};


#endif 