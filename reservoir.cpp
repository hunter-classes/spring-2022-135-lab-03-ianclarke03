/*
Write a program that consists of two .cpp files plus any supporting files. One will be named main.cpp and it will drive your program. It will contain the main function. The other file should be named reservoir.cpp and should contain a function with the prototype double get_east_storage(std::string date).

The get_east_storage function should accept a std::string specifying a date and should return the East Basin storage for that day. Your program should call and test this function from main. There should be no keyboard input but the output should illustrate that the function works correctly.

Note: This assignment template contains a skeleton that includes the Makefile, main.cpp, and reservoir.h and reservoir.cpp. You are expected to fill in the functions and calls.

Note: The get_east_storage function should open and read the data file.
*/


/*Example

$ ./east-storage

Enter date: 05/20/2018

East basin storage: 80.96 billion gallons
*/
// STEP 1: create a working get_east storage function
//2 create a .h for reservoir
//3 create a main function in main that just uses reservoir function to get answer
// put main in the makefile and test all 4 files when done

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;



double get_east_storage (string date)
{

ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) 
{
    cerr << "File cannot be opened for reading." << endl;

    exit(1); // exit if failed to open the file
}
string junk;        // new string variable
getline(fin, junk); // read one line from the file 


//string date;
//cout << "Please input a date: ";
//cin >> date;
//cout << endl;
double eastSt;
double eastEl;
double westSt;
double westEl;

while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 

    // this loop reads the file line-by-line

    // extracting 5 values on each iteration 

    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 

                          //ignorring the remaining columns 

    // To print the date and East basin storage:
    //cout << date << " " << eastSt << endl;
    if
}
//cout << "East basin storage: " << eastSt << " billion gallons" << endl;

//After you are done reading the file, close the stream
fin.close();                       
}

int main()
{
  get_east_storage("5/20/2018");

  return 0;
}