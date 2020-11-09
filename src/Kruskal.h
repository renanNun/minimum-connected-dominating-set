#ifndef GRAFO_KRUSKAL_H
#define GRAFO_KRUSKAL_H

#include <iostream>

#include "Grafo.h"
#include <list>




using namespace std;

class Kruskal
{

public:
    Kruskal(Grafo *grafo);
    ~Kruskal();

    void imprime();
    void imprimeFile(fstream &outputFile);

private:
    Grafo *grafo;
    Grafo grafoKruskal;
    bool direcional;
    int ordem;
    int m;
    No * noInicial;
    list<Aresta*> listaArestas;
    void preencheListaArestas();
    void preencheListaNos();
    void algoritmo();

    // union find

    void pais();
    No* acha(No *u);
    void  une(No *x, No *y);
    bool ehCiclo(Aresta * a);




};


#endif //GRAFO_KRUSKAL_H
