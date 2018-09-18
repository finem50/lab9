#include "Contact.h"

#ifndef Bank_H
#define Bank_H

class Bank{ //Bank class definition

public:
  Bank();
  Bank(int bank_ID, Contact phone, Contact fax);
  void display();

private:
  int bank_ID; //4 digit integer
  Contact phone; // object three integer pieces, ###,###,####
  Contact fax; // object three integer pieces, ###,###,####
};

#endif
