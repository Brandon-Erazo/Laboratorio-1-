///Ejercicio: 20
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 3 - Ciclo Exacto

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/* 20) Hacer un programa para ingresar un n�mero y luego listar por pantalla cada uno de los
divisores de ese n�mero.
Ejemplo 1. Si se ingresa 6 se listar�n: 1, 2, 3 y 6
Ejemplo 2. Si se ingresa 9 se listar�n: 1, 3 y 9.
Ejemplo 3. Si se ingresa 11 se listar�n 1 y 11.*/

int main ()
{
///Declaro mi variables con el formato camelCase
    int i, numero;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;
    cout<<"-------------------"<<endl;
    cout<<"SUS DIVISORES SON: "<<endl;
    for(i=1; i<=numero; i++)
    {

        if ((numero%i)==0)
        {
            cout<<i<<endl;
        }
    }




    system ("pause");
    return 0;

}
