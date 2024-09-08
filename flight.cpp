#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class management {
    public: 
        management(){
            mainMenu();
        }
};

class Details
{
    public:
        static string name, gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information()
        {
            cout<<"\nEnter the customer ID: ";
            cin>>cId;
            cout<<"\nPhone No:";
            cin>>phoneNo;
            cout<<"\nEnter the name: ";
            cin>>name;
            cout<<"\nEnter the age: ";
            cin>>age;
            cout<<"\nAddress: ";
            cin>>add;
            cout<<"\ngender: ";
            cin>>gender;
            cout<<"Your details are saved with us: ";
        }
};

int Details::cId;
string Details::name;
string Details::gender;

class Registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"Dubai", "UK", "USA", "Australia", "Canada"};

            for(int a=0; a<6; a++){
                cout<<(a+1)<<". Flight to "<<flightN[a]<<endl;

            }
            cout<< "\nWelcome to the Airlines!"<<endl;
            cout<<"Press the number of the country of which you want to book the flight: ";
            cin>>choice;

            switch(choice)
            {
                case 1:
                {
                    cout<<"________________________________Welcome to Dubai Emirates__________________________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the hourney!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. DUB - 498"<<endl;
                    cout<<"\t08-01-2025 8:00AM 10hrs Rs. 14000"<<endl;
                    cout<<"1. DUB - 658"<<endl;
                    cout<<"\t09-01-2025 4:00AM 12hrs Rs. 10000"<<endl;
                    cout<<"1. DUB - 508"<<endl;
                    cout<<"\t11-01-2025 11:00AM 11hrs rs. 9000"<<endl;

                    cout<<"\nselect the flight you want to book: "<<endl;
                    cin>>choice1;

                    if(choice1==1){
                        charges=14000;
                        cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=10000;
                        cout<<"\n You have successfully booked the flight DUB - 658"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=9000;
                        cout<<"\n You have successfully booked the flight DUB - 508"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else   {
                        cout<<"invalid input, shifting to previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu"<<endl;
                    cin>>back;

                    if (back==1)
                    {
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }

                }

                case 2:
                {
                    cout<<"________________________________Welcome to UK airlines__________________________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the hourney!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. UK - 198"<<endl;
                    cout<<"\t08-01-2025 2:00AM 20hrs Rs. 34000"<<endl;
                    cout<<"1. UK - 258"<<endl;
                    cout<<"\t09-01-2025 5:00AM 28hrs Rs. 29000"<<endl;
                    cout<<"1. UK - 388"<<endl;
                    cout<<"\t11-01-2025 9:00AM 18hrs rs. 42000"<<endl;

                    cout<<"\nSelect the flight you want to book: "<<endl;
                    cin>>choice1;

                    if(choice1==1){
                        charges=34000;
                        cout<<"\nYou have successfully booked the flight UK - 198"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=29000;
                        cout<<"\nYou have successfully booked the flight UK - 258"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=42000;
                        cout<<"\n You have successfully booked the flight DUB - 388"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else   {
                        cout<<"invalid input, shifting to previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu"<<endl;
                    cin>>back;

                    if (back==1)
                    {
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }

                }

                case 3:
                {
                    cout<<"________________________________Welcome to USA Airlines__________________________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the hourney!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. USA - 782"<<endl;
                    cout<<"\t08-01-2025 2:00AM 12hrs Rs. 18000"<<endl;

                    cout<<"\nselect the flight you want to book: "<<endl;
                    cin>>choice1;

                    if(choice1==1){
                        charges=18000;
                        cout<<"\nYou have successfully booked the flight USA - 782"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }

                    else   {
                        cout<<"invalid input, shifting to previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu"<<endl;
                    cin>>back;

                    if (back==1)
                    {
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }

                }

                case 4:
                {
                    cout<<"________________________________Welcome to Australia Airways__________________________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the hourney!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. AS - 569"<<endl;
                    cout<<"\t08-01-2025 10:30AM 9hrs Rs. 28000"<<endl;
                    cout<<"1. AS - 425"<<endl;
                    cout<<"\t09-01-2025 4:00AM 10hrs Rs. 22000"<<endl;
                    cout<<"1. AS - 215"<<endl;
                    cout<<"\t11-01-2025 12:15PM 7hrs Rs. 32000"<<endl;

                    cout<<"\nselect the flight you want to book: "<<endl;
                    cin>>choice1;

                    if(choice1==1){
                        charges=28000;
                        cout<<"\nYou have successfully booked the flight AS - 569"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=22000;
                        cout<<"\n You have successfully booked the flight AS - 425"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=32000;
                        cout<<"\n You have successfully booked the flight AS - 215"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else   {
                        cout<<"invalid input, shifting to previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu"<<endl;
                    cin>>back;

                    if (back==1)
                    {
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }

                }

                case 5:
                {
                    cout<<"________________________________Welcome to Canada Airways__________________________________\n"<<endl;

                    cout<<"Your comfort is our priority. Enjoy the hourney!"<<endl;

                    cout<<"Following are the flights \n"<<endl;

                    cout<<"1. CA - 159"<<endl;
                    cout<<"\t08-01-2025 07:50AM 11hrs Rs. 34000"<<endl;
                    cout<<"1. CA - 258"<<endl;
                    cout<<"\t09-01-2025 6:00AM 08hrs Rs. 36000"<<endl;
                    cout<<"1. CA - 357"<<endl;
                    cout<<"\t11-01-2025 02:15PM 15hrs Rs. 29000"<<endl;

                    cout<<"\nselect the flight you want to book: "<<endl;
                    cin>>choice1;

                    if(choice1==1){
                        charges=34000;
                        cout<<"\nYou have successfully booked the flight CA - 159"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=36000;
                        cout<<"\n You have successfully booked the flight CA - 258"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=29000;
                        cout<<"\n You have successfully booked the flight CA - 357"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else   {
                        cout<<"invalid input, shifting to previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu"<<endl;
                    cin>>back;

                    if (back==1)
                    {
                        mainMenu();
                    }
                    else{
                        mainMenu();
                    }

                }
                break;

                default:
                {
                    cout<<"Invalid input, Shifting you to the main menu."<<endl;
                    mainMenu();
                }

            }
        }
};

float Registration::charges;
int Registration::choice;

class Ticket : public Registration, Details{
    public:
    void Bill(){
        string destination="";
        ofstream outf("records.txt");
        {
            outf<<"__________________New Airlines_________________"<<endl;
            outf<<"__________________Ticket_________________"<<endl;
            outf<<"_______________________________________________"<<endl;

            outf<<"Customer ID:"<<Details::cId<<endl;
            outf<<"Customer Name:"<<Details::name<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;

            if (Registration::choice==1)
            {
                destination=" Dubai";
            }
            else if (Registration::choice==2)
            {
                destination=" UK";
            }
            else if (Registration::choice==3)
            {
                destination=" USA";
            }
            else if (Registration::choice==4)
            {
                destination=" Australia";
            }
            else if (Registration::choice==5)
            {
                destination=" Canada";
            }
            cout<<"\tDestination\t\t"<<destination<<endl;
            cout<<"flight cost :\t\t"<<Registration::charges<<endl;  
        }
        outf.close();
    }
    void disBill(){
        ifstream ifs("records.txt");
        {
            if(!ifs){
                cout<<"File error!"<<endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};

void mainMenu(){
    int lchoice;
    // int schoice;
    int back;

    cout<<"\t               New Airlines \n"<<endl;
    cout<<"\t_______________Main Menu________________"<<endl;
    cout<<"\t________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t"<<endl;

    cout<<"\t|\t Press 1 to add the Customer Details       \t|"<<endl;
    cout<<"\t|\t Press 2 for flight registration       \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges       \t|"<<endl;
    cout<<"\t\t Press 4 to Exit       \t|"<<endl;
    cout<<"\t\t\t\t\t\t"<<endl;

    cout<<"Enter the choice: "<<endl;
    cin>>lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch (lchoice)
    {
        case 1: 
            {
             cout<<"____________Customer_________"<<endl;
             d.information();
             cout<<"Press any key to go back to the Main menu"<<endl;
             cin>>back;
                if (back==1){
                    mainMenu();
                }
                    else{
                    mainMenu();
                }
                break;
            }
        case 2:
        {
            cout<<"____________Book a flight using this system_________"<<endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout<<"___________GET YOUR TICKET___________"<<endl;
            t.Bill();
            cout<<"Your ticket is printed, you can collect it"<<endl;
            cout<<"Press 1 to display your ticket"<<endl;
            cout<<"Press any key to go back to the main menu"<<endl;
            cin>>back;
                if (back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            break;
        }
        case 4:
        {
            cout<<"\n\n\t________________Thank you______________"<<endl;
            break;
        }
        break;        
        default:
        {
            cout<<"Invalid input, Please try again!\n"<<endl;
        }

    }

};
int main(){
    management mobj;
    return 0;
}
