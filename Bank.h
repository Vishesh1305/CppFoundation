#pragma once
#include <iostream>
#include <string>

const int MAX_ACCOUNTS = 5;

typedef struct BankAccount
{
   std::string Name;
   int accountNumber;
   std::string AccountType;
   float Balance;
}BA;

void CreateAccount();
void DisplayAccount();
void DepositFunds();
void WithdrawFunds();
void CheckBalance();
void ShowMenu();

extern BA accounts[MAX_ACCOUNTS];
extern int totalAccounts;

