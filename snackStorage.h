#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "packageSlot.h"
#include "slotRow.h"
using namespace std;

class SnackStorage {
private:
    vector<slotRow> slotRows;

public:
    //constructor
    SnackStorage(vector<slotRow> rows)
    {
        slotRows = rows;
    }

    //Print the Row ID, then the snacks and IDs of the slots in that row
    void displaySnack() {
        for (int i = 0; i < slotRows.size(); i++) {
            cout << "Row " << slotRows[i].getID() << ":" << endl;
            vector<packageSlot>& slots = slotRows[i].getSlots();
            for (int i = 0; i < slots.size(); i++) {
                cout << slots[i].getSnack() << ", Press [" << slots[i].getPackageID() << "]" << endl;
            }
        }
    }

    //Check if we have selected snack
    string dropSnack(int choice) {
        for (int i = 0; i < slotRows.size(); i++) {
            vector<packageSlot>& slots = slotRows[i].getSlots();
            for (int i = 0; i < slots.size(); i++) {
                if (slots[i].getPackageID() == choice) {
                    return slots[i].drop();
                }
            }
        }
    }

};


