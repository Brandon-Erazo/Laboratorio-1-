///Ejercicio: 4
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

/*4) Hacer un programa para que el usuario ingrese un n�mero positivo y que luego se
muestren por pantalla los n�meros entre el 1 y el n�mero ingresado por el usuario.
Ejemplo. Si el usuario ingresa 15, se mostrar�n los n�meros entre el 1 y el 15.
 */

int main ()
{
///Declaro mis variables con el formato camelCase
    int i = 2, numero;

///Ingreso un numero por teclado
    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(i<numero)
    {
        cout<<i<<endl;
        cout<<"---------"<<endl;
        i++;
    }

    system ("pause");
    return 0;

}
