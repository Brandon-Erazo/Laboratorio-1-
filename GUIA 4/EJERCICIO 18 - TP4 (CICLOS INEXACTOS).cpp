///Ejercicio: 18
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

/*18) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresan
dos n�meros positivos consecutivos, y luego informar el m�ximo. Cuando se ingresa el
n�mero positivo repetido el mismo debe ser descartado.
Ejemplo: 5, -10, 20, -8, 0, 13, -35, -8, 15, 10. Se listar� M�ximo 20.
En este caso, el segundo n�mero positivo consecutivo, el 10, no se analiza, solo sirve para
finalizar el ingreso.
Ejemplo: 5, -10, 20, -20, 0, 55, -13, 45, -8, -5, 12, 120. Se listar� M�ximo 55.
En este caso, el segundo n�mero positivo consecutivo, el 120, no se analiza, solo sirve para
finalizar el ingreso */

int main ()
{
///Declaro las variables con el formato camelCase
    int numero, maximo, contadorPositivosContinuos=0;
    bool banderaMaximo = true;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    if (numero>0)
    {
        contadorPositivosContinuos++;
    }
    else
    {
        contadorPositivosContinuos=0;
    }
    while (contadorPositivosContinuos<2)
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

        if (numero>0)
        {
            contadorPositivosContinuos++;
        }
        else
        {
            contadorPositivosContinuos=0;
        }
    }

    cout<<"---------------------------"<<endl;
    cout<<"EL MAXIMO ES: "<<maximo<<endl;

    system ("pause");
    return 0;

}
