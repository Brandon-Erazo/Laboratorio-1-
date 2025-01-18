///Ejercicio: 26
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 3 - Ciclo Exacto

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*26) Dada una lista de 10 n�meros informar la cantidad de duplas de n�meros impares
consecutivos.
Ejemplo: 12, 3, 5, 7, 6, 9, 13, 10, 7, -5. En esta lista las duplas son: 3:5, 5:7, 9:13, 7:-5 por lo
tanto se informar� que hay 4 duplas de n�meros impares consecutivos.
 */

int main ()
{
///Declaro mi variables con el formato camelCase
    int i, numero, posicionAnterior, contadorDuplas =0;
    bool primerImpar= true, impares = true;

    for (i=1; i<=10; i++)
    {

        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

        if((numero%2)!=0)
        {
            if(primerImpar==true)
            {
                posicionAnterior=i;
                primerImpar = false;
            }
            else
            {
                if (impares == true)
                {
                    if ((posicionAnterior +1) == i)
                    {
                        contadorDuplas++;
                        posicionAnterior=i;
                    }
                    else
                    {
                        posicionAnterior=i;
                    }
                }
            }
        }
    }

    cout<<"----------------------------"<<endl;
    cout<<"LA CANTIDAD DE DUPLAS DE IMPARES ES: "<<contadorDuplas<<endl;

    system ("pause");
    return 0;

}
