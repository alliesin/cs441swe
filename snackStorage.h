#pragma once
#include <vector>
#include <format>
#include "packageSlot.h"
#include "slotRow.h"

class SnackStorage {
private:
    int capacityPer;
    vector<slotRow> slotRows;
    vector<packageSlot> slots;

public:
    void setCapacityPer(int capacity) {
        capacityPer = capacity;
    }

    int getCapacityPer() {
        return capacityPer;
    }

    //Print the Row ID, then the snacks and IDs of the slots in that row
    void displaySnack() {
        for (int i = 0; i < slotRows.size(); i++) {
            cout << format("Row {}:", slotRow[i].getID());
            for (int i = 0; i < slots.size(); i++) {
                cout << format("{}, Press [{}]", slots[i].getSnack(), slots[i].getPackageID())
            }
        }
    }
};


