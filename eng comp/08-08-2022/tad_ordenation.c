#include <stdio.h>
#include "tad_ordenation.h"
void BubbleSort(int *array,int lenght){
    int aux;
    for(int i=0; i<lenght;i++){
        for (int j=0; j<lenght;j++){
            if (array[i]>array[j]){
                aux=array[i];
                array[i]=array[j];
                array[j]=aux;
            }
        }
    }
}