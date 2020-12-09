/*
This is the goal: Ask user a real number and show if is positive or negative, the program will finish with a 0 input
*/

#include <stdio.h>

int main(){

    printf("Hello user! Please enter a real number \n");
    printf("Remember this program will finish with a 0 \n");
    double realNum; // decimal numbers
    scanf("%lf", &realNum); // read user input
    do { // start the loop
        if(realNum < 0){  
            printf("Negative \n");
        } else if (realNum > 0){
            printf("Positive \n");
        } else // the loop finish with a 0
        {
            break;
        }
    } while (scanf("%lf", &realNum));
    
    return 0; // closing the main fuction
}