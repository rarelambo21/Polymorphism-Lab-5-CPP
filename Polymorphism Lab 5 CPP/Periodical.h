#pragma once
#include "Item.h"
class Periodical :
    public Item
{
public:
    Periodical();
    Periodical(string inTitle, int inIsbnNum);

    void getListing() override;
    int getIsbnNum();
    void setIsbnNum(int inIsbnNum);

private:
    int isbnNum;
};

