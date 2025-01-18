///Ejercicio: 22
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

/*22) Hacer un programa para ingresar un n�mero y luego informar la cantidad de divisores de
 ese n�mero.
Ejemplo 1. Si se ingresa 6 se listar�n: 4 divisores.
Ejemplo 2. Si se ingresa 9 se listar�n: 3 divisores.
Ejemplo 3. Si se ingresa 11 se listar�: 2 divisores.*/
int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numero, contadorDivisores = 0;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    for (i=1; i<=numero; i++)
    {
        if((numero%i)==0)
        {
            contadorDivisores++;
        }
    }

    cout<<"------------------"<<endl;
    cout<<"SU CANTIDAD DE DIVISORES ES DE: "<<contadorDivisores<<endl;

    system ("pause");
    return 0;

}
