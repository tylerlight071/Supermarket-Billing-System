#include <iostream> // for input output
#include <fstream>  // for file handling

using namespace std;

class shopping
{
    // private data members
private:
    int pcode;
    float price;
    float dis;
    string pname;

    // public data members
public:
    void menu();
    void administrator();
    void customer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void shopping ::menu()
{
    int choice;
    string username;
    string password;

    cout << "\t\t\t\t________________________\n";
    cout << "\t\t\t\t                        \n";
    cout << "\t\t\t\t  Supermarket Main Menu \n";
    cout << "\t\t\t\t                        \n";
    cout << "\t\t\t\t________________________\n";
    cout << "\t\t\t\t                        \n";
    cout << "\t\t\t\t 1. Administrator       \n";
    cout << "\t\t\t\t 2. Customer            \n";
    cout << "\t\t\t\t 3. Exit                \n";
    cout << "\t\t\t\t                        \n";
    cout << "\n\t Please Select Your Choice: \n";
    cin >> choice;

    switch (choice)
    {
        
    case 1:
    cout << "\n\t Enter Username: \n";
    cin >> username;
    cout << "\t Enter Password: \n";
    cin >> password;

    if 

    }
};