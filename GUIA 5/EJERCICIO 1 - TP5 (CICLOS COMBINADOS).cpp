///Ejercicio: 1
///Autor: Brandon Erazo
///Fecha: 29/07/2024
///Comentario: Guia 5 - Ciclos Combinados

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*1) Hacer un programa para ingresar una lista de 10 n�meros y luego informar cuantos de
los n�meros ingresados son primos.
*/

int main ()
{
///Declaro mi variables con el formato camelCase
    int i, x, numero;
    int contadorDivisores;
    int contadorNumerosPrimosTotales=0;

    for (i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

        contadorDivisores=0;

        for(x=2; x<numero; x++)
        {
            if(numero%x==0)
            {
                contadorDivisores++;
            }
        }
        if(contadorDivisores==0)
            contadorNumerosPrimosTotales++;
    }

    cout<<"------------------"<<endl;
    cout<<"LA CANTIDAD DE NUMERO PRIMOS INGRESADOS ES DE: "<<contadorNumerosPrimosTotales<<endl;

    system ("pause");
    return 0;

}
