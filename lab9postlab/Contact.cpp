#include <iostream>
#include "Contact.h"

using namespace std;

Contact::Contact(){
  //Use default values
}

Contact::Contact(int p1, int p2, int p3){

  part1 = p1; //Area code
  part2 = p2; //Central office (exchange) code
  part3 = p3; //Line number
}

void Contact::set(){

  cout << "Enter area code: \n";
  cin >> part1;
  cout << "Enter exchange code: \n";
  cin >> part2;
  cout << "Enter line number: \n";
  cin >> part3;
}

void Contact::display(){

  cout << "Phone/Fax number is: " << "(" << part1 << ")" << part2 << "-" << part3 << endl;
}
