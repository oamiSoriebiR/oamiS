#include <iostream>
#include "alist.h"
using namespace std;

void append(alist* lista, const alist* listb){
    int* tmp = new int[lista->size + listb->size];
    for(int i=0; i < lista->size; i++)
    tmp[i]=lista->elements[i];

    for(int i= lista->size; i< lista->size + listb->size ; i++)
    tmp[i]=listb->elements[i - lista->size];
    
    delete[] lista->elements;
    
    lista->elements=tmp;
    lista->size=lista->size + listb->size;

}




