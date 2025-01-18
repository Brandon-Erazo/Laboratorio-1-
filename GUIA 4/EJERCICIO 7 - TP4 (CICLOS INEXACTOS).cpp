///Ejercicio: 7
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

/*7) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, luego informar el m�ximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.
Ejemplo: -5, -10, -20, -8, -55, -13, -55, -8, -15, -20, 0. Se listar� M�ximo -5.
 */

int main ()
{
///Declaro las variables con el formato camelCase
    int numero, maximo;
    bool banderaMaximo = true;///Le asigno un valor a la variable booleana

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(numero!=0) ///Mientras (numero sea distinto a 0)
    {
        if (banderaMaximo==true)
        {
            maximo=numero;
            banderaMaximo=false;
        }
        else
        {
            if (numero>maximo)
            {
                maximo=numero;
            }
        }
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
    }

    cout<<"----------------------"<<endl;
    cout<<"EL NUMERO MAXIMO ES: "<<maximo<<endl;

    system ("pause");
    return 0;

}
