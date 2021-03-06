/*
Author: Ian Clarke
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab3
*/

//Task A

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

double get_east_storage (std::string date)
{

ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) 
{
    cerr << "File cannot be opened for reading." << endl;

    exit(1); // exit if failed to open the file
}

std::string junk;        // new string variable
std::getline(fin, junk); // read one line from the file 

std::string list_date;
double eastSt, target_eastSt;


while(fin >> list_date >> eastSt) 
{ 
    fin.ignore(INT_MAX, '\n');
    if (date == list_date)
    {
      target_eastSt = eastSt;
    }
}

fin.close();

return target_eastSt;                       
}

//Task B (min)

double get_min_east()
{

ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) 
{
    cerr << "File cannot be opened for reading." << endl;

    exit(1); // exit if failed to open the file
}

std::string junk;        // new string variable
std::getline(fin, junk); // read one line from the file 

std::string date;
double eastSt, min;
min = 100;


while(fin >> date >> eastSt) 
{ 
    fin.ignore(INT_MAX, '\n');
    if (eastSt < min)
    eastSt = min;
}

fin.close();

return min;           
}

//Task B (max)

double get_max_east()
{

ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) 
{
    cerr << "File cannot be opened for reading." << endl;

    exit(1); // exit if failed to open the file
}

std::string junk;        // new string variable
std::getline(fin, junk); // read one line from the file 

std::string date;
double eastSt, max;
max = 0;


while(fin >> date >> eastSt) 
{ 
    fin.ignore(INT_MAX, '\n');
    if (eastSt > max)
    eastSt = max;
    
}

fin.close();

return max;       
}

//Task C

/*Add a function std::string compare_basins(std::string date) that will return East if the East basin was higher on the specified date and West if the West was higher. It should return Equal if the values were the same.
*/


std::string compare_basins(std::string date)
{
ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) 
{
    cerr << "File cannot be opened for reading." << endl;

    exit(1); // exit if failed to open the file
}

std::string junk;        // new string variable
std::getline(fin, junk); // read one line from the file 

std::string list_date;
double eastSt, eastEl, westSt, westEl;


while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
{ 
    fin.ignore(INT_MAX, '\n');
    if (date == list_date)
    {
      if (eastEl > westEl)
      cout << "East";
      else if (eastEl < westEl)
      cout << "West";
      else if(eastEl == westEl)
      cout << "Equal";
    }
}

fin.close();
}
