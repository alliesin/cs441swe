#pragma once
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;

class packageSlot {
private:
	int packagesDispensed;   
	int capacity;
	vector<int> coil;        
	string snack;
	int packageID;

public:
	
	packageSlot()
	{
		packagesDispensed = 0;
		capacity = 0;
		packageID = 0;
		snack = "";
	}

	
	string getSnack()
	{
		return snack;
	}
	void setSnack(string newSnack)
	{
		snack = newSnack;
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

	
	void setCapacity(int cap)
	{
		capacity = cap;
		coil.clear();
		for (int i = 0; i <= capacity; i++) {
			coil.push_back(i);
		}
		packagesDispensed = capacity;
	}

	int getCapacity()
	{
		return capacity;
	}

	
	string drop() {
		if (coil[packagesDispensed] == 0) {
			throw runtime_error("Out of stock!");
		}
		packagesDispensed--;
		return snack;
	}
};