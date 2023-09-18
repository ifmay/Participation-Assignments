/*
Name: Izzy May
Class: CPSC 122, Fall 2023
Participation Assignment 9/15
Notes: I do not have any questions.
*/

#include "header.h"

/************************************************************
* Function: printReverse()
* Date Created: 9/15/23
* Date Last Modified: 9/15/23
* Description: This function prints the user's number in reverse 
* order.
* Input parameters: integer from user input
* Returns: void function does not return anything. Rather function
* preforms task of reversing the user's number
* Pre: integer from user input
* Post: the integer is printed to the terminal in reverse order
*************************************************************/

void printReverse(const int NUMBER){   
    if (NUMBER == 0){
        return;
    }
    cout << NUMBER % 10;
    printReverse(NUMBER / 10);
}
