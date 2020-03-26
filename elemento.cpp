#include "elemento.h"

Elemento::Elemento()
{
   num = 0;
   this->next = nullptr;
   this->bef = nullptr;
}
Elemento::~Elemento(){
    if(this->next != nullptr)
        delete this->next;
    if(this->bef != nullptr)
        delete this->bef;
}
