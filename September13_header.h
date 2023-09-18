/*
 Name: Izzy May
 Class: CPSC 122, Fall 2023
 Lecture 04 Demonstration
 Notes: Not completed but will work on this more before Wednesday.
*/

// Guard code to prevent code being used more than once
#ifndef HEADER_H

#define HEADER_H

#include <iostream> //needed for input/output streams from the console
#include <fstream>	//needed for file streams
#include <sstream>	//needed for string streams
#include <string>	//neeeded for string data type
#include <vector>	//needed for vector data type
#include <ctime>	//used for time() function, see: https://www.programiz.com/cpp-programming/library-function/ctime/time
#include <cstdlib>	//used for srand() and rand() for random number generation, see: https://www.programiz.com/cpp-programming/library-function/cstdlib/srand

using namespace std;

bool openInputFile(ifstream &infile, string filename);

#endif // !HEADER_H
