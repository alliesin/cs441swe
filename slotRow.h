#pragma once
#include "packageSlot.h"

class slotRow {
private:
	int ID;
	int numberOfSlots = 10;
	vector<packageSlot> slots;

public:
	//constructor
	slotRow() {
		for (int i = 0; i < numberOfSlots; i++) {
			slots.push_back(new packageSlot())
		}
	}

	void getID() 
	{
		return ID;
	}
	void setID(int newID) 
	{
		ID = newID;
	}
};