#pragma once
#include <string>
#include <iostream> 
#include <exception>
#include "snackStorage.h"
#include "retrievalBin.h"
using namespace std;

class SnackDispenser
{
private:
	SnackStorage storage;
	RetrievalBin bin;
	string names[2][5];
	bool refill;

public:
	SnackDispenser()
	{
		refill = false;
	}
	void setRefill(bool state)
	{
		refill = state;
	}

	void createSnacks()
	{
		string snacks[10] =
		{
			"Plain Chips", "Pretzels", "Popcorn", "Oreos", "Hersheys",
			 "Salted Peanuts", "KitKat","M&Ms", "Doritos Purple", "Skittles"
		};

		int n = 0;
		for (int i = 0; i < 2; i++)
		{
			for (int y = 0; y < 5; i++)
			{
				names[i][y] = snacks[n]
				n++;
			}
			rows.push_back(row);
		}
	}
	void refillSlots()
	{
		if (refill)
		{
			createSnacks();
			cout << "Refilling slots." << endl;
			storage.refill(names)
		}
	}

	void display()
	{
		//Asks the customer to choose a snack
		int choice;

		cout << "\nAll Snacks: " << endl;
		//grabs all the snacks from snackStorage
		for (int i = 0; i < 2; i++) 
		{
			cout << "Row " << i << ":" << endl;
			for (int y = 0; y < 5; y++)
			{
				string snack = storage.getSnack(i, y);

				if (snack.empty()) {
					snack = '(Sold out)'
				}
				cout << snack << " Press: " << storage.getPackageID(i, y) << endl;
			}
		}

		cout << "\n Select a snack and enter the package ID: " << endl;
		if (!(cin >> choice))
		{
			cin.clear();
			cout << "Invalid choice" << endl;
			return;
		}

		// checks to see if that snack is there in snackStorage, grabs it, and releases it to retrievalBin
		try {
			string selectedSnack = storage.dropSnack(choice);
			bin.release(selectedSnack);
			bin.retrieveSnack();
		}
		catch (out_of_range& e) {
			cout << "Invalid package ID" << endl; //catches out_of_range from snackStorage
		}
		catch (runtime_error& e) {
			cout << e.what() << endl;   // catches runtime_error from packageSlot
		}
	}

}