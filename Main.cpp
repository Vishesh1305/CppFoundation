#include "Bank.h"
using namespace std;
int
main()
{
    char choice;
    do
    {
        ShowMenu();
        cin >> choice;
        
        switch (choice)
        {
        case '1':
            cout << "Welcome to C++ Bank" << endl;
            cout << "Creating your account..." << endl;
            cout << "----------------------------------------------------------------------" << endl;
            CreateAccount();
            break;
            
        case '2':
            cout << "Welcome to C++ Bank" << endl;
            cout << "--- Displaying your details here ---" << endl;
            DisplayAccount();
            cout << "----------------------------------------------------------------------" << endl;
            break;
            
        case '3':
            cout << "Welcome to C++ Bank" << endl;
            cout << "--- Deposit Funds Window. ---" << endl;
            DepositFunds();
            cout << "----------------------------------------------------------------------" << endl;
            break;

        case '4':
            cout << "Welcome to C++ Bank" << endl;
            cout << "--- Withdraw Funds Window. ---" << endl;
            WithdrawFunds();
            break;

        case '5':
            cout << "Welcome to C++ Bank" << endl;
            cout << "--- Check Balance Window. ---" << endl;
            CheckBalance();
            break;

        case '6':
            cout << "See you again! :D" << endl;
            break;
            
        default:
            cout << "Please choose a valid option" << endl;
            break;
            
        }
    }
    while (choice != '6');
    return 0;
}