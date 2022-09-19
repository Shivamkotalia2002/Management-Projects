#include <iostream>
#include <fstream>
using namespace std;

class shopping
{
private:
    int pcode;
    float price;
    float dis;
    string pname;

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void shopping::menu()
{

m:
    int choice;
    string email;
    string password;

    cout << "\t\t\t\t\t--------------------------------------------------------------------\n";
    cout << "\t\t\t\t\t                                                                    \n";
    cout << "\t\t\t\t\t                    SUPERMARKET MAIN MENU                           \n";
    cout << "\t\t\t\t\t                                                                    \n";
    cout << "\t\t\t\t\t--------------------------------------------------------------------\n";
    cout << "\t\t\t\t\t|                                                                  |\n";
    cout << "\t\t\t\t\t|               1) Administrator                                   |\n";
    cout << "\t\t\t\t\t|                                                                  |\n";
    cout << "\t\t\t\t\t|               2) Buyer                                           |\n";
    cout << "\t\t\t\t\t|                                                                  |\n";
    cout << "\t\t\t\t\t|               3) Exit                                            |\n";
    cout << "\t\t\t\t\t|                                                                  |\n";

    cout << "\n\t\tPlease Select Your Option : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\t\tPlease Login  \n";
        cout << "\t\t\tEnter Email:   ";
        cin >> email;
        cout << "\t\t\tEnter Password: ";
        cin >> password;

        if (email == "Shivamkotalia@gmail.com" && password == "Shivam@123")
        {
            administrator();
        }
        else
        {
            cout << "\nInvalid Email/Password!!!!\n";
        }
        break;

    case 2:
        buyer();
        break;

    case 3:
        exit(0);

    default:
        cout << "\nInvalid Input , Please select given options!!!!!\n";
    }
    goto m;
}

void shopping::administrator()
{

m:
    int choice;
    cout << "\n\n\t\t\t___________________________________________________";
    cout << "\n\n\t\t\t             ADMINISTRATIVE MENU                   ";
    cout << "\n\n\t\t\t___________________________________________________";
    cout << "\n\t\t\t|             1) Add the Product                    |";
    cout << "\n\t\t\t|                                                   |";
    cout << "\n\t\t\t|             2) Modify the Product                 |";
    cout << "\n\t\t\t|                                                   |";
    cout << "\n\t\t\t|             3) Delete the Product                 |";
    cout << "\n\t\t\t|                                                   |";
    cout << "\n\t\t\t|             4) Back to Main Menu                  |";
    cout << "\n\t\t\t|                                                   |";

    cout << "\n\n\t Enter your choice ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        add();
        break;

    case 2:
        edit();
        break;

    case 3:
        rem();
        break;

    case 4:
        menu();
        break;

    default:
        cout << "\nInvalid choice!!!!";
    }
    goto m;
}

void shopping::buyer()
{

m:

    int choice;

    cout << "\n\n\t\t\t___________________________________________________";
    cout << "\n\n\t\t\t                  BUYER'S MENU                     ";
    cout << "\n\n\t\t\t___________________________________________________";
    cout << "\n\t\t\t|                1) Buy Product                     |";
    cout << "\n\t\t\t|                                                   |";
    cout << "\n\t\t\t|                2) Back to main Menu               |";
    cout << "\n\t\t\t|                                                   |";

    cout << "\n\n\t Enter your choice ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        receipt();
        break;

    case 2:
        menu();
        break;

    default:
        cout << "\nInvalid Choice!!!\n";
    }
    goto m;
}

void shopping::add()
{
m:

    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;

    cout << "\n\n\t\t\tAdd New Product : ";
    cout << "\n\n\tProduct Code of the Product : ";
    cin >> pcode;
    cout << "\n\n\tName of the Product : ";
    cin >> pname;
    cout << "\n\n\tPrice of the Product : Rs.";
    cin >> price;
    cout << "\n\n\tDiscount on the Product : ";
    cin >> dis;

    data.open("database.txt", ios::in);

    if (!data)
    {
        data.open("database.txt", ios::app | ios::out);
        data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
        data.close();
    }
    else
    {
        data >> c >> n >> p >> d;

        while (!data.eof())
        {
            if (c == pcode)
            {
                token++;
            }
            data >> c >> n >> p >> d;
        }

        data.close();

        if (token == 1)
        {
            goto m;
        }
        else
        {
            data.open("database.txt", ios::app | ios::out);
            data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            data.close();
        }
    }

    cout << "\n\n\t\t Record Inserted!!! ";
}

