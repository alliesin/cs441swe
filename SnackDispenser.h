#pragma once
#include <string>
#include <iostream> 
#include "snackStorage.h"
#include "retrievalBin.h"
#include "packageSlot.h"

class SnackDispenser() 
{
private:
	snackStorage storage;
	retrievalBin bin;

public:
	void display()
	{
		//Asks the customer to choose a snack
		int choice;

		cout << "\nAll Snacks: " << endl;
		//grabs all the snacks from snackStorage which has the vector of all snacks
		storage.displaySnack():

		cout << "\n Select a snack and enter the package ID: " << endl;
		cin >> choice;

		// checks to see if that snack is there in snackStorage, grabs it, and releases it to retrievalBin
		string selectedSnack = storage.dropSnack(choice);

		if (selectedSnack == "") {
			cout << "Out of stock!" << endl;
		}
		else {
			bin.release(selectedSnack);
			bin.retrieveSnack();
		}
	}

}