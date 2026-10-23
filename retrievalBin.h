#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class RetrievalBin {
private:
	bool status;

	//contents cant be a fixed array because it does grow and shrink
	vector<string> contents;

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