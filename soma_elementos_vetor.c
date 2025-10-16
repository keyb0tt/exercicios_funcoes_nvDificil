// Crie uma função que receba um vetor e retorne a soma de todos os elementos.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char visual(char visualNeed[]){
    // Clear
    if(strcmp(visualNeed, "clear") == 0){
        system("clear");
    }
    // Header
    if(strcmp(visualNeed, "header") == 0){
        system("clear");
        printf("\n          ~ Soma de elementos do vetor ~\n");
        printf("\n--------------------------------------------------\n\n");
    }
    // Divider
    if(strcmp(visualNeed, "divider") == 0){
        printf("\n--------------------------------------------------\n\n");
    }

    return 0;
}

int setArrayLenght(){
    int arrayLenght;

    printf("Defina o tamanho da array: ");
    scanf("%d", &arrayLenght);
    
    return arrayLenght;
}


int arraySum(int mainArray[], int arrayLenght){
    int sum = 0;
    
    for(int i = 0; i <= arrayLenght - 1; i++){
        sum += mainArray[i];
    }   
    
    return sum;
}

int arrayResult(int arrayLenght){
    int mainArray[arrayLenght], sum = 0;

    for(int i = 0; i <= arrayLenght - 1; i++){
        printf("\n%d: ", i + 1);
        scanf("%d", &mainArray[i]);
    }
    
    sum = arraySum(mainArray, arrayLenght);
    
    return sum;
}

int main(){
    visual("header");
    
    int arrayLenght = setArrayLenght();

    visual("divider");

    printf("\n%d", arrayResult(arrayLenght));

    return 0 ;

}