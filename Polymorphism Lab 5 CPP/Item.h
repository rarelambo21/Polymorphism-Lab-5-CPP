#pragma once
#include <iostream>
#include <string>

using namespace std;

class Item
{
public:
	Item();
	Item(string inTitle);
	virtual ~Item() = default;

	string getTitle();
	void setTitle(string inTitle);
	virtual void getListing();

private:
	string title;
};