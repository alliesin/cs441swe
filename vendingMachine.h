#pragma once
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

	vendingMachine()
	{
		state = false;
		price = 0;
	}

	void refil()
	{
		if status = false
		{
			snackDispenser.setRefill(true);
			snackDispenser.refillSlots();
			snackDispenser.setRefill(false);
			state = true;
		}
	}

	void run()
	{
		if (state == false)
		{
			cout << "Refill machine first" << endl;
			return;
		}

		char runagain = "y";
		while (runagain == 'y')
		{
			snackDispenser.display();
			cout << "\nDo you want to buy another snack (y/n)? ";
			cin >> again;
		}
	}
};