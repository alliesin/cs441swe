#pragma once
#include <vector>

class RetrievalBin {
private:
	bool status;
	vector<string> contents;

public:
	void getContents() 
	{
		return contents;
	}
	void setContents(vector<string> newContents)
	{
		contents = newContents; 
	}
	void emptyContents() 
	{
		contents.clear();
	}
};