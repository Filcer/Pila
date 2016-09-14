/*
	Nombre: Gabriel Filtzer Gorbach

*/


class Pila
{
private:
  Nodo *Tope;

public:
  Pila();
  Pila(int Dato);
  int Pop();
  void Push(int Dato);
  void Show();
  void Vaciar();
  Nodo *getTope();
  bool PilaVacia();
};
