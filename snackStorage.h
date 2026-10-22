#pragma once
#include <vector>
#include <format>
#include "packageSlot.h"
#include "slotRow.h"
#include "vendingMachine.h"

class SnackStorage {
private:
    int numberOfRows = 2;
    vector<slotRow> slotRows;

public:
    //constructor
    SnackStorage()
    {
        for (int i = 0; i < numberOfRows; i++) {
            slotRows.push_back(new slotRow());
        }
    }

    //Print the Row ID, then the snacks and IDs of the slots in that row
    void displaySnack() {
        for (int i = 0; i < slotRows.size(); i++) {
            cout << format("Row {}:", slotRow[i].getID()) << endl;
            for (int i = 0; i < slots.size(); i++) {
                cout << format("{}, Press [{}]", slots[i].getSnack(), slots[i].getPackageID()) << endl;
            }
        }
    }

    //Check if we have selected snack
    string dropSnack(int choice) {
        if () {
            //need to implement, would it talk to slotRow then to packageSlot?? her email says that Dispenser talks directly to slot
            //which bypasses the component structure
        }
        else {
            return "";
        }
    }


};


