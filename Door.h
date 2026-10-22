#pragma once

class Door {
private:
	bool state;
public:
	void setState(bool s) {
		state = s;
	}
	bool getState() {
		return state;
	}
	void openDoor()
	{
		setState(true);
	}
	void closeDoor()
	{
		setState(false);
	}
};
