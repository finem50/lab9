#include <iostream>
#include "ID.h"

using namespace std;

ID::ID(){
  //Use default values
}

ID::ID(int l, int m, int r){

  left = l;
  middle = m;
  right = r;
}

void ID::display(){

  cout << "Loan ID is: " << left << "-" << middle << "-" << right << endl;
}
