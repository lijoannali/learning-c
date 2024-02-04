#include<stdio.h>

int main()
{
    int myInt = 3; 
    float myFloat = 0.2e1; //Can use scientific notation
    char myChar = '1'; //Must not use double quotes
    char myString[] = "It's very late"; //The [] goes after the identifier
    printf("%d\n", myInt); 
    printf("%f\n", myFloat); 
    printf("%c\n", myChar); //
    printf("%s\n", myString); 

    printf("I'm going to count: %d , %f , %c", myInt, myFloat, myChar); 
    return 0; 
}

/* NOTES:

    %lf double
    %s  string 
    $.3f prints float with 3 decimal places

    can use ASCII like 
    char a = 66
*/