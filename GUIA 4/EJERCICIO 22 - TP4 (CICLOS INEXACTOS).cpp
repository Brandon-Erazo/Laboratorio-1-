///Ejercicio: 22
///Autor: Brandon Erazo
///Fecha: 03/08/2024
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*22) Hacer un programa para ingresar un n�mero y mostrarlo separado cifra por cifra.
El orden en el cual se muestran las cifras es indiferente.
Ejemplo: Si se ingresa 45125 se mostrar� por pantalla 4, 5, 1, 2, 5 o 5, 2, 1, 5, 4.*/

int main ()
{
///Declaro mis variable con el formato camelCase
    int numero, digito;

    cout << "INGRESE UN NUMERO: ";
    cin >> numero;

    cout << "LAS CIFRAS DEL NUMERO SON: ";

    while (numero != 0)
    {
        digito = numero % 10; // Obtenemos el �ltimo d�gito
        cout << digito << " ";
        numero /= 10; // Eliminamos el �ltimo d�gito del n�mero
    }

    cout << endl;





    system ("pause");
    return 0;

}
