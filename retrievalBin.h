#pragma once
#include <string>
#include <iostream>
using namespace std;

class RetrievalBin {
private:
	bool status;
	string contents[10];

public:
	void release(string snack)
	{
		contents.push_back(snack);
	}
	void retrieveSnack()
	{
		cout << "You take your snacks. Enjoy!" << endl;
		cout << "Obtained: ";
		for (string s : contents) {
			cout << s << ' ';
		}
		cout << endl;
		contents.clear();
	}
};