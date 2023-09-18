/*
Name: Izzy May
Class: CPSC 122, Fall 2023
Participation Assignment 9/15
Notes: I do not have any questions.
*/

#include "header.h"

int main() {
    int num;
    string str;

    cout << "Enter a positive integer to utilize the printReverse function:" << endl;
    getline(cin, str);
    num = stoi(str);
    printReverse(num);
    cout << endl;
}


