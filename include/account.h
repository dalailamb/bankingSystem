// File: /include/account.h
// Purpose: holds all account details

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
  // constructors and destructors
  Account();
  void openAccount();
  void closeAccount()
  void displayAccount();
  bool closed();

  // setters and gettters

private:
  int accountNo;
  string accountType;
  double balance;
  int status;

  int transactionNo;
  int transactionCount;

};

#endif // ACCOUNT_H
