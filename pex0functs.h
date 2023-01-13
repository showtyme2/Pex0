/**
 * Name: Tyme Collins
 * Section: M4
 * Project: Pex0
 * Purpose: Initialize functions for pex
 */

#ifndef PEX0FUNCTS_H
#define PEX0FUNCTS_H


//Thise function takes a string and returns nothing, changes every space to a dash and every T or t to a space.
void parseIt(char* string);

//This function takes a string and returns a pointer to a string, creates a new string and puts the user's string inside the words "start" and "end"
char* modifyIt(char string[]);


//This is a typedef struct that contains a character and integer, name and age of user
typedef struct StudentRecType
{
    
    char name[64];
    int age;
}StudentRecType;

//This function takes a pointer to a StudentRecType as and returns nothing, sets the member values of the structure pointed to by the input parameter.
void getInfo(struct StudentRecType* StudentRecType);


// This function takes an array, num rows, and num columns from the command line argument and returns nothing. Fills the array with randoms numbers 1-100.
void fillIt(int** Array, int rows, int cols);


// This function takes an array, num cols, num rows, and a filename, returns nothing. Dumps the array and values 1-100 into the text file given in the parameter
void dumpIt(int** Array, int cols, int rows, char* filename);

#endif