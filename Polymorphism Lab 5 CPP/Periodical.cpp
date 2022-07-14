#include "Periodical.h"

Periodical::Periodical() : Item()
{
	isbnNum = -1;
}

Periodical::Periodical(string inTitle, int inIsbnNum) : Item(inTitle)
{
	isbnNum = inIsbnNum;
}

void Periodical::getListing()
{
	cout << "Periodical Title - ";
	Item::getListing();
	cout << "ISBN - " << isbnNum << endl;
	cout << endl;
}

int Periodical::getIsbnNum()
{
	return isbnNum;
}

void Periodical::setIsbnNum(int inIsbnNum)
{
	isbnNum = inIsbnNum;
}
