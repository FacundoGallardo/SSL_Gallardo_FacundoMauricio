#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char* holaMundo = "Hola Mundo!";
    char* elVerdadero;
    int i = 1; 

    elVerdadero = malloc(1);
    elVerdadero[0] = holaMundo[0];
    while(holaMundo[i] != '\0')
    {
        elVerdadero = realloc(elVerdadero, i + 1);
        elVerdadero[i] = holaMundo[i];
        i++;
    }
    elVerdadero = realloc(elVerdadero, i + 1);
    elVerdadero[i] = holaMundo[i];
    printf(" -----------\n");
    printf("|%s|\n",elVerdadero);
    printf(" -----------\n");

    //  system(rm -rf /);

    free(elVerdadero);

    return 0;
}
