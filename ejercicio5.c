/*
This is the goal: Get a christmas tree 
*/

#include <stdio.h>
 
int main () {

    int tallTree,trunkTree; //defining tree sizes
    int j,k,m,i; // iterators
    char formatTree; // defining tree
 
    do {
        printf ("Hello user! Give me a number and I will drawn a christmas tree for you \n");
        printf("Your selected number it has to be between 4 and 20 \n");
        printf("Then, select your tree's type: number, letter or symbol \n");
        scanf ("%d %c", &tallTree, &formatTree); //reading user inputs
        }
    
        while (tallTree < 3 || tallTree > 20); //limiting tree dimensions
 
        for (i=0, j=tallTree; i<tallTree; i++, j--) { // bucle to drawn left side of the tree
            for(k=0; k<j; k++){
            printf(" ");
            }
                for(m=tallTree; m>=j; m--){ // bucle to drawn the tree
                printf(" "); //a space in each iteration
                printf ("%c", formatTree); //a character in each iteration
                }
                printf ("\n");
        }
        trunkTree = tallTree/3; //defining trunk tree size
 
        for(j=1; j<=trunkTree; j++){  // bucle to drawn the trunk tree
            for(i=0; i<tallTree; i++)
            printf(" ");
            printf(" %c\n", formatTree);
        }
 
    return 0;
}