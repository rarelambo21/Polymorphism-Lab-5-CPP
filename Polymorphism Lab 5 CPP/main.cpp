// Polymorphism Lab 5 CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Item.h"
#include "Book.h"
#include "Periodical.h"
#include <memory>
#include <vector>

int main()
{
    vector<unique_ptr<Item>> items;

    char c;
    string title, author;
    int isbn;

    for (int i = 0; i < 5; i++)
    {
        cout << "Please enter B for Book or P for Periodical" << endl;
        cin >> c;

        c = toupper(c);

        cin.ignore();
        if (c == 'B')
        {
            cout << "Please enter the name of the Book" << endl;
            getline(cin, title);

            cout << "Please enter the author of the Book" << endl;
            getline(cin, author);

            cout << "Please enter the ISBN of the Book" << endl;
            cin >> isbn;

            items.emplace_back(make_unique<Book>(title, author, isbn));

            title = "";
            author = "";
            isbn = -1;
        }
        else if (c == 'P')
        {
            cout << "Please enter the name of Periodical" << endl;
            getline(cin, title);

            cout << "Please enter the issue number" << endl;
            cin >> isbn;

            items.emplace_back(make_unique<Periodical>(title, isbn));

            title = "";
            isbn = -1;
        }

    }

    cout << endl;
    cout << "Your Items: " << endl;
    for (const auto& item : items)
    {
        item->getListing();
    }
}
