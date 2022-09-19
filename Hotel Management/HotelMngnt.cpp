#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    
    //Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;

    //Food items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;

    //Total price of items
    int Trooms=0, Tpasta=0, Tburger=0, Tnoodles=0, Tshake=0, Tchicken=0;

    cout<<"\n\tQuantity of items we have in a HOTEL";
    cout<<"\n ROOMS available :";
    cin>>Qrooms;
    cout<<"\n Quantity of PASTA :";
    cin>>Qpasta;
    cout<<"\n Quantity of BURGER :";
    cin>>Qburger;
    cout<<"\n Quantity of NOODLES :";
    cin>>Qnoodles;
    cout<<"\n Quantity of SHAKES :";
    cin>>Qshake;
    cout<<"\n Quantity of CHICKEN-ROLL :";
    cin>>Qchicken;

    m:
    cout<<"\n\n________________________________________XYZ HOTEL________________________________________";
    cout<<"\n\n\n\n-----------------------------------------------------------------------------------------";
    cout<<"\n\n                                        MAIN-MENU                                        ";
    cout<<"\n\n-----------------------------------------------------------------------------------------";
    cout<<"\n\t\t\tPlease select your option from the main menu";
    cout<<"\n\n1)ROOMS ";
    cout<<"\n2)PASTA ";
    cout<<"\n3)BURGER ";
    cout<<"\n4)NOODLES ";
    cout<<"\n5)SHAKE ";
    cout<<"\n6)CHICKEN-ROLL ";
    cout<<"\n7)INFORMATION REGARDING SALES & COLLECTION ";
    cout<<"\n8)EXIT ";

    cout<<"\n\n Please Enter Your Choice! ";
    cin>>choice;

    switch(choice)
    {
        case 1 :
            cout<<"\n\n Enter number of rooms do you want :";
            cin>>quant;

            if(Qrooms-Srooms>=quant)
            {
                Srooms+=quant;
                Trooms = Trooms+(quant*1500);
                cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you!!";
            }
            else
            {
                cout<<"\n\tOnly"<<Qrooms-Srooms<<" Rooms remaining in the hotel!!";
            }
            break;

        case 2 :
            cout<<"\n\n Enter Pasta quantity :";
            cin>>quant;

            if(Qpasta-Spasta>=quant)
            {
                Spasta+=quant;
                Tpasta = Tpasta+(quant*300);
                cout<<"\n\n\t\t"<<quant<<" pasta is the order !!";
            }
            else
            {
                cout<<"\n\tOnly"<<Qpasta-Spasta<<" pasta remaining in the hotel!!";
            }
            break;

        case 3 :
            cout<<"\n\n Enter Burger quantity :";
            cin>>quant;

            if(Qburger-Sburger>=quant)
            {
                Sburger+=quant;
                Tburger = Tburger+(quant*100);
                cout<<"\n\n\t\t"<<quant<<" burgers is the order!!";
            }
            else
            {
                cout<<"\n\tOnly"<<Qburger-Sburger<<" Burgers remaining in the hotel!!";
            }
            break;

        case 4 :
            cout<<"\n\n Enter Noodles quantity :";
            cin>>quant;

            if(Qnoodles-Snoodles>=quant)
            {
                Snoodles+=quant;
                Tnoodles = Tnoodles+(quant*225);
                cout<<"\n\n\t\t"<<quant<<" noodles is the order!!";
            }
            else
            {
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" Noodles remaining in the hotel!!";
            }
            break;
        case 5 :
            cout<<"\n\n Enter Shake quantity :";
            cin>>quant;

            if(Qshake-Sshake>=quant)
            {
                Sshake+=quant;
                Tshake = Tshake+(quant*400);
                cout<<"\n\n\t\t"<<quant<<" shakes is the order!!";
            }
            else
            {
                cout<<"\n\tOnly"<<Qshake-Sshake<<" Shakes remaining in the hotel!!";
            }
            break;
        case 6 :
            cout<<"\n\n Enter Chicken-Roll quantity :";
            cin>>quant;

            if(Qchicken-Schicken>=quant)
            {
                Schicken+=quant;
                Tchicken = Tchicken+(quant*700);
                cout<<"\n\n\t\t"<<quant<<" chicken is the order!!";
            }
            else
            {
                cout<<"\n\tOnly"<<Qchicken-Schicken<<" Chicken-Roll remaining in the hotel!!";
            }
            break;
        
        case 7 :
            cout<<"\n\t\tDetails of sales and collection ";
            cout<<"\n\n Number of rooms we had :"<<Qrooms;
            cout<<"\n\n Number of rooms we gave for rent :"<<Srooms;
            cout<<"\n\n Remaining rooms :"<<Qrooms-Srooms;
            cout<<"\n\n Total rooms collection for the day :"<<Trooms;

            cout<<"\n\n Number of Pasta we had :"<<Qpasta;
            cout<<"\n\n Number of Pasta we sold :"<<Spasta;
            cout<<"\n\n Remaining Pasta :"<<Qpasta-Spasta;
            cout<<"\n\n Total Pasta collection for the day :"<<Tpasta;

            cout<<"\n\n Number of Burger we had :"<<Qburger;
            cout<<"\n\n Number of Burger we sold :"<<Sburger;
            cout<<"\n\n Remaining Burger :"<<Qburger-Sburger;
            cout<<"\n\n Total Burger collection for the day :"<<Tburger;

            cout<<"\n\n Number of Noodles we had :"<<Qnoodles;
            cout<<"\n\n Number of Noodles we sold :"<<Snoodles;
            cout<<"\n\n Remaining Noodles :"<<Qnoodles-Snoodles;
            cout<<"\n\n Total Noodles collection for the day :"<<Tnoodles;

            cout<<"\n\n Number of Shake we had :"<<Qshake;
            cout<<"\n\n Number of Shake we sold :"<<Sshake;
            cout<<"\n\n Remaining Shake :"<<Qshake-Sshake;
            cout<<"\n\n Total Shake collection for the day :"<<Tshake;

            cout<<"\n\n Number of Chicken-Roll we had :"<<Qchicken;
            cout<<"\n\n Number of Chicken-Roll we sold :"<<Schicken;
            cout<<"\n\n Remaining Chicken-Roll :"<<Qchicken-Schicken;
            cout<<"\n\n Total Chicken-Roll collection for the day :"<<Tchicken;

            cout<<"\n\n Total collection for the day :"<<Trooms+Tburger+Tnoodles+Tshake+Tpasta+Tchicken;
            break;

        case 8 :
            exit(0);

        default :
            cout<<"\n Please select the options mentioned above!!";
    }
    goto m;


 return 0;
}