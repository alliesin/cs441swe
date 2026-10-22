#pragma once
#include "SnackDispenser.h"
#include "Door.h"

class vendingMachine() {
private:
	bool state;
	SnackDispenser snackDispenser;
	Door door;
	int price;

public:
	void setPrice()
	{
		price = 0; 
	}
	int getPrice()
	{
		return price; 
	}
}
