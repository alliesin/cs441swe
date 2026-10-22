#pragma once
#include <vector>
#include "packageSlot.h"
using namespace std; 

class slotRow {
private:
	int ID;
	int numberOfSlots = 10;
	int capacity = 10;
	vector<packageSlot> slots;

public:
	//constructor
	slotRow() {
		ID = 0;
		for (int i = 0; i < numberOfSlots; i++) {
			slots.push_back(new packageSlot());
			slots[i].setCapacity(capacity);
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
	int getCapacity()
	{
		return capacity;
	}
	vector<packageSlot>& getSlots()
	{
		return slots;
	}
};