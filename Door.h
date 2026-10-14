#pragma once

class Door {
private:
	bool state;
public:
	void openDoor() 
	{
		state = true;
	}
	void closeDoor()
	{
		state = false;
	}
};
