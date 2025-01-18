///Ejercicio: 16
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

/*16) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, informar los 2 mayores valores ingresados, aclarando cual es el m�ximo y cual el que
le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado ser� 14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado ser� 14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado ser� -2 y -4*/

int main ()
{
///Declaro mis variables en el formato camleCase
    int numero, maximo, maximoAnterior;
    bool banderaMaximo= true;///Asignar un valor a la vraible booleana

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(numero!=0)
    {
        if (banderaMaximo==true)
        {
            maximo=numero;
            banderaMaximo=false;
        }
        else
        {
            if (numero>=maximo)
            {
                maximoAnterior=maximo;
                maximo=numero;
            }
        }

        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
    }

    cout<<"------------------------"<<endl;
    cout<<"EL MAXIMO ES: "<<maximo<<" Y EL QUE LE SIGUE ES: "<<maximoAnterior<<endl;

    system ("pause");
    return 0;

}
