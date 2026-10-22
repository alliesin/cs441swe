#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "SnackDispenser.h"
#include "Door.h"
using namespace std;

class vendingMachine {
private:
	bool state;
	SnackDispenser snackDispenser;
	Door door;
	int price;

public:
	vector<slotRow> createSnacks()
	{
		string names[20] =
		{
			"Plain Chips", "Pretzels", "Popcorn", "Oreos", "Hersheys",
			"Kind Bar", "Crackers", "Haribo Gummy Bears", "Salted Peanuts", "KitKat",
			"Cheetos", "Fruit Snacks", "M&Ms", "Honey Buns", "Doritos Purple",
			"Wafers", "Mints", "Skittles", "Sunflower Seeds", "Doritos Blue"
		};

		vector<slotRow> rows;
		int n = 0;
		for (int i = 0; i < 2; i++)
		{
			slotRow row;
			row.setID(i + 1);
			vector<packageSlot>& slots = row.getSlots();
			for (int j = 0; j < slots.size(); j++)
			{
				slots[j].setPackageID(n + 1);
				slots[j].setSnack(names[n]);
				n++;
			}
			rows.push_back(row);
		}
		return rows;
	}

	vendingMachine() : snackDispenser(createSnacks())
	{
		state = true;
		price = 0;
	}

	void run()
	{
		char again = 'y';
		while (again == 'y') {
			snackDispenser.display();
			cout << "\nBuy another snack? (y/n): ";
			cin >> again;
		}
	}
};