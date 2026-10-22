#pragma once
#include <string>
#include "slotRow.h"

class packageSlot {
private:
	int packagesDispensed;
	int Coil[10];
	string snack;
	int packageID; 
	slotRow row;

public:
// constructor for the slot itself
	packageSlot() 
	{
		packagesDispensed = 0;
		packageID = 0;
		snack = "";
	}
//Counts how many packages are being dispensed, acts as a counter
	void dispense() {
		if (packagesDispensed < row.getCapacity()) {
			packagesDispensed++;
		}
	}
//gets and sets the snacks name
	void getSnack() 
	{
		return snack;
	}
	void setSnack(string newSnack) 
	{
		snack = newSnack;
	}
//gets and sets the quantity
	void setPackagesDispensed(int packages) 
	{
		packagesDispensed = packages;
	}
	void getPackagesDispensed() 
	{
		return packagesDispensed; 
	}
// gets and sets the packageID (slot itself id)
	void getPackageID()
	{
		return packageID;
	}
	void setPackagaeID()
	{
		packageID = ID;
	}
// grabs the capacity from slotrow and assigns it to each slot
	void setCapacity(int capacity) {
		row.setCapacity(capacity);

		for (int i = 0; i < 10; i++) {
			Coil[i] = capacity;
		}
	}

	int getCapacity() {
		return row.getCapacity();
	}
//checks the stock of the slot and dispenses the product
	string drop() {
		if (packagesDispensed == row.getCapacity()) {
			return "";
		}

		string droppedSnack = snack;
		dispense();
		return droppedSnack;
	}
};
