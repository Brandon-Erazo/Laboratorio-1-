///Ejercicio: 3
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 4 - Ciclos Inexactos

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*3) Hacer un programa para mostrar por pantalla los n�meros del 20 al 1 en orden
decreciente.
Importante: El programa no tiene ning�n ingreso de datos. */

int main ()
{
///Declaro la varibale i (iteraci�n)
    int i = 20;

    while (i>0)
    {
        cout<<i<<endl;
        cout<<"----------"<<endl;
        i--;
    }

    system ("pause");
    return 0;

}
