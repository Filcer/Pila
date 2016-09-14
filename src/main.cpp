#include "Pila.h"
#include "Nodo.h"
using namespace std; 

int main()
{
    Pila p=Pila();
  int opcion, Dato;
  do{
    cout << "1. Agregar Dato" <<endl;
    cout << "2. Sacar Tope" <<endl;
    cout << "3. Mostrar Pila" <<endl;
    cout << "4. Verificar Pila Vacia" <<endl;
    cout << "5. Vaciar Pila" <<endl;
    cout << "0. Salir del Programa..." <<endl;
    cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Ingrese el Dato:" <<endl;
            cin>>Dato;
        p.Push(Dato);
            break;
        case 2:
        p.Pop();
                cout << p.Pop() <<endl;
            cout << "Se ha removido el primer dato" <<endl;
            break;
        case 3:
        p.Show();
            break;
        case 4:
          if((p.PilaVacia())==true)
            cout<<"La pila esta vacia."<<endl;
          else
        cout<<"La pila no esta vacia."<<endl;
            break;
        case 5:
            p.Vaciar();
                cout << "La pila ahora esta vacia" <<endl;
        case 0:
            break;
        default:
            cout << "Opcion incorrecta." << endl;
        }
    } while (opcion != 0);
    return 0;
}
