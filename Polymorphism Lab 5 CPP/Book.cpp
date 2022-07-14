#include "Book.h"

Book::Book() : Item()
{
	author = "";
	isbnNum = -1;
}

Book::Book(string inTitle, string inAuthor, int inIsbnNum) : Item(inTitle)
{
	author = inAuthor;
	isbnNum = inIsbnNum;
}

void Book::getListing() 
{
	cout << "Book Name - ";
	Item::getListing();
	cout << "Author - " << author << endl;
	cout << "ISBN - " << isbnNum << endl;
	cout << endl;
}

string Book::getAuthor()
{
	return string();
}

int Book::getIsbnNum()
{
	return 0;
}

void Book::setAuthor(string inAuthor)
{
	author = inAuthor;
}

void Book::setIsbnNum(int inIsbnNum)
{
	isbnNum = inIsbnNum;
}

