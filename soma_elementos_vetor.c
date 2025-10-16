// Crie uma função que receba um vetor e retorne a soma de todos os elementos.
#include <stdio.h>
#include <stdlib.h>

void clear(){
    system("clear");
}

void header(){
    clear();
    printf("\n          ~ Soma de elementos do vetor ~\n");
    printf("\n--------------------------------------------------\n\n");
}

void divider(){
    printf("\n--------------------------------------------------\n\n");
}


int setArrayLenght(){
    int arrayLenght;
    
    printf("Defina o tamanho da array: ");
    scanf("%d", &arrayLenght);
    
    return arrayLenght;
}

int arraySum(int mainArray[], int arrayLenght){
    for(int i = 0; i <= arrayLenght; i++){

    }


    return 0;

}
int fillArray(int mainArray[], int arrayLenght){


    
    return mainArray[arrayLenght];
}


int main(){
    header();

    return 0 ;
}