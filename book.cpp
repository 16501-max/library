#include<iostream>
#include"book.h"

using namespace std;


// create full methods

void book::setBookDetails(string title, string author, string isbn, bool availability, string dateAdd)
{
    this->title = title;
    this->author = author;
    this->isbn = isbn;
    this->availability = availability;
    this->dateAdd = dateAdd;

}

void book::displayBookDetails()
{
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Availability: " << availability << endl;
    cout << "Added on date: " << dateAdd << endl;
}

void book::borrowBook()
{
    if (availability == true)
    {
        cout << "You successfully borrowed the book " << title << endl;
        availability = false;
    }
    else
    {
        cout << "The book " << title << " is allready borrowed" << endl;
    }
}

void book::returnBook()
{
    availability = true;
    cout << "You have returned the book " << title << " sucessfully" << endl;
    cout << "Thank you!";
}