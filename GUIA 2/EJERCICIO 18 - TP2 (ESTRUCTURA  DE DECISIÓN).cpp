///Ejercicio: 18
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

/*18) Hacer un programa para ingresar por teclado cuatro n�meros. Si los valores que se
ingresaran est�n ordenados en forma creciente, emitir el mensaje �Conjunto Ordenado�, caso
contrario emitir el mensaje: �Conjunto Desordenado�.
Ejemplo 1: si los n�meros que se ingresan son 8,10, 12 y 14, entonces est�n ordenados.
Ejemplo 2: si los n�meros que se ingresan son 8,12, 12 y 14, entonces est�n ordenados.
Ejemplo 3: si los n�meros que se ingresan son 10, 8,12 y 14, entonces est�n desordenados. */

int main ()
{
///Declaro mis variables con el formato camelCase
    int numeroUno, numeroDos, numeroTres, numeroCuatro;

///Ingreso los numeros por teclado
    cout<<"INGRESE EL PRIMER NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE EL SEGUNDO NUMERO: ";
    cin>>numeroDos;
    cout<<"INGRESE EL TERCER NUMERO: ";
    cin>>numeroTres;
    cout<<"INGRESE EL CUARTO NUMERO: ";
    cin>>numeroCuatro;

///Determinar si los numeros ingresados son un conjunto ordenado o desordenado
    if ((numeroUno<=numeroDos) && (numeroDos<=numeroTres) && (numeroTres<=numeroCuatro))
    {
        cout<<"CONJUNTO ORDENADO"<<endl;
    }
    else
    {
        cout<<"CONJUNTO DESORDENADO"<<endl;
    }

    system ("pause");
    return 0;

}
