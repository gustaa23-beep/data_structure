#ifndef LISTA_D_ENC_H
#define LISTA_D_ENC_H
#include"elemento.h"

class lista_d_enc
{
private:
    Elemento* primeiro,*ultimo;
public:
    lista_d_enc();
    virtual ~lista_d_enc(){
        if(this->primeiro!=nullptr)
            delete primeiro;
        if(this->ultimo!=nullptr)
            delete ultimo;
    }
    Elemento* getPrimeiro()const{return primeiro;}
    Elemento* getUltimo()const{return ultimo;}

    void insert(Elemento* novo);
    Elemento *remove(int num);
    Elemento* listar();
};

#endif // LISTA_D_ENC_H
