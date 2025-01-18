///Ejercicio: 10
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

/*10) Hacer un programa para ingresar cinco n�meros. Se pide luego resolver como tres casos
diferentes:
a) Listar el m�ximo
b) Listar el m�nimo
c) Listar el m�ximo y el m�nimo.*/

int main ()
{
///Delcaro mis variables con el formato camelCase
    int numeroUno, numeroDos, numeroTres, numeroCuatro, numeroCinco, maximo, minimo;

///Ingreso los cinco numeros por teclado
    cout<<"INGRESE EL PRIMER NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE EL SEGUNDO NUMERO: ";
    cin>>numeroDos;
    cout<<"INGRESE EL TERCER NUMERO: ";
    cin>>numeroTres;
    cout<<"INGRESE EL CUARTO NUMERO: ";
    cin>>numeroCuatro;
    cout<<"INGRESE EL QUINTO NUMERO: ";
    cin>>numeroCinco;

///Busco el maximo y minimo punto a, b y c
    if(numeroUno>numeroDos)
    {
        maximo = numeroUno;
        minimo =numeroDos;
    }
    else
    {
        maximo = numeroDos;
        minimo = numeroUno;
    }
    if (numeroTres>maximo)
    {
        maximo = numeroTres;
    }
    else
    {
        if (numeroTres<minimo)
        {
            minimo = numeroTres;
        }
    }
    if(numeroCuatro>maximo)
    {
        maximo = numeroCuatro;
    }
    else
    {
        if (numeroCuatro<minimo)
        {
            minimo = numeroCuatro;
        }
    }
    if (numeroCinco>maximo)
    {
        maximo = numeroCinco;
    }
    else
    {

        if (numeroCinco<minimo)
        {
            minimo = numeroCinco;
        }

    }
///Informo el maximo y el minimo por pantalla
    cout<<"EL MAXIMO ES: "<<maximo<<endl;
    cout<<"EL MINIMO ES: "<<minimo<<endl;
    cout<<"EL MAXIMO Y MINIMO SON RESPECTIVAMENTE: "<<maximo <<" Y "<<minimo<<endl;

    system ("pause");
    return 0;

}
