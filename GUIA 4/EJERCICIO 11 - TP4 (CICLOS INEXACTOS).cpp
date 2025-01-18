///Ejercicio: 11
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

/*11) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, informar el m�ximo de los negativos y el m�nimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0. M�ximo Negativo -3. M�nimo Positivo 2.
 */

int main ()
{
///Declaro las variables con el formato camelCase
    int numero, minimoPositivo, maximoNegativo;
    bool banderaPositivo=true, banderaNegatvio=true;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while (numero!=0)///Mientras (numero sea distinto a 0)
    {
        if (numero>0)
        {
            if (banderaPositivo==true)
            {
                minimoPositivo=numero;
                banderaPositivo=false;
            }
            else
            {
                if (numero<minimoPositivo)
                {
                    minimoPositivo=numero;
                }
            }
        }
        else
        {
            if (banderaNegatvio==true)
            {
                maximoNegativo=numero;
                banderaNegatvio=false;
            }
            else
            {
                if (numero>maximoNegativo)
                {
                    maximoNegativo= numero;
                }
            }
        }

        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
    }

    cout<<"----------------------"<<endl;
    cout<<"EL MAXIMO NEGATVIO Y MINIMO POSITIVO RESPECTIVAMENTE SON: "<<maximoNegativo<<" Y "<<minimoPositivo<<endl;

    system ("pause");
    return 0;

}
