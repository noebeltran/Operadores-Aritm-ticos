#include <stdio.h>
int main(void){
    int varA = 200;
    int varB = 100;

    if((varA > varB)&&(varA!=varB))
    {
        printf("Verdadero\n");
    }

    else
    {
        printf("Falso\n");
    }
    return 0;
}