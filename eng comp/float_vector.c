//ARQUIVO DE IMPLEMENTACOES
#include "float_vector.h"
#include <stdio.h>

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
