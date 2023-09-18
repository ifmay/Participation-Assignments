/*
 Name: Izzy May
 Class: CPSC 122, Fall 2023
 Lecture 04 Demonstration
 Notes: Not completed but will work on this more before Wednesday.
*/

#include "header.h"

/*************************************************************
* Function: openInputFile()
* Date Created: 9/8/23
* Date Last Modified: 9/11/23
* Description: This function converts the times from min
* and sec to just sec.
* Input parameters: The time in minutes and seconds.
* Returns: The runner's time in seconds only.
* Pre: The minutes and seconds of the time had to
* have been scanned in by the user.
* Post: The runner's time in seconds only is returned.
*************************************************************/

bool openInputFile(ifstream &infile, string filename)
{
	infile.open(filename);

	if (infile.is_open())
	{
		return true;
	}
	return false;
}

string parseLines(ifstream &infile, string filename){
 while (!inputFile.eof()) {
        string line;
        sting word;
        getline(inputFile, line);

        stringstream lineStream(line);
        stringe;
        getline(lineStream, word, ' ');
        
        lineStream >> word;

        cout << word;
    }
}
