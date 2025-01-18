///Ejercicio: 19
///Autor: Brandon Erazo
///Fecha: 29/07/2024
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*19) Se define a un n�mero como primo cuando tiene solamente dos divisores: el n�mero 1
y el n�mero en s� mismo. Todo n�mero que tenga otros divisores adicionales al 1 y al
n�mero en s� mismo, son n�meros No Primos.
Ejemplo 1: 2, 7, 11, 13 son n�meros primos, ya que todos tienen solamente dos divisores.
Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2 3 y 6)
Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
Favor de no confundir n�mero primo con n�mero impar. Son dos conceptos
diferentes. El 9 no es primo. El 13 si es primo. Sin embargo, ambos son impares.
Hacer un programa para ingresar un n�mero y luego informar con un cartel aclaratorio si el
mismo es un n�mero primo o es n�mero no primo. */

int main ()
{
///Declarar las variables con el formato camelCase
    int numero, i=2;
    int contadorDivisores=0;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(i<numero)
    {
        if (numero%i==0)
        {
            contadorDivisores++;
        }
        i++;
    }
    if(contadorDivisores==0)
    {
        cout<<"-------------------"<<endl;
        cout<<"ES PRIMO"<<endl;
    }
    else
    {
        cout<<"-------------------"<<endl;
        cout<<"NO ES PRIMO"<<endl;
    }

    system ("pause");
    return 0;

}
