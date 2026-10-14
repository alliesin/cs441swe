#pragma once
#include <vector>

class SnackStorage {
private:
    int capacityPer;

public:
    void setCapacityPer(int capacity) {
        capacityPer = capacity;
    }

    int getCapacityPer() {
        return capacityPer;
    }
};


