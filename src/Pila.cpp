/*
  Nombre: Gabriel Filtzer Gorbach

*/

#include "Pila.h"
#include "Nodo.h"

Pila::Pila()
{
  this->Tope=NULL;
}

Pila::Pila(int Dato)
{
    this->Tope = new Nodo(Dato);
}

bool Pila::PilaVacia()
{
  if(this->Tope==NULL)
    return true;
  return false;
}

int Pila::Pop()
{
  int dato=Tope->getDato();
    Tope=Tope->getSig();
    returno dato;
}

void Pila::Push(int Dato)
{
  Nodo* pusheo= new Nodo(Dato, Tope);
    Tope=pusheo;
}

void Pila::Vaciar()
{
    this->tope = NULL;
}

Nodo *Pila::getTope()
{
    return tope;
}

void Pila::Show()
{
  if(PilaVacia()==true){
    cout<< "La pila está vacía." <<endl;
    return;}
  Nodo *show = Tope;
      while(show!=NULL)
        {
          std::cout<<show->getDato()<<std::endl; 
		      show=show->getSig();
        }
}


