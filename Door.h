#pragma once

class Door {
private:
	bool state;
public:
	Door() {
		state = false;
	}
	void setState(bool s) {
		state = s;
	}
	bool getState() {
		return state;
	}
	void openDoor()
	{
		cout << "Opened the door." << endl;
		setState(true);
	}
	void closeDoor()
	{
		cout << "Closed the door." << endl;
		setState(false);
	}
};
