///Ejercicio: 2
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

/*2) Hacer un programa para mostrar por pantalla los n�meros del 1 al 20 salteando de a 3
elementos. Es decir: 1, 4, 7, 10, 13, 16, 19.
Importante: El programa no tiene ning�n ingreso de datos. */

int main ()
{
///Delcaro la variable i (iteraci�n)
    int i = 1;

    while (i<=20)
    {
        cout<<i<<endl;
        cout<<"---------"<<endl;
        i = i + 3;
    }

    system ("pause");
    return 0;

}
