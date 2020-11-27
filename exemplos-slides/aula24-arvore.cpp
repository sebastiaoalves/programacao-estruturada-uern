#include "aula24-arvore.h"

template <class TipoDado>
NohArvore<TipoDado>::NohArvore(){
    dado = nullptr;
    esquerda = nullptr;
    direita = nullptr;
}

template <class TipoDado>
void NohArvore<TipoDado>::insere(TipoDado novoDado){
    if(novoDado < *dado)
        if(esquerda == nullptr){
            NohArvore<TipoDado> *filho = new NohArvore;
            filho->dado = new TipoDado;
            *(filho->dado) = novoDado;
            esquerda = filho;
        }else
            esquerda->insere(novoDado);
    else
        if(direita == nullptr){
            NohArvore<TipoDado> *filho = new NohArvore;
            filho->dado = new TipoDado;
            *(filho->dado) = novoDado;
            direita = filho;
        }else
            direita->insere(novoDado);
}

template <class TipoDado>
bool NohArvore<TipoDado>::contem(TipoDado buscado){
    if(*dado == buscado)
        return true;
    else if(buscado < *dado )
        if(esquerda != nullptr)
            return esquerda->contem(buscado);
        else 
            return false;
    else
        if(direita != nullptr)
            return direita->contem(buscado);
        else
            return false;
}

template <class TipoDado>
NohArvore<TipoDado>::~NohArvore(){
    if(esquerda!= nullptr)
        delete esquerda;
    if(direita != nullptr)
        delete direita;
    delete dado;
}