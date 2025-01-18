///Ejercicio: 2
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 2 - Estructura de decisi�n

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/* 2) Hacer un programa para ingresar por teclado dos n�meros y luego informar por pantalla
con un cartel aclaratorio si el primer n�mero es m�ltiplo del segundo.
*/
int main ()
{
///Declaro mis variables con el formato camelCase
    int numeroUno, numeroDos;

///Ingreso por teclado los dos numeros
    cout<<"INGRESE EL PRIMER NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE EL SEGUNDO NUMERO: ";
    cin>>numeroDos;

///Utilizo la estructura condicional if, para saber si el primero numero es multiplo del segundo
    if ((numeroUno%numeroDos) == 0)
    {
        cout<<"EL PRIMER NUMERO ES MULTIPLO DEL SEGUNDO"<<endl;
    }
    else
    {
        cout<<"EL PRIMER NUMERO NO ES MULTIPLIO DEL SEGUNDO"<<endl;
    }


    system ("pause");
    return 0;

}
