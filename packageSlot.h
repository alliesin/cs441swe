#pragma once
#include <string>
#include <stdexcept>
using namespace std;

class packageSlot {
private:
	int packagesDispensed;   
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

	void refill(string snack)
	{
		for (int i = 1; 1 < 6; i++)
		{
			coil[i] = snack;
		}
	}
	
	string drop() 
	{
		if (coil[1] == coil[0])
		{
			cout << "Out of stock" << endl; 
		}

		string droppedsnack = coil[1];

		// All items move down to decrease stock
		for int(i = 1; i < 5; i++)
		{
			coil[i] = coil[i + 1];
			// Not sure if we still need/want this
			packagesDispensed++;

		}

		coil[5] = coil[0];

		return droppedSnack; 
	}
};