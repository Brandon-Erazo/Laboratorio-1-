///Ejercicio: 9
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

/*9) Hacer un programa para ingresar tres n�meros y listar el m�ximo de ellos. */

int main ()
{
///Declaro mis variables con el formato camelCase
    int numeroUno, numeroDos, numeroTres, maximo;

///Ingreso los tres numeros por teclado
    cout<<"INGRESO EL PRIMER NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESO EL SEGUNDO NUMERO: ";
    cin>>numeroDos;
    cout<<"INGRESO EL TERCER NUMERO: ";
    cin>>numeroTres;

///Busco el maximo entre los tres numero
    maximo = numeroUno;
    if(numeroDos>maximo)
    {
        maximo = numeroDos;
    }
    if (numeroTres>maximo)
    {
        maximo = numeroTres;
    }



    cout<<"EL NUMERO MAXIMO ES: "<<maximo<<endl;


    system ("pause");
    return 0;

}
