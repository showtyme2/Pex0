/**
 * Name: Tyme Collins
 * Section: M4
 * Project: Pex0
 * Purpose: Utilize functions for pex
 * Documentation: No help received
 */

#include <stdio.h>
#include <string.h>
#include "pex0functs.h"
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv){
    //allows for random numbers to generate
    srand(time(0));

    //asks user for a sentence
    printf("GIVE ME SENTENCE: \n");
    
    //sets variable for sentence
    char sentence[80];
    //gets the sentence from user
    fgets(sentence, 80, stdin);

    //calls parseIt() to alter sentence
    parseIt(sentence);

    //prints the result of the 
    printf("New sentence: %s", sentence);

    //asks user for second sentence
    printf("GIVE ME SECOND SENTENCE: \n");

    //sets variable for second sentence
    char sentence2[80];

    //gets the sentence from the user
    fgets(sentence2, 80, stdin);

    //setts variable for the result of the modifyIt() function, a new string
    char * newS2 = modifyIt(sentence2);

    //prints the new modified string
    printf("New String: %s", newS2);

   
    //sets variable for the struct type StudentRecType
    StudentRecType stdnt;

    //runs the getInfo() function to obtain the name and age of the user
    getInfo(&stdnt);
    //prints the name and age of the user
    printf("Name: %s\n", stdnt.name);
    printf("Age: %d\n", stdnt.age);

//This was testing for the command line arguments
    //if(argc>1){
      //  printf("Received %d arguments\n", argc);
    //}

//sets variable for 2d array
    int** Array;
//sets rows equal to the second argument in the command line
    int rows = atoi(argv[2]);

//sets cols equal to the third argument in the command line
    int cols = atoi(argv[3]);

//creates the array with the rows and cols given in the command line
    Array = (int**)malloc(rows * sizeof(int*));
        for(int i = 0; i < rows; i++){
            Array[i] = (int*)malloc(cols * sizeof(int));
        }
//fills array using the fillIt() function
    fillIt(Array, rows, cols);

//dumps array data into text file using the dumpIt() function
    dumpIt(Array, cols, rows, argv[1]);

//prints how much time it took me to complete this...
    printf("Time to complete: too many minuntes\n");


}


