#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <string>
using namespace std;

void Main_Menu();

class Management
{
public:
    Management()
    {
        Main_Menu();
    }
};

class details
{

public:
    static string name,gender;
    long long int PhoneNo;
     static int age;
    string add;
    static int cId;
    char arr[150];

    void information()
    {
        cout << "\nEnter the Customer Id: ";
        cin >> cId;
        cout << "\nEnter your Name: ";
        cin >> name;
        cout << "\nEnter your Age: ";
        cin >> age;
        cout << "\nYour Address: ";
        cin >> add;
        cout << "\nEnter your Gender: ";
        cin >> gender;
        cout << endl;
        cout << "\nYour Details are saved with us, Thank You\n"
             << endl;
    }
};

int details::cId;
string details::name;
string details::gender;
int details::age;

class registration
{

public:
    static int choice;
    int choice1;
    static float charges;
    int back;

    void flight()
    {
        string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};

        for (int a = 0; a < 6; a++)
        {
            cout << (a + 1) << ".flight to  " << flightN[a] << endl;
        }
        cout << "\nWelcome to the Airlines!" << endl;
        cout << "\nSelect Your country of which you want to book the flight: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "_____________________WELCOME TO DUBAI EMIRATES____________________\n"
                 << endl;
            cout << "Your comfort is our priority, Enjoy your journey!" << endl;

            cout << "Following are the flights \n"
                 << endl;

            cout << "1. DUB-864" << endl;
            cout << "\t27-08-2022  8:00AM  10hrs  Rs. 14000" << endl;
            cout << "2. DUB-64" << endl;
            cout << "\t28-08-2022  11:00AM  9hrs  Rs. 16000" << endl;
            cout << "3. DUB-563" << endl;
            cout << "\t29-08-2022  15:00PM  13hrs  Rs. 9000" << endl;

            cout << "\nSelect the flight which you want to book" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 14000;
                cout << "\nYou have successfully booked the flight DUB-864" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 16000;
                cout << "\nYou have successfully booked the flight DUB-64" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 9000;
                cout << "\nYou have successfully booked the flight DUB-563" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else
            {
                cout << "\nInvalid input,c shifting to the previous menu: ";
                flight();
            }
            cout << "Press any key to go Main Menu  \n"
                 << endl;
            cin >> back;
            if (back == 1)
            {
                Main_Menu();
            }
            else
            {
                Main_Menu();
            }
            break;

        case 2:
            cout << "_____________________WELCOME TO CANADIAN AIRLINES____________________\n"
                 << endl;
            cout << "Your comfort is our priority, Enjoy your journey!" << endl;

            cout << "Following are the flights \n"
                 << endl;

            cout << "1. CN-168" << endl;
            cout << "\t25-08-2022  6:00AM  20hrs  Rs. 32000" << endl;
            cout << "2. CN-08" << endl;
            cout << "\t27-08-2022  13:00PM  19hrs  Rs. 40000" << endl;
            cout << "3. CN-446" << endl;
            cout << "\t30-08-2022  17:00PM  23hrs  Rs. 23000" << endl;

            cout << "\nSelect the flight which you want to book" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 32000;
                cout << "\nYou have successfully booked the flight CN-168" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 40000;
                cout << "\nYou have successfully booked the flight CN-08" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 23000;
                cout << "\nYou have successfully booked the flight CN-446" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else
            {
                cout << "\nInvalid input,c shifting to the previous menu: ";
                flight();
            }
            cout << "Press any key to go Main Menu  \n"
                 << endl;
            cin >> back;
            if (back == 1)
            {
                Main_Menu();
            }
            else
            {
                Main_Menu();
            }
            break;

        case 3:
            cout << "_____________________WELCOME TO UK AIRWAYS____________________\n"
                 << endl;
            cout << "Your comfort is our priority, Enjoy your journey!" << endl;

            cout << "Following are the flights \n"
                 << endl;

            cout << "1. UK-78" << endl;
            cout << "\t20-08-2022  10:00AM  13hrs  Rs. 36000" << endl;

