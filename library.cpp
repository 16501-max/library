#include <iostream>
#include "book.h"


using namespace std;
int main()
{

    cout << boolalpha;

    // create array of books
    book listOfBooks[5];

    // init books
    // index into array and populate the book with setBookDetail method
    listOfBooks[0].setBookDetails("Neuromancer", "William Gibson", "9780441569595", true, "2026-03-12");
    listOfBooks[1].setBookDetails("Snow Crash", "Neal Stephenson", "9780553380958", true, "2026-06-21");
    listOfBooks[2].setBookDetails("Do Androids Dream of Electric Sheep?", "Philip K. Dick", "9780345404473", false, "2026-01-17");
    listOfBooks[3].setBookDetails("Altered Carbon", "Richard K. Morgan", "9780345457684", true, "2026-08-09");
    listOfBooks[4].setBookDetails("Ready Player One", "Ernest Cline", "9780307887443", false, "2026-11-02");



    // ----- sort the book list based on ISBN

    int len = 5;

    for (int i=0;i<(len-1);i++)
        {
            int j = i+1;
            while (j > 0 && listOfBooks[j].isbn < listOfBooks[j-1].isbn )
                {
                    //swap
                    book temp;
                    temp = listOfBooks[j-1];
                    listOfBooks[j-1] = listOfBooks[j];
                    listOfBooks[j] = temp;
                    j = j-1;
                }
                
        }
    

    //  -------------- main -----------

    string userResponse;
    bool exit = false;

    while (! exit)
    {   
        

        //display  menu

        cout << " ***************************************************************************************"<< endl;
        cout << " *                                                                                     *"<< endl;
        cout << " *                                                                                     * "<< endl;
        cout << " *-*-*-*-*-*-*-*-*-*-*-*-*-*-*      L  I  B  R  A  R  Y      *-*-*-*-*-*-*-*-*-*-*-*-*-* "<< endl;
        cout << " *                                                                                     * "<< endl;
        cout << " *                                                                                     * "<< endl;
        cout << " ***************************************************************************************"<< endl;
        cout << " "<< endl;
        cout << " "<< endl;
        cout << " "<< endl;
        cout << " ***************************************************************************************"<< endl;
        cout << " *                                                                                     * "<< endl;
        cout << " *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*       M E N U         *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-* " << endl;
        cout << " *                                                                                     * "<< endl;
        cout << " ***************************************************************************************"<< endl;
        cout << " *                                                                                     * "<< endl;
        cout << " *                                                                                     * "<< endl;
        cout << " *    Display All Books             ------- [Type 1 and Enter]                         *" << endl;
        cout << " *    Borrow book                   ------- [Type 2 and Enter]                         *"<< endl;
        cout << " *    Return book                   ------- [Type 3 and Enter]                         *"<< endl;
        cout << " *    Quit Programm                 ------- [Type 0 and Enter]                         *"<< endl;
        cout << " *                                                                                     * "<< endl;
        cout << " *                                                                                     * "<< endl;
        cout << " ***************************************************************************************"<< endl;
        cout << " "<< endl;

        // prompt user for option

        cout << "Enter one of the options above -> ";
        cin >> userResponse;

        if (userResponse == "1")
        {
            cout << " *****************************************************************"<< endl;
            cout << endl;
            cout << " ------------------   DISPLAY ALL BOOKS  ------------------- " << endl;
            cout << endl;
            cout << endl;
            for (int i = 0; i<5; i++)
            {
                book myBook = listOfBooks[i];
                myBook.displayBookDetails();
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;


            }


        }
        else if (userResponse == "2")
        {
            
            cout << " *****************************************************************"<< endl;
            cout << endl;
            cout << " ------------------   Borrow book  ------------------- " << endl;
            cout << endl;
            cout << endl;


            // init variables

            string userIsbn;
            bool foundBook = false;

            cout << "Type the ISBN and hit Enter -> ";
            cin >> userIsbn;
            cout<< endl;
            cout<< endl;

            // iterate through array and check for isbn match
            for(int i = 0; i<5; i++)
            {
                if (listOfBooks[i].isbn == userIsbn)
                {
                    cout << "Book " << listOfBooks[i].title << " found!" << endl;
                    listOfBooks[i].borrowBook();
                    foundBook = true;

                }

            }

            if (foundBook == false)
            {
                cout << endl;
                cout << endl;
                cout << "We havent found the book you are looking for .... " << endl;
                cout << endl;
                cout << endl;
                cout << "Please enter a valid IBSN ...!";
                cout << endl;
                cout << endl;
            }

        }
        else if (userResponse == "3")
        {
            
            cout << " *****************************************************************"<< endl;
            cout << endl;
            cout << " ------------------   Return book  ------------------- " << endl;
            cout << endl;
            cout << endl;


            // init variables

            string userIsbn;
            bool foundBook = false;

            cout << "Type the ISBN and hit Enter -> ";
            cin >> userIsbn;
            cout<< endl;
            cout<< endl;

            for(int i = 0; i<5; i++)
            {
                // iterate through array and check for isbn match
                if (listOfBooks[i].isbn == userIsbn)
                {
                    cout << "Book " << listOfBooks[i].title << " found!" << endl;
                    listOfBooks[i].returnBook();
                    foundBook = true;

                }

            }

            if (foundBook == false)
            {
                cout << endl;
                cout << endl;
                cout << "We havent found the book you are looking for .... " << endl;
                cout << endl;
                cout << endl;
                cout << "Please enter a valid IBSN ...!";
                cout << endl;
                cout << endl;
            }


        }
        else if (userResponse == "0")
        {
            cout << endl;
            cout << "Thank you for visiting the library..." << endl;
            cout << endl;
            cout << endl;
            cout << "  ------------ Good bye! ------------------ "<< endl;
            cout << endl;
            exit = true;
        }


    }





}



