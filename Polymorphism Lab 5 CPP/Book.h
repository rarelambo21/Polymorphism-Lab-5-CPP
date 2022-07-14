#pragma once
#include "Item.h"
class Book :
    public Item
{
public:
    Book();
    Book(string inTitle, string inAuthor, int inIsbnNum);

    void getListing() override;
    string getAuthor();
    int getIsbnNum();
    void setAuthor(string inAuthor);
    void setIsbnNum(int inIsbnNum);

private:
    string author;
    int isbnNum;

};

