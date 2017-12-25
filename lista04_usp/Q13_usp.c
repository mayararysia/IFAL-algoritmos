#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main(){
    int i=1, j=1, mult=1;
    do{
        printf("\n\n");
        do{
            mult = i*j;
            printf("\n%d x %d = %d ", i,j, mult);
            j++;
        }while(j<=10);
        i++;
        j=1;
        printf("\nPressione uma tecla: ");
        getch();
    }while(i<=10);
}

