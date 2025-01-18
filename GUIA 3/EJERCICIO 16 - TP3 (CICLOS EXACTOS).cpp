///Ejercicio: 16
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

/*16) Dada una lista de 7 n�meros informar cual es el ante�ltimo y �ltimo n�mero
impar ingresado. Ejemplo 8, 4, -5, 6, 10, 5, 18, 0 se informa -5 y 5. */

int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numero, anteultimoImpar, ultimoImpar;


    for (i=0; i<7; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
        if ((numero%2)!=0)
        {
            // Actualizo el ante�ltimo impar
            anteultimoImpar = ultimoImpar;

            // Actualizo el �ltimo impar
            ultimoImpar = numero;
        }
    }
    cout<<"---------------------------"<<endl;
    cout<<"EL ANTEULTIMO IMPAR INGRESADO ES: "<<anteultimoImpar<<endl;
    cout<<"EL ULTIMO IMPAR INGRESADO ES: "<<ultimoImpar<<endl;




    system ("pause");
    return 0;

}
