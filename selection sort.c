#include <stdio.h>

int main(){
    
    int lista[10] = {9,8,7,6,5,4,3,2,1,0};

    printVetor(lista, 10);
    selectionSort(lista, 10);
    printVetor(lista, 10);

}

void selectionSort(int vetor[], int tamanhoVetor){
    for(int i = 0; i < tamanhoVetor; i++){
        int indiceMenor = i;

        for(int j = i + 1; j < tamanhoVetor; j++){
            if(vetor[j] < vetor[indiceMenor]){
                indiceMenor = j;
            }
        }

        int aux = vetor[indiceMenor];
        vetor[indiceMenor] = vetor[i];
        vetor[i] = aux;
    }
}

void printVetor(int vetor[], int tamanhoVetor){
    for(int i = 0; i < tamanhoVetor; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}