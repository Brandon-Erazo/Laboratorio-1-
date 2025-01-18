///Ejercicio: 20
///Autor: Brandon Erazo
///Fecha: 29/07/2023
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*20) Se define como divisores propios de un n�mero a aquellos que son sus divisores
excluyendo al n�mero en s� mismo.
Ejemplo. Los divisores propios del 4 son: 1 y 2.
Ejemplo. Los divisores propios del 12 son; 1, 2, 3, 4 y 6.
Se define a un n�mero como perfecto cuando la suma de todos sus divisores propios
coincide con el n�mero en s� mismo.
Ejemplo: 6 es n�mero perfecto pues 1+2+3=6
Ejemplo: 28 es n�mero perfecto pues 1+2+4+7+14=28
Ejemplo: 12 no es n�mero perfecto pues 1+2+3+4+6=16
Hacer un programa para ingresar un n�mero y luego informar con un cartel aclaratorio si el
mismo es un n�mero perfecto o es n�mero no perfecto.*/

int main ()
{
///Declaro las variables con el formato ca,elCase
    int numero, i=1, acumuladorDivisores=0;
    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while (i<numero)
    {
        if (numero%i==0)
        {
            acumuladorDivisores+=i;

        }
        i++;
    }
    if (acumuladorDivisores==numero)
    {
        cout<<"---------------------"<<endl;
        cout<<"EL NUMERO ES PERFECTO"<<endl;
    }
    else
    {
        cout<<"---------------------"<<endl;
        cout<<"EL NUMERO NO ES PERFECTO"<<endl;
    }

    system ("pause");
    return 0;

}