/*
This is the goal: Calculate areas and perimeters of different geometric shapes
*/

#include <stdio.h>
#include <math.h>

int main() {

    char option;
    double num1, num2;
    double PI = 3.141592;

    do {
        printf( "--Choose an operation to do-- \n\n" );
        printf( "1) Calculate area and perimeter of a square \n");
        printf( "2) Calculate area and perimiter of a circle \n");
        printf( "3) Calculate area and perimeter of a triangule \n");
        printf( "4) Calculate area and perimeter of a rectangle \n");
        printf( "5) Calculate area and perimeter of a hexagon \n" );
        printf( "6) Exit \n\n" );

        do{
            printf( "Introduce an option (1-6): \n"); // Filter user choosen operation
            fflush( stdin ); //this function clean intermediate memory or buffer where it is previous selection
            scanf( "%c", &option);
        } while ( option < '1' || option > '6' ); // It has to be between 1-6

        switch ( option ){
            case '1': printf( "Introduce square height in meters: \n" ); //Option 1: Square
                      scanf( "%lf", &num1);
                      printf( "Introduce square width in meters: \n" );
                      scanf( "%lf", &num2);
                      if(num1 == num2){
                      printf( "The perimeter of the square is: %lf meters \n", num1*2+num2*2 );
                      printf( "The area of the square is: %lf meters \n\n", num1*num2 );
                      } else {
                          printf("This is not a square my friend \n\n");
                      }
                      break;

            case '2': printf( "Introduce circle radius in meters: \n" ); //Option 2: Circle
                      scanf( "%lf", &num1);
                      printf( "The perimeter of the circle is: %lf meters \n", num1*2*PI );
                      printf( "The area of the circle is: %lf meters \n\n", pow(num1, 2)*PI );
                      break;

            case '3': printf( "Introduce triangule height in meters: \n" ); //Option 3: Triangule
                      scanf( "%lf", &num1);
                      printf( "Introduce triangule base in meters: \n" );
                      scanf( "%lf", &num2);
                      printf( "The perimeter of the triangule is: %lf meters \n", (num2*3)/2 );
                      printf( "The area of the triangule is: %lf meters \n\n", (num1*num2)/2 );
                      break;

            case '4': printf( "Introduce rectangule height in meters: \n"  ); //Option 4: Rectangule
                      scanf( "%lf", &num1);
                      printf( "Introduce rectangule width in meters: \n" );
                      scanf( "%lf", &num2);
                      if(num1 != num2){
                      printf( "The perimeter of the square is: %lf meters \n", num1*2+num2*2 );
                      printf( "The area of the square is: %lf meters \n\n", num1*num2 );
                      } else {
                          printf("This is a square my friend \n\n");
                      }
                      break;

            case '5': printf( "Introduce hexagon side lenght in meters: \n"  ); //Option 5: Hexagon
                      scanf( "%lf", &num1);
                      printf( "Introduce hexagon height in meters: \n" );
                      scanf( "%lf", &num2);
                      printf( "The perimeter of the hexagon is: %lf meters \n", num1*6 );
                      printf( "The area of the square is: %lf meters \n\n", (num1*(num2/2))/2 );
                      break;
        }

    } while ( option != '6' ); // Option 6: exit from the calcutor

    return 0;
}
