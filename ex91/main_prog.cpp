#include <iostream>
#include "ID.h"
#include "Loan.h"

using namespace std;

int main(){

  Loan loan1(ID(111, 22, 4444), 2300, 5.5, 48); //Initialize to values given

  Loan loan2;

  cout << "Display loan1 \n";
  loan1.display();

  loan2.set(); //set the values
  cout << "Display loan2 \n";
  loan2.display();

  return 0;
}
