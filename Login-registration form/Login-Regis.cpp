#include <iostream>
#include <fstream>
#include <string.h>
// #include<stdlib.h>
  
using namespace std;

void login();
void registration();
void forgot();

int main()
{

    int c;

    cout << "\t\t\t--------------------------------------------------------------------------------------\n\n\n";
    cout << "\t\t\t                              WELCOME TO LOGIN PAGE                                   \n\n\n";
    cout << "\t\t\t--------------------------------------------------------------------------------------\n\n\n";
    cout << "\t\t\t_______________________________________MENU_____________________________________________\n\n";
    cout << "                                                                                              \n\n";

    cout << "\t| PRESS 1 to LOGIN                          |\n";
    cout << "\t| PRESS 2 to REGISTER                       |\n";
    cout << "\t| PRESS 3 if you forgot your PASSWORD       |\n";
    cout << "\t| PRESS 4 to EXIT                           |\n";

    cout << "\n\t\t\tPLease Enter Your Choice :";
    cin >> c;
    cout << endl;

    switch (c)
    {
    case 1:
        login();
        break;

    case 2:
        registration();
        break;

    case 3:
        forgot();
        break;

    case 4:
        cout << "\t\t\t Thank You!!!!!  \n\n";
        break;

    default:
        // system("cls");
        cout << "\t\t\t Please select from the option given above \n"
             << endl;
        main();
    }

    return 0;
}

void login()
{

    int count;
    string userId, password, id, pass;
    // system("cls");
    cout << "\t\t\t Please enter the username and password : " << endl;
    cout << "\t\t\t USERNAME : ";
    cin >> userId;
    cout << "\t\t\t PASSWORD : ";
    cin >> password;

    ifstream input("records.txt");

    while (input >> id >> pass)
    {
        if (id == userId && pass == password)
        {
            count = 1;
            // system("cls");
        }
    }
    input.close();

    if (count == 1)
    {
        cout << userId << "\n LOGIN Successful \n Thanks For Logging in \n";
        main();
    }
    else
    {
        cout << "\n LOGIN ERROR \n Please check your USERNAME and PASSWORD \n";
        main();
    }
}

void registration()
{
    string ruser, rpassword, rid, rpass;
    // system("cls");
    cout << "\t\t\t Enter the Username :";
    cin >> ruser;
    cout << "\t\t\t Enter the Password :";
    cin >> rpassword;

    ofstream f1("records.txt", ios::app);
    f1 << ruser << ' ' << rpassword << endl;
    // system("cls");
    cout << "\n\t\t\t Registration Successful!!! \n";
    main();
}

void forgot()
{
    int option;
    // system("cls");
    cout << "\t\t\tYou forgot the password? No worries \n";
    cout << "Press 1 to search your ID by your Username\n";
    cout << "Press 2 to go back to main menu \n";
    cout << "\t\t\t Enter your choice :";
    cin >> option;

    switch (option)
    {
    case 1:
    {

        int count = 0;
        string suserid, sid, spass;
        cout << "\n\t\t\t Enter the username which you remebered ";
        cin >> suserid;

        ifstream f2("records.txt");
        while (f2 >> sid >> spass)
        {
            if (sid == suserid)
            {
                count = 1;
            }
        }
        f2.close();

        if (count == 1)
        {
            cout << "\n\n Your account is found! \n";
            cout << "\n Your Password is :" << spass;
            main();
        }
        else
        {
            cout << "\n\t Sorry, Your account is not found!! \n";
            main();
        }
        break;
    }
    case 2:
    {
        main();
        break;
    }

    default:
        cout << "\t\t\t invalid choice!! Please try again " << endl;
        forgot();
    }
}