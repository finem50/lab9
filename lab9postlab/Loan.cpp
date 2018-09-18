#include <iostream>
#include "ID.h"
#include "Loan.h"
#include "Bank.h"
#include "Contact.h"

using namespace std;

Loan::Loan(){

}

Loan::Loan(Bank bk, ID I, float am, float rt, int trm){

  bank = bk;
  id = I;
  amount = am;
  rate = rt;
  term = trm;
}

void Loan::set(){

  int l, m, r;
  int bn_ID;
  ID temp_id;

  Bank bn;
  Contact pho;
  Contact fax;

  cout << "Enter the ID of your bank: \n";
  cin >> bn_ID;
  cout << "Enter the bank phone number: \n";
  pho.set();
  cout << "Enter the bank fax number: \n";
  fax.set();

  bank = Bank(bn_ID, pho, fax);


  //Initialize the loan1 object
  cout << "Enter the left part of the loan ID: \n";
  cin >> l;
  cout << "Enter the middle part of the loan ID: \n";
  cin >> m;
  cout << "Enter the right part of the loan ID: \n";
  cin >> r;

  id = ID(l, m, r);

  cout << "Enter the amount of this loan: \n";
  cin >> amount;

  cout << "Enter the annual interest rate of this loan (in %): \n";
  cin >> rate;

  cout << "Enter the term (number of months, length of the loan): \n";
  cin >> term;
}

void Loan::display(){

  bank.display();
  id.display();
  cout << "Loan amount is: $" << amount << endl;
  cout << "Loan rate is: " << rate << " %" << endl;
  cout << "Loan term is: " << term << " months " << endl;
}
