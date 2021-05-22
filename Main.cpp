#include <iostream>
#include "classes.h"
#include <string>

using namespace std;

int main()
{
	
	pizza p;
	char choice;
	int slices_left = p.getNumOfSlice();

	while (slices_left > 1)
	{
		slices_left = p.getNumOfSlice();



		cout << "> There are " << slices_left << " slices of pizza left.";
		cout << "\n> Take a slice? (Y/N)" << endl;
		cout << "> ";
		cin >> choice;
		if (choice == 'Y' || choice == 'y')
		{
			p.setNumOfSlice();
		}
		else if (choice == 'N' || choice == 'n')
		{
			cout << "There are " << p.getNumOfSlice() << " slices left...";
			p.getNumOfSlice();
		}
		else if (choice != 'Y' || choice != 'y' || choice != 'N' || choice != 'n')
		{
			cout << "> Your choices are Y or N...\n";
		}
	}
	
	cout << "The pizza is all gone.\nParty's over.";

	return 0;
}