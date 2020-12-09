/*
This is the goal: get from the user an input and resolve if this is a number or character
*/
#include <stdio.h>
#include <ctype.h> // I am using this library to resolve if the input is a letter or a number

int main(){

    printf("Hello user!, Please, enter only a letter or a number \n");
    char userInput; // Define variable like a char
    scanf("%c", &userInput); // read the user input
    if (isalpha(userInput)){  //conditional for validation of the user input as a letter
        printf("This is a letter, and is: %c\n", userInput);
    } else if (isdigit(userInput)){ //next conditional for validation of the user input as a number
        printf("This is a number, and is: %c\n", userInput);
    } else { // in other cases
        printf("Did you read the Question? It was a letter or a number! and not this: %c\n", userInput);
    }
    
    return 0; // we use return 0 to close main function with an integer
}