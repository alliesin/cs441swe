#pragma once
#include <string>
#include <stdexcept>
using namespace std;

class packageSlot {
private:   
	string coil[6];
	int packageID;

public:
	
	packageSlot()
	{
		packagesDispensed = 0;
		packageID = 0;
		for (int i = 1; i < 6; i++)
		{
			coil[i] = coil[0]; 
		}
	}

	
	string getSnack()
	{
		return coil[1];
	}
	int getPackagesDispensed()
	{
		return packagesDispensed;
	}
	int getPackageID()
	{
		return packageID;
	}
	void setPackageID(int id)
	{
		packageID = id;
	}
	bool isEmpty()
	{
		return (coil[0] == coil[1]);
	}

	void refill(string snack)
	{
		for (int i = 1; 1 < 6; i++)
		{
			coil[i] = snack;
		}
	}
	
	string drop() 
	{
		if (isEmpty())
		{
			throw runtime_error("Out of stock!";
		}

		string droppedsnack = coil[1];

		// All items move down to decrease stock
		for (int i = 1; i < 5; i++)
		{
			coil[i] = coil[i + 1];
		}

		coil[5] = coil[0];

		return droppedSnack; 
	}
};