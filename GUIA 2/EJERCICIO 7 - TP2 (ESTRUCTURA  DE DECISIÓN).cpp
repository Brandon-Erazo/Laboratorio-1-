///Ejercicio:
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

/*7) Hacer un programa para ingresar por teclado tres n�meros e informar con una leyenda
aclaratoria si los tres son todos distintos entre s�, caso contrario no emitir nada.
Ayuda: Si A es distinto de B y B es distinto de C, es no s�gnica que A y C sean distintos.
Ejemplo: A=8, B=6 y C=8.*/

int main ()
{
///Declaro mis variables con el formato camelCase
    int numeroUno, numeroDos, numeroTres;

///Ingreso los tres numeros por teclado
    cout<<"INGRESE EL PRIMER NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE EL SEGUNDO NUMERO: ";
    cin>>numeroDos;
    cout<<"INGRESE EL TERCER NUMERO: ";
    cin>>numeroTres;

///Determinar si los 3 numeros son distintos entre si
    if ((numeroUno!=numeroDos)&&(numeroDos!=numeroTres)&&(numeroUno!=numeroTres))
    {
        cout<<"LOS TRES NUMEROS SON DISTINTOS ENTRE SI"<<endl;
    }





    system ("pause");
    return 0;

}
