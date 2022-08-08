#include <stdio.h>
#include <stdlib.h>
//escrever a quantidade de trocas, comparacoes, quantidade de vezes que varreu o vetor e o tempo de algoritmo.
void swap(int *a, int *b);
void bubble(int *array, int size);
void print(int *array,int size);
int main(){
    int array[]={7,3,0,1,3,8,2,9};
    bubble(array,8);
    print(array,8);
    return 0;
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//melhorar o codigo colocando uma var
void bubble(int *array, int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1; j++){
            if(array[j] > array[j+1]){
                swap(&array[j], &array[j+1]);
            }
        }
    }
}
void print(int *array,int size){
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
}