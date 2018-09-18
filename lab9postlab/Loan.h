#include "ID.h"
#include "Bank.h"

#ifndef Loan_H
#define Loan_H

class Loan{ //Loan class definition

public:
  Loan();
  Loan(Bank bank, ID id, float amount, float rate, int term);
  void set();
  float payment();
  void display();

private:
  Bank bank; //Assume a unique integer in three integer parts
  ID id; //Assume a unique integer in three integer parts
  float amount; //$ amount of the Loan
  float rate; //Annual interest rate
  int term; //Number of months, length of the loan
};

#endif
