///Ejercicio:
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*6) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, luego informar cu�ntos son positivos y cu�ntos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar� Positivos: 4 Negativos: 2.*/

int main ()
{
///Declaro las variables con el formato camelCase
    int numero, contadorPositivos = 0, contadorNegativos = 0;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(numero!=0)
    {
        if (numero>0)
        {
            contadorPositivos++;
        }
        else
        {
            contadorNegativos++;
        }
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
    }

    cout<<"----------------------------------------------------------"<<endl;
    cout<<"LA CANTIDAD DE POSITIVOS ES DE: "<<contadorPositivos<<endl;
    cout<<"LA CANTIDA DE GEATIVOS ES DE: "<<contadorNegativos<<endl;

    system ("pause");
    return 0;

}
