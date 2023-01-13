/**
 * Name: Tyme Collins
 * Section: M4
 * Project: Pex0
 * Purpose: Define functions for pex
 */


#include <stdio.h>
#include "pex0functs.h"
#include <string.h>
#include <stdlib.h>

void parseIt(char string[]){
    //loops through string 
    for(int i = 0;  i < strlen(string); i++){
        //finds the T or t
        if(string[i] == 'T' || string[i] == 't'){
            //changes them to a space
            string[i] = ' ';
        }
        //finds the spaces
        else if(string[i] == ' '){
            //changes them to a dash
            string[i]= '-';
        }
    }
}

char* modifyIt(char string[]){
    //creates a new pointer fo
    char* newString = NULL;
    //allocate enough memery for new string
    newString = (char*)malloc((200) * sizeof(char));

    //declare strings for start and end
    char* start = "start->";

    char* end = "<-end\n";

    //copies start to new string
    strcpy(newString, start);
    //places user string in front of the new string
    strcat(newString, string);
    //places the end string at the end of the new string
    strcat(newString, end);

    //returns thd string
    return newString;
    //frees the memory from the new string
    free(newString);
    


   
}

void getInfo(StudentRecType* stdnt){
    //asks the user for name
    printf("What is your name\n");
    //gets the users name
    fgets(stdnt->name, 64, stdin);
    //asks the user for age
    printf("What is your age?\n");
    //gets the users age
    scanf("%d", &stdnt->age);
}

void fillIt(int** Array, int rows, int cols){
    //loops through array rows and colomns
    for(int r = 0; r<rows; r++){
        for(int c = 0; c < cols; c++){
            //places random numbers in the array
            Array[r][c] = rand() % 100;
        }
    }
}

void dumpIt(int** Array, int cols, int rows, char* filename){
    //creates the file ptr
    FILE* file = NULL;
    //opens the file to write to it
    file = fopen(filename, "w");
    //exists program is file is null
    if (file == NULL){exit(1);}
    //loops through rows and columns
    for(int r = 0; r<rows; r++){
        for(int c = 0; c < cols; c++){
            //prints each row and column locations into the text file
            fprintf(file, "%d", Array[r][c]);

        }
    }
    





}
