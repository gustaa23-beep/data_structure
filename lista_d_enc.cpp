#include "lista_d_enc.h"
#include <string>
#include <iostream>
using namespace std;
lista_d_enc::lista_d_enc()
{
  this->primeiro=this->ultimo=nullptr;
}
void lista_d_enc::insert(Elemento *novo){
    if(this->primeiro == nullptr){
        this->primeiro = this->ultimo = novo;
    }
    else{
        this->ultimo->setNext(novo->getBefore());
        novo->setBefore(ultimo->getNext());
        this->ultimo = novo;
    }
}
Elemento* lista_d_enc::remove(int num){
    Elemento* aux = this->primeiro;
    cout<<"aaa";
   if(aux->getNum() == 2)
    return aux;
    /*
    if(aux == this->primeiro){
        aux->getNext()->setBefore(aux->getBefore());
        aux->setNext(aux->getNext()->getNext());
        this->primeiro = aux->getNext();
    }
    if(aux == this->ultimo){
        aux->getBefore()->setNext(aux->getNext());
        aux->setBefore(aux->getBefore()->getBefore());
        this->ultimo = aux->getBefore();
    }
    else{
        this->ultimo->setBefore(aux->getBefore());
        this->primeiro->setNext(aux->getNext());
        }

        return aux;
        */
}
