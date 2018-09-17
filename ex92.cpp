//This program illustrates the use of namespaces
#include <iostream>

using namespace std;

namespace cm{

  double area(double length, double width);
}

namespace meter{

  double area(double length, double width);
}

namespace km{

  double area(double length, double width);
}

namespace cmImper{ //Imperial to metric conversion

  double area(double length, double width);
}

namespace meterImper{ //Imperial to metric conversion

  double area(double length, double width);
}

namespace kmImper{ //Imperial to metric conversion

  double area(double length, double width);
}

int main(){

  int unit;
  double length, width; //Dimension of a rectangle
  double A; //Area of a rectangle

  cout << "Is your measurement in cm (1) or inches (2)? \n";
  cin >> unit;

  if (unit > 2){
    cout << "Invalid input.\n";
    return 0;
  }

  cout << "Enter the length and the width of the rectangle. \n";
  cin >> length >> width;

  if(unit == 1){
  {
    using namespace cm;
    A = area(length, width);
    cout << "Weight is: " << A << endl;
  }

  {
    using namespace meter;
    A = area(length, width);
    cout << "Weight is: " << A << endl;
  }

  {
    using namespace km;
    A = area(length, width);
    cout << "Weight is: " << A << endl;
  }

  } else if(unit == 2){

  {
    using namespace cmImper;
    A = area(length, width);
    cout << "Weight is: " << A << endl;
  }

  {
    using namespace meterImper;
    A = area(length, width);
    cout << "Weight is: " << A << endl;
  }

  {
    using namespace kmImper;
    A = area(length, width);
    cout << "Weight is: " << A << endl;
  }

} else{

  //Leaving empty - this should not be reached if input is not 1 or 2.
}

  return 0;
}

namespace cm{

  double area(double length, double width){

    double weight;
    cout << "From namespace cm, I am sending weight in mg back \n";
    weight = (length * width) * 22;
    //22 mg needed to paint 1 cm^2
    return weight;
  }
}

namespace meter{

  double area(double length, double width){

    double weight;
    cout << "From namespace meter, I am sending weight in kg back \n";
    weight = ((length / 100) * (width / 100)) * 0.2;
    //0.2 kg needed to paint 1 meter^2
    return weight;
  }
}

namespace km{

  double area(double length, double width){

    double weight;
    cout << "From namespace km, I am sending weight in T back \n";
    weight = ((length / 100000) * (width / 100000)) * 19.6;
    //19.6 ton needed to paint 1 km^2
    return weight;
  }
}

namespace cmImper{

  double area(double length, double width){

    double weight;

    cout << "From namespace cmImper, I am sending weight in mg back \n";
    weight = ((length * 2.54) * (width * 2.54)) * 22;
    //1 inch = 2.54 cm
    //22 mg needed to paint 1 cm^2
    return weight;
  }
}

namespace meterImper{

  double area(double length, double width){

    double weight;
    cout << "From namespace meterImper, I am sending weight in kg back \n";
    weight = ((length * 0.0254) * (width * 0.0254)) * 0.2;
    //1 inch = 0.0254 meters
    //0.2 kg needed to paint 1 meter^2
    return weight;
  }
}

namespace kmImper{

  double area(double length, double width){

    double weight;
    cout << "From namespace kmImper, I am sending weight in T back \n";
    weight = ((length * 0.0000254) * (width * 0.000254)) * 19.6;
    //1 inch = 0.0000254 km
    //19.6 T needed to paint 1 km^2
    return weight;
  }
}
