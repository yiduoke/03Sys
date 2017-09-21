#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
    srand(time(NULL));
    int array[10];
    int *pointers[10];

    int x;
    for (x=0;x<9;x++){
        array[x]=rand();
        pointers[x]=&array[x];
        printf("%d\n",array[x]);
    }
    array[9]=0;
    pointers[9]=&array[9];
    printf("%d\n\n",array[9]);

    int reverse[10];
    for (x=0; x<10; x++){
        reverse[x]=*(pointers[9-x]);
        printf("%d\n",reverse[x]);
    }
}