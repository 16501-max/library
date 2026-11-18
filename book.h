#include<iostream>

using namespace std;

class book
{
private:

public:

// attributes

    string title;
    string author;
    string isbn;
    bool availability;
    string dateAdd;

// methods

void setBookDetails(string title, string author, string isbn, bool availability, string dateAdd);
void displayBookDetails();
void borrowBook();
void returnBook();

};