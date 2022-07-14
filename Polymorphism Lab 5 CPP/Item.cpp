#include "Item.h"

Item::Item()
{
	title = "";
}

Item::Item(string inTitle)
{
	title = inTitle;
}

string Item::getTitle()
{
	return title;
}

void Item::setTitle(string inTitle)
{
	title = inTitle;
}

void Item::getListing()
{
	cout << getTitle() << endl;
}