            cout << "\nSelect the flight which you want to book" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 36000;
                cout << "\nYou have successfully booked the flight UK-78" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else
            {
                cout << "\nInvalid input,c shifting to the previous menu: ";
                flight();
            }
            cout << "Press any key to go Main Menu  \n"
                 << endl;
            cin >> back;
            if (back == 1)
            {
                Main_Menu();
            }
            else
            {
                Main_Menu();
            }
            break;
        case 4:
            cout << "_____________________WELCOME TO US AIRWAYS____________________\n"
                 << endl;
            cout << "Your comfort is our priority, Enjoy your journey!" << endl;

            cout << "Following are the flights \n"
                 << endl;

            cout << "1. US-68" << endl;
            cout << "\t31-08-2022  14:30AM  15hrs  Rs. 21500" << endl;
            cout << "2. US-758" << endl;
            cout << "\t31-08-2022  19:45PM  12hrs  Rs. 32800" << endl;

            cout << "\nSelect the flight which you want to book" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 21500;
                cout << "\nYou have successfully booked the flight US-758" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 32800;
                cout << "\nYou have successfully booked the flight US-342" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else
            {
                cout << "\nInvalid input,c shifting to the previous menu: ";
                flight();
            }
            cout << "Press any key to go Main Menu  \n"
                 << endl;
            cin >> back;
            if (back == 1)
            {
                Main_Menu();
            }
            else
            {
                Main_Menu();
            }
            break;
        case 5:
            cout << "_____________________WELCOME TO AUSTRALIAN AIRLINES____________________\n"
                 << endl;
            cout << "Your comfort is our priority, Enjoy your journey!" << endl;

            cout << "Following are the flights \n"
                 << endl;

            cout << "1. AUS-28" << endl;
            cout << "\t23-08-2022  7:00AM  10hrs  Rs. 28000" << endl;
            cout << "2. AUS-08" << endl;
            cout << "\t24-08-2022  13:40PM  11hrs  Rs. 22300" << endl;
            cout << "3. AUS-446" << endl;
            cout << "\t26-08-2022  17:45PM  14hrs  Rs. 30000" << endl;
            cout << "4. AUS-987" << endl;
            cout << "\t27-08-2022  02:45AM  08hrs  Rs. 33300" << endl;

            cout << "\nSelect the flight which you want to book" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 28000;
                cout << "\nYou have successfully booked the flight AUS-28" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 22300;
                cout << "\nYou have successfully booked the flight AUS-08" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 30000;
                cout << "\nYou have successfully booked the flight AUS-446" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else if (choice1 == 4)
            {
                charges = 30000;
                cout << "\nYou have successfully booked the flight AUS-987" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else
            {
                cout << "\nInvalid input,c shifting to the previous menu: ";
                flight();
            }
            cout << "Press any key to go Main Menu  \n"
                 << endl;
            cin >> back;
            if (back == 1)
            {
                Main_Menu();
            }
            else
            {
                Main_Menu();
            }
            break;
        case 6:
            cout << "_____________________WELCOME TO EUR EMIRATES____________________\n"
                 << endl;
            cout << "Your comfort is our priority, Enjoy your journey!" << endl;

            cout << "Following are the flights \n"
                 << endl;

            cout << "1. EU-01" << endl;
            cout << "\t21-08-2022  03:00AM  17hrs  Rs. 16000" << endl;
            cout << "2. EU-589" << endl;
            cout << "\t24-08-2022  10:50AM  20hrs  Rs. 17500" << endl;
            cout << "3. EU-878" << endl;
            cout << "\t27-08-2022  20:00PM  23hrs  Rs. 20300" << endl;

            cout << "\nSelect the flight which you want to book" << endl;
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 16000;
                cout << "\nYou have successfully booked the flight EU-01" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 17500;
                cout << "\nYou have successfully booked the flight EU-589" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 20300;
                cout << "\nYou have successfully booked the flight EU-878" << endl;
                cout << "\nYou can go to main menu and take the tickets" << endl;
            }
            else
            {
                cout << "\nInvalid input,c shifting to the previous menu: ";
                flight();
            }
            cout << "\nPress any key to go Main Menu  \n"
                 << endl;
            cin >> back;
            if (back == 1)
            {
                Main_Menu();
            }
            else
            {
                Main_Menu();
            }
            break;
        default:
            cout << "Invalid input, Please try again!!\n"
                 << endl;
            Main_Menu();
            break;
        }
    }
};

