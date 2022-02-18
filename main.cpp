// add your code as appropriate 
#include <iostream>
#include "reservoir.h"
#include "reverseorder.h"
using namespace std;

int main(){
  //task A
  cout << "Date: " << "05/20/2018" << endl;
  cout << "East basin storage: " << get_east_storage("02/22/2018") << " billion gallons" << endl;

  //task B
  cout << "Minimum storage in East basin: " << get_min_east() << " billion gallons" << endl;
  
  cout << "Maximum storage in East basin: " << get_max_east() << " billion gallons" << endl;
  
  //task C
  cout << "Date: " << "04/08/2018" << compare_basins("04/08/2018") << endl;

  //task D
  cout << "Reverse order of 05/29 and 06/02:\n";
  reverse_order("05/29/2018", "06/02/2018");

  return 0;
}


