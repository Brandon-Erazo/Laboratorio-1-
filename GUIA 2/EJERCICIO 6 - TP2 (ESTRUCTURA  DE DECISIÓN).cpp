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
/*6) Hacer un programa para ingresar por teclado tres n�meros y luego determinar e informar
con una leyenda aclaratoria si los tres son iguales entre s�, caso contrario no emitir nada.
Ayuda: Si A es igual a B y B es igual a C, entonces A y C son iguales.*/

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

///Determino si los 3 numeros son iguales entre si
    if ((numeroUno==numeroDos)&&(numeroUno==numeroTres))
    {
        cout<<"LOS TRES NUMEROS SON IGUALES ENTRE SI"<<endl;
    }
    else
    {
        cout<<"LOS TRES NUMEROS NO SON IGUALES ENTRE SI"<<endl;
    }

    system ("pause");
    return 0;

}
