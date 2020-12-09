#include <stdio.h>

int main()
{   
    int i = 0;
    if (i == 1){
        printf("Hello world\n");
    }else {
        printf("Good bye\n");
    }
    //for (i = 0; i < 3; i++){
    //    printf("%i\n", i);
    //}
    do {
        printf("%i\n", i);
        i++;
        if (i == 2) break;
    } while (i < 4);
    return 0;
}