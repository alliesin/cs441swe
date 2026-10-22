#pragma once
#include <vector>
#include <string>

class RetrievalBin {
private:
	bool status;
	vector<string> contents;

public:
	void getContents() 
	{
		return contents;
	}
	void release(vector<string> newContents)
	{
		contents = newContents; 
	}
	void emptyContents() 
	{
		cout << "You take your snacks. Enjoy!" << endl;
		cout << "Obtained: ";
		vector<string> contents = getContents();
		for (string s : contents) {
			cout << s << ' ';
		}
		contents.clear();
	}
};