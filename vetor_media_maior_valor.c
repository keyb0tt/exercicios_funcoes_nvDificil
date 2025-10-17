// Crie uma função que receba um vetor e retorne a média e o maior valor (use parâmetros por referência).
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
        printf("\n--------------------------------------------------\n");
        printf("\n         ~ Média e maior valor do vetor ~\n");
        printf("\n--------------------------------------------------\n\n");
    }
    // Divider
    if(strcmp(visualNeed, "divider") == 0){
        printf("\n--------------------------------------------------\n");
    }

    return 0;
}

int arrayFunction(int index){
    

}

int main(){
    int num;


    return 0;
}