/*
Shane Trentham
CSCI 4100
Assignment 1
6/2/2020
This program takes 2 command line arguments the name fo the function and a file name and then prints out the contents of the file.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Useage: lolcat <filename>");
        exit(1);
    }

    FILE *stream;
    stream = fopen(argv[1], "r");

    if(stream == NULL)
    {
        fprintf(stderr, "Error: File not found.");
        exit(1);
    }
    
    char character;
    
    while (character != EOF)
    {
        character = fgetc(stream);
        if(character == EOF)
        {
            break;
        }
        else
        {
            putchar(character);
        }
        
    }
    fclose(stream);
    return 0;

}