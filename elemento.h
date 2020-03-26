#ifndef ELEMENTO_H
#define ELEMENTO_H


class Elemento
{
private:
    int num;
    Elemento* bef, *next;
public:
    Elemento();
    virtual ~Elemento();
    Elemento* getNext()const{return next;}
    Elemento* getBefore()const{return bef;}
    int getNum()const{return num;}

    void setNext(Elemento* next){this->next=next;}
    void setBefore(Elemento* bef){this->bef=bef;}
    void setNum(int num){this->num=num;}
};

#endif // ELEMENTO_H
