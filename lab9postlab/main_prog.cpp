#include <iostream>
#include "ID.h"
#include "Loan.h"

using namespace std;

int main(){

  Loan loan1;

  cout << "Set your loan\n\n";
  loan1.set(); //set the values
  cout << "Display loan \n";
  loan1.display();

  return 0;
}
