#include "Bank.h"
using namespace std;
/*static void CreateAccount();
static void DisplayAccount();
static void DepositFunds();
static void WithdrawFunds();
static void CheckBalance();
static void ShowMenu();
*/
BA accounts[MAX_ACCOUNTS];
int totalAccounts = 0;

void CreateAccount()
{
    if (totalAccounts >= MAX_ACCOUNTS)
        cout << "Cannot Create more accounts at this bank. Maximum Limit Reached.\n";
    BA newAccount;
    
    cout << "Enter Your Full Name here: ";
    cin.ignore();
    getline(cin, newAccount.Name);

    cout << "Enter your account number: ";
    cin >> newAccount.accountNumber;

    cout << "Enter your account type here (Savings/Current): ";
    cin >> newAccount.AccountType;

    cout << "Enter your initial deposit here: ";
    cin >> newAccount.Balance;

    accounts[totalAccounts] = newAccount;
    totalAccounts++;
}
void DisplayAccount()
{
    int accountNumber;
    bool accountExists = false;
    cout << "Enter your account number here: " << endl;
    cin >> accountNumber;

    for (int i =0; i < totalAccounts; i++)
    {
        if (accounts[i].accountNumber == accountNumber)
        {
            cout << "--------------------------------------------------------"<< endl;
            cout << "Account Holder Name: " << accounts[i].Name << endl;
            cout << "Account Number: " << accounts[i].accountNumber << endl;
            cout << "Account Type: " << accounts[i].AccountType << endl;
            cout << "Balance: " << accounts[i].Balance << endl;
            cout << "--------------------------------------------------------"<< endl;
            accountExists = true;
        }
    }
    if (!accountExists)
        cout << "Account Not Found!" << endl;
}
void DepositFunds()
{
    int depositAmt;
    int accountNumber;
    bool accountExists = false;
    cout << "Welcome to Deposit Funds Window: " << endl;
    cout << "Enter your account number here: " << endl;
    cin >> accountNumber;
    cout << "Enter deposit amount here: " << endl;
    cin >> depositAmt;
        
    for (int i =0; i < totalAccounts; i++)
    {
        if (accounts[i].accountNumber == accountNumber)
        {
            cout << "Account Found!" << endl;
            accounts[i].Balance += static_cast<float>(depositAmt);
            cout << "New Balance: " << accounts[i].Balance << endl;
            accountExists = true;
            break;
        }
    }
    if (!accountExists)
        cout << "Account Not Found! Please try again." << endl;
    
}
void WithdrawFunds()
{
    cout << " ---> Welcome to Withdrawals Window <--- " << endl;
    int withdrawAmt;
    int accountNumber;
    bool accountExists = false;
    cout << "Enter your account number here: " << endl;
    cin >> accountNumber;
    cout << "-----> Entered Account Number: " << accountNumber << endl;
    cout << "Enter Withdraw amount here: " << endl;
    cin >> withdrawAmt;
    cout << "-----> Entered Withdraw Amount: " << withdrawAmt << endl;

    for (int i =0; i < totalAccounts; i++)
    {
        if (accounts[i].accountNumber == accountNumber)
        {
            cout << "Account Found!" << endl;
            accountExists = true;
            if (static_cast<float>(withdrawAmt) <= accounts[i].Balance)
            {
                accounts[i].Balance -= static_cast<float>(withdrawAmt);
                cout << "New Balance: " << accounts[i].Balance << endl;
            }else
            {
                cout << "Insufficient Balance!" << endl;
                cout << "Current Balance: " << accounts[i].Balance << endl;
            }
            break;
        }
    }
    if (!accountExists)
        cout << "Account Not Found! Please try again." << endl;
    
}
void CheckBalance()
{
    cout << "---> Welcome to Checking Balance Window <--- " << endl;
    int accountNumber;
    bool accountExists = false;
    cout << "Enter your account number here: " << endl;
    cin >> accountNumber;
    cout << "-----> Entered Account Number: " << accountNumber << endl;
    for (int i =0; i < totalAccounts; i++)
    {
        if (accounts[i].accountNumber == accountNumber)
        {
            cout << "Account Found!" << endl;
            accountExists = true;
            cout << "Current Balance: " << accounts[i].Balance << endl;
        }
        break;
    }
    if (!accountExists)
        cout << "Account Not Found! Please try again." << endl;
}
void ShowMenu()
{
    cout << "Welcome to the Banking Client Console App" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "1. Create a new Bank Account" << endl;
    cout << "2. Already a Customer? Display Account Details" << endl;
    cout << "3. Deposit Funds" << endl;
    cout << "4. Withdraw Funds" << endl;
    cout << "5. Check Balance" << endl;
    cout << "6. Quit" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Please enter your choice from the above options: ";
}



