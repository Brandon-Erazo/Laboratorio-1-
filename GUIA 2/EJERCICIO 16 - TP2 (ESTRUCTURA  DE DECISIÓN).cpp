///Ejercicio: 16
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 2 - Estructura de decision

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*16) Un a�o es bisiesto si es m�ltiplo de 4, exceptuando a los a�os que son m�ltiplos de 100
pero que no sean m�ltiplos de 400. Esto �ltimo significa que el a�o 1900 no es bisiesto, pero
el a�o 2000 si lo es.
Hacer un programa para que ingresar un a�o y listar por pantalla si es bisiesto o no lo es.
Ejemplo 1. Si se ingresa el a�o 2020 se indicar� como bisiesto.
Ejemplo 2. Si se ingresa el a�o 2019 se indicar� como no bisiesto.
Ejemplo 3. Si se ingresa el a�o 1800 o 1900 se indicar� como no bisiesto.
Ejemplo 4. Si se ingresa el a�o 1600 o 2000 se indicar� como bisiesto. */

int main ()
{
///Declaro mis variables con el formato camelCase
    int anio;

///Ingreso el a�o por teclado
    cout<<"INGRESE EL ANIO: ";
    cin>>anio;

///Determinar si el a�o es o no bisiesto segun la condicion logica
    if ((anio%4==0) && (anio%100!=0)||(anio%400==0))
    {
        cout<<"BISIESTO"<<endl;
    }
    else
    {
        cout<<"NO ES BISIESTO"<<endl;
    }



    system ("pause");
    return 0;

}
