/*
This is the goal: Create a simple calculator for the user
*/

#include <stdio.h>
#include <math.h>

int main() {

    char option;
    double num1, num2;

    do {
        printf( "--Choose an operation to do-- \n\n" );
        printf( "1) Sum two numbers \n");
        printf( "2) Rest two numbers \n");
        printf( "3) Multiply two numbers \n");
        printf( "4) Divide two number \n");
        printf( "5) Square root of two numbers \n" );
        printf( "6) Exit \n\n" );

        do{
            printf( "Introduce an option (1-6): \n"); // Filter user choosen operation
            fflush( stdin ); //this function clean intermediate memory or buffer where it is previous selection
            scanf( "%c", &option);
        } while ( option < '1' || option > '6' ); // It has to be between 1-6

        switch ( option ){
            case '1': printf( "Introduce first number: \n" ); //Option 1: Sum
                      scanf( "%lf", &num1);
                      printf( "Introduce second number: \n" );
                      scanf( "%lf", &num2);
                      printf( "%lf + %lf = %lf\n", num1, num2, num1 + num2 );
                      break;

            case '2': printf( "Introduce first number: \n" ); //Option 2: Rest
                      scanf( "%lf", &num1);
                      printf( "Introduce second number: \n" );
                      scanf( "%lf", &num2);
                      printf( "%lf - %lf = %lf\n", num1, num2, num1 - num2 );
                      break;

            case '3': printf( "Introduce first number: \n" ); //Option 3: Multiply
                      scanf( "%lf", &num1);
                      printf( "Introduce second number: \n"  );
                      scanf( "%lf", &num2);
                      printf( "%lf * %lf = %lf\n", num1, num2, num1 * num2 );
                      break;

            case '4': printf( "Introduce first number: \n"  ); //Option 4: Divide
                      scanf( "%lf", &num1);
                      printf( "Introduce second number: \n" );
                      scanf( "%lf", &num2);
                      if ( num2 != 0 )
                          printf( "%lf div %lf = %lf \n", num1, num2, num1 / num2);
                      else
                          printf( "Wrong! You cannot divide by 0 \n" );
                      break;

            case '5': printf( "Introduce a number: \n"  ); //Option 5: Square root
                      scanf( "%lf", &num1);
                      printf( "%lf  sqrt is %lf \n", num1, sqrt(num1)); //you will need gcc ... -lm
                      break;
        }

    } while ( option != '6' ); // Option 6: exit from the calculator

    return 0;
}