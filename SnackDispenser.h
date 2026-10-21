#pragma once
#include <string>
#include <iostram>
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
		//grabs all the snacks from snackDispenser which has the vector of all sancks
		storage.DisplaySnack():

		cout << "\n Select a snack and enter the package ID: " << endl;
		cin >> choice;

		// checks to see if that cnack is there in snackStorage, grabs it, and releases it to retrievalBin
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