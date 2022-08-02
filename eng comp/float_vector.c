//ARQUIVO DE IMPLEMENTACOES
#include "float_vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct float_vector{
    int capacity;//numero maximo de elemento
    int size;//quantidade atual de elementos
    float *data;//vetor de floats
};

/**
 * @brief Cria(aloca) um vetor de float com uma dada capacidade
 * 
 * @param capacity Capacidade do vetor 
 * @return FloatVector* Um vetor de floats alocado/criado. 
*/
FloatVector *create(int tam){
    FloatVector *vet= (FloatVector*)calloc(1,sizeof(FloatVector));
    vet->capacity= tam;
    vet->size= 0;
    vet->data= (float*)calloc(vet->capacity,sizeof(float));
    return vet;
}
void destroy(FloatVector **vet_ref){
    FloatVector *vet=*vet_ref;
    free(vet->data);
    free(vet);
    *vet_ref=NULL;
}
int size(const FloatVector *vector){
    return vector->size;
}
int capacity(const FloatVector *vector){
    return vector->capacity;
}
float at(const FloatVector *vector,int pos){
    if(pos<0||pos>=vector->size){
        fprintf(stderr,"Error: position is out of range\n");
        exit(EXIT_FAILURE);
        //recursao kk
    }
    return vector->data[pos];
}
float get(const FloatVector *vector,int pos){
    return vector->data[pos];
}
bool _isFull(FloatVector* vector){
    return vector->size==vector->capacity;
}
void append(FloatVector *vector,float n){
    if(_isFull(vector)){
        fprintf(stderr,"Error: array is full.\n");
        exit(EXIT_FAILURE);
    }
    vector->data[vector->size++]=n;   
}
void print(const FloatVector *vector){
    for(int i=0;i<vector->size;i++){
        fprintf(stderr,"%f ",vector->data[i]);
    }
}