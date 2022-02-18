/* For this task, add new files, reverseorder.cpp and reverseorder.h. You will have to modify the Makefile appropriately.

In these files create a function void reverse_oreder(std::string date1, std::string date2). This function should print out the West basin elevation for all days in the interval in reverse chronological order.

test from main
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

void reverse_order(std::string date1, std::string date2)
{

ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) 
{
    cerr << "File cannot be opened for reading." << endl;

    exit(1); // exit if failed to open the file
}

  std::string dates_arr[365];
	double elevation_arr[365];
  bool isDate = false;
	int days = 0;


std::string junk;        // new string variable
std::getline(fin, junk); // read one line from the file 

std::string tsv_date;
double eastEl, eastSt, westSt, westEl;

while(fin >> tsv_date >> eastSt >> eastEl >> westSt >> westEl)
{ 
  fin.ignore(INT_MAX, '\n');

  if(tsv_date == date1)
    isDate = true;
  if(isDate)
  {
      elevation_arr[days] = westEl;
      dates_arr[days] = tsv_date;
      days++;
  }
  if(tsv_date == date2)
      isDate = false;
}
fin.close();

for(int i = days -1; i > -1; i--)
{
  cout << dates_arr[i] << " " << elevation_arr[i] << " ft" << endl;}

}