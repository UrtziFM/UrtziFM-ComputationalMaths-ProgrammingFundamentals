/*
This is the goal: Ask user two integers, first pair numbers between both and finally the sum of them
*/

#include <stdio.h>

int main(){

    printf("Hello user!, Please, enter two integers \n");
    int userInput_1, userInput_2; // Define user inputs like integers
    int pairs; // Define a variable to get pairs numbers  

    if (!scanf("%d", &userInput_1)){ // read the user input to make a conditional if her is introducing not an integer
        printf("Sorry I asked two natural numbers \n"); // 
    } else if (!scanf("%d", &userInput_2)){
        printf("Sorry I asked two integers \n"); // 
    } else {
    int sum = userInput_1 + userInput_2; // new output with the sum of both numbers
    if (userInput_1 < userInput_2){  //conditional for validation if first input is lower than second one
        for (pairs = userInput_1; pairs <= userInput_2; pairs++){ //the loop for pairs numbers
            if (pairs %2 == 0){ //validation for pairs number 
                printf("These are: %d \n", pairs);
            }
        }
    } else {
        for (pairs = userInput_2; pairs <= userInput_1; pairs++){
            if (pairs %2 == 0){
                printf("These are pairs in range: %d \n", pairs);
            }
        }
    } 
    printf("The sum of both number is: %d \n", sum); // finally getting the sum
    }
    return 0; //closing main function
}
