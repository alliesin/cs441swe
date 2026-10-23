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

	void refill()
	{
		if (state == false)
		{
			door.openDoor();
			snackDispenser.setRefill(true);
			snackDispenser.refillSlots();
			snackDispenser.setRefill(false);
			door.closeDoor();
			state = true;
		}
	}

	void run()
	{
		if (state == false)
		{
			cout << "Refill machine first." << endl;
			return 0;
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