#pragma once
#include <string>
#include <iostream> 
#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <exception>
#include "snackStorage.h"
#include "retrievalBin.h"
#include "packageSlot.h"
using namespace std;

class SnackDispenser
{
private:
	SnackStorage storage;
	RetrievalBin bin;

public:
	SnackDispenser(vector<slotRow> rows) : storage(rows) {}

	void display()
	{
		//Asks the customer to choose a snack
		int choice;

		cout << "\nAll Snacks: " << endl;
		//grabs all the snacks from snackStorage which has the vector of all snacks
		storage.displaySnack();

		cout << "\n Select a snack and enter the package ID: " << endl;
		cin >> choice;

		// checks to see if that snack is there in snackStorage, grabs it, and releases it to retrievalBin
		try {
			string slectedSnack = storage.dropSnack(choice);
			bin.release(selectedSnack);
			bin.retrieveSnack();
		}
		catch (exception& e) {
			cout << "Invalid Choice" << endl;
		}
	}

}