#pragma once
#include <string>
#include <iostream>
#include "packageSlot.h"
using namespace std;

class SnackStorage {
private:
    // matrix 2x5
    packageSlot slots[2][5]; 

public:
    //constructor
    SnackStorage()
    {
        for id = 1;
        for (int i = 0; i < 2; i++)
        {
            for (int y = 0, y < 5; y++)
            {
                slots[i][y].setPackageID(id);
                id++
            }
        }
    }

    string getSnack(int row, int col)
    {
        return slots[row][col].getSnack();
    }
    int getPackageID(int row, int col)
    {
        return slots[row][col].getPackageID();
    }

    //fills each coil with the snack name
    void refill(string names[2][5])
    {
        for (int i = 0; i < 2; i++)
        {
            for (int y = 0; y < 5; y++)
            {
                slots[i][y].refill(names[i][y]);
            }
        }
    }
    
    //Check if we have selected snack
    string dropSnack(int choice) {
        for (int i = 0; i < 2; i++) {
            for (int y = 0; y < 5; y++) {
                if (slots[i][y].getPackageID() == choice) {
                    return slots[i][y].drop();
                }
            }
        }
    }

};


