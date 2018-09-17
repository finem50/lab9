#include <iostream>
#include "Bank.h"
#include "Contact.h"

using namespace std;

Bank::Bank(){
  //Default constructor
}

Bank::Bank(int bk_ID, Contact ph, Contact fx){

  bank_ID = bk_ID;
  phone = ph;
  fax = fx;
}
