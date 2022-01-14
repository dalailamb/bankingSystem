// File: /include/transaction.h
// Purpose:

#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction {
public:

  Transaction();
  void deposit();
  void withdraw();

  void addCustomer();
  void modifyCustomer();
  void deleteCustomer();
  void displayCustomer();

  void timestamp();

private:

};

#endif // TRANSACTION_H