float registration::charges;
int registration::choice;

class tickets : public registration, public details
{
public:
    void bill()
    {
        string destination = "";
        ofstream out("records.txt");
        {
            out << "\n______________XYZ AIRLINES____________" << endl;
            out << "\n________________TICKETS_______________" << endl;
            out << "\n--------------------------------------" << endl;

            out << "Customer ID: " << details::cId << endl;
            out << "Customer NAME: " << details::name << endl;
            out << "Customer AGE: " << details::age << endl;
            out << "\n\n\tDESCRIPTION\t\t\n\n" << endl;

            if (registration::choice == 1)
            {
                destination = "DUBAI";
            }
            else if (registration::choice == 2)
            {
                destination = "CANADA";
            }
            else if (registration::choice == 3)
            {
                destination = "UK";
            }
            else if (registration::choice == 4)
            {
                destination = "USA";
            }
            else if (registration::choice == 5)
            {
                destination = "AUSTRALIA";
            }
            else if (registration::choice == 6)
            {
                destination = "EUROPE";
            }

            out << "Destination :\t\t" << destination << endl;
            out << "Flight Cost :\t\t" << registration::charges << endl;
            out << "\n--------------------------------------" << endl;
        }
        out.close();
    }
    void display()
    {
        ifstream ifs("records.txt");
        {
            if (!ifs)
            {
                cout << "File error!" << endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 150);
                cout << arr << endl;
            }
        }
    }
};

void Main_Menu()
{
    int lchoice;
    int schoice;
    int back;

    cout << "\n\n\t                                    XYZ Airlines                                \n"
         << endl;
    cout << endl
         << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl
         << endl;
    cout << "\t                                    MAIN MENU                 \n"
         << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;
    cout << "                 \t|\t\t\t\t\t\t|" << endl;

    cout << "                \t|\t 1.Enter the Customer Details         \t|" << endl;
    cout << "                \t|\t 2.Complete Flight Registration       \t|" << endl;
    cout << "                \t|\t 3.For Tickets and Charges            \t|" << endl;
    cout << "                \t|\t 4.Exit                               \t|" << endl;

    cout << "                \t|\t\t\t\t\t\t|" << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;

    cout << "\nSelect your option: \n";
    cin >> lchoice;

    details d;
    registration r;
    tickets t;

    switch (lchoice)
    {
    case 1:
        cout << "\n_____________CUSTOMERS_____________\n"
             << endl;
        d.information();
        cout << "\nPress any key to go Main Menu  \n"
             << endl;
        cin >> back;
        if (back == 1)
        {
            Main_Menu();
        }
        else
        {
            Main_Menu();
        }
        break;
    case 2:
        cout << "\n_____Book Your Flight,WOOOH!!!______\n"
             << endl;
        r.flight();
        break;
    case 3:
        cout << "\n__________GET YOUR TICKETS__________\n"
             << endl;
        t.bill();

        cout << "\nYour tickets is book, you can collect it \n"
             << endl;
        cin >> back;

        if (back == 1)
        {
            t.display();
            cout << "\nPress any key to go Main Menu  \n"
                 << endl;
            cin >> back;
            if (back == 1)
            {
                Main_Menu();
            }
            else
            {
                Main_Menu();
            }
        }
        else
        {
            Main_Menu();
        }
        break;
    case 4:
        cout << "\n\n\t_________THANK-YOU, VISIT AGAIN_________\n"
             << endl;
        break;
    default:
        cout << "Invalid input, Please try again!!\n"
             << endl;
        Main_Menu();
        break;
    }
}
int main()
{
    Management Mobj;
    return 0;
}