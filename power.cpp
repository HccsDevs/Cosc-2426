
#include <iostream>

using namespace std;

int calculatePower(int, int);
/**
Entry to the main program
*/
int main()
{
	int base, Raisedpower, result;

	cout << "Enter base number: ";
	cin >> base;

	cout << "Enter power number( should be an positive integer): ";	  //prompts the user to input the values
	cin >> Raisedpower;

	result = calculatePower(base, Raisedpower);
	if (result == -1)
		cout << "Base  and power MUST be positive";
	else 
	    cout << base << "^" << Raisedpower << " = " << result << endl;		  // outputs the number 

	return 0;
}

int calculatePower(int base, int Raisedpower)
{
	if (Raisedpower <= 0)
		return -1;

		return (base*calculatePower(base, Raisedpower - 1));
	
}
																				   