void shopping::edit()
{

    fstream data, data1;
    int pkey;
    int token = 0;
    float p;
    int c;
    float d;
    string n;
    cout << "\n\t\t\tModify the Product ";
    cout << "\n\t\tProduct Code :";
    cin >> pkey;

    data.open("database.txt", ios::in);

    if (!data)
    {
        cout << "\n\n File does not exist!  ";
    }

    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> pname >> price >> dis;

        while (!data.eof())
        {
            if (pkey == pcode)
            {
                cout << "\n\t\tProduct New Code : ";
                cin >> c;
                cout << "\n\n\tName of the Product : ";
                cin >> n;
                cout << "\n\n\tPrice of the Product : Rs.";
                cin >> p;
                cout << "\n\n\tDiscount on the Product : ";
                cin >> d;
                data1 << " " << c << " " << n << " " << p << " " << d << "\n";
                cout << "\n\n\t\tRecord edited!!\n";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "\n\nRecord Not Found ,Sorry!!";
        }
    }
}

void shopping::rem()
{

    fstream data, data1;
    int pkey;
    int token = 0;
    cout << "\n\n\t Delete Product";
    cout << "\n\n\t Product Code : ";
    cin >> pkey;

    data.open("database.txt", ios::in);

    if (!data)
    {
        cout << "\nFile does not exist";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> pname >> price >> dis;

        while (!data.eof())
        {
            if (pcode == pkey)
            {
                cout << "\n\n\tPRoduct Deleted Successfully!!!";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "\n\nRecord Not Found ,Sorry!!";
        }
    }
}

void shopping::list()
{

    fstream data;
    data.open("database.txt", ios::in);
    cout << "\n\n|_____________________________________________________________________\n";
    cout << "ProNo\t\tName\t\tPrice\n";
    cout << "\n\n|_____________________________________________________________________\n";
    data >> pcode >> pname >> price>>dis;

    while (!data.eof())
    {
        cout << pcode << "\t\t" << pname << "\t\t" << price << "\n";
        data >> pcode >> pname >> price >> dis;
    }
    data.close();
}

void shopping::receipt()
{
    fstream data;
    int arrc[100];
    int arrq[100];
    char choice;
    int c = 0;
    float amount = 0;
    float dis = 0;
    float total = 0;
    cout << "\n\n\t--------------------------------------------------------------------------\n";
    cout << "\n\n\t                             RECIEPT                                      \n";
    cout << "\n\n\t--------------------------------------------------------------------------\n";

    data.open("database.txt", ios::in);

    if (!data)
    {
        cout << "\n\nEmpty database ";
    }
    else
    {
        data.close();

        list();

        cout << "\n_________________________________________________";
        cout << "\n|                                               |";
        cout << "\n|               PLACE YOUR ORDER                |";
        cout << "\n|                                               |";
        cout << "\n_________________________________________________";

        do
        {
        m:
            cout << "\n\nEnter Product Code :";
            cin >> arrc[c];
            cout << "\n\nEnter the Product Quantity :";
            cin >> arrq[c];

            for (int i = 0; i < c; i++)
            {
                if (arrc[c] == arrc[i])
                {
                    cout << "\n\nDuplicate Product Code, Please Try Again!!! ";
                    goto m;
                }
            }
            c++;
            cout << "\n\nDyou want Buy another product? If yes then press y and n for no : ";
            cin >> choice;
        } while (choice == 'y');

        cout << "\n\n\t\t\t____________________________RECIEPT___________________________\n";
        cout << "\nProduct No.\t Product Name\t Product Quantity\t Price\t Amount\t Amount With Discount\n";

        for (int i = 0; i < c; i++)
        {
            data.open("database.txt", ios::in);
            data >> pcode >> pname >> price >> dis;

            while (!data.eof())
            {
                if (pcode == arrc[i])
                {
                    amount = price * arrq[i];
                    dis = amount - (amount * dis / 100);
                    total=total+ dis;
                    cout << "\n"
                         << pcode << "\t\t" << pname << "\t\t" << arrq[i] << "\t\t" << price << "\t\t" << amount << "\t\t" << dis;
                }
                data >> pcode >> pname >> price >> dis;
            }
        }

        data.close();
    }

    cout << "\n\n__________________________________________________________\n";
    cout << "\n Total Amount : Rs." << total;
    cout << "\n\n__________________________________________________________\n";
}
int main()
{
    shopping s;

    s.menu();

    return 0;
}