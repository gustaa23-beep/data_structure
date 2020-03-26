#include <lista_d_enc.h>
#include<iostream>
using namespace std;
int menu(){
    cout<<"1-Incluir:"<<endl;
    cout<<"2-Remover:"<<endl;
    cout<<"3-Listar:"<<endl;
    cout<<"Digite a opcao:";
    int op;
    cin>>op;
    return op;
}
int main()
{
  Elemento *obj;
  lista_d_enc *l=new lista_d_enc;
  int num,op=menu();
  while(op!=0){
      switch(op){
          case 1:
              obj=new Elemento;
              cout<<"Digite o elemento:";
              cin>>num;
              obj->setNum(num);
              l->insert(obj);
              obj=0;
              break;
          case 2:
              cout<<"Digite o numero que deseja remover:";
              cin>>num;
              l->remove(num);
              delete obj;
                break;
          case 3:
              if(l->getPrimeiro()!=nullptr){
                for(int i=l->getPrimeiro()->getNum();i<=l->getUltimo()->getNum();i++){
                  cout<<""<<i<<endl;
                }
              }
              else{
                    cout<<"Lista vazia"<<endl;
              }
                break;
          default:
              cout<<"Opcao invalida!!!"<<endl;
                break;
      }
          op=menu();

  }
           return 0;
}
