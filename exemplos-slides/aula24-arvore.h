#ifndef ARVORE_H
#define ARVORE_H

template <typename TipoDado>
class NohArvore{
    private:
        NohArvore<TipoDado> *esquerda, *direita;
    public:
        TipoDado *dado;
        
        NohArvore();
        void insere(TipoDado novoDado);
        bool contem(TipoDado buscado);
        ~NohArvore();

};

#endif