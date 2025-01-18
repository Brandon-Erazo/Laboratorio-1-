///Ejercicio: 25
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

/*25) Dada una lista de 7 n�meros informar el primer n�mero par ingresado y su ubicaci�n en la
lista y el �ltimo de los n�meros primos y su ubicaci�n en la lista.
Ejemplo 7, 4, 5, 6, 9, 13, 10 se informa Primer n�mero par: 4 ubicaci�n 2. Ultimo primo: 13
ubicaci�n 6.
Ejemplo 9, 5, 21, 9, 13, 15, 6 se informa Primer n�mero par: 6 ubicaci�n 7. Ultimo primo: 13
ubicaci�n 5.
 */

int main ()
{
///Declaro mi variables con el formato camelCase
    int i, x, numero, primerPar, posicion, ultimoPrimo, posicionPrimo;
    bool banderaPar = true;

    for (i=1; i<=7; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

        int contadorPrimos = 0;

        for (x=1; x<=numero; x++)
        {
            if ((numero%2)==0)
            {
                if (banderaPar==true)
                {
                    banderaPar=false;
                    primerPar=numero;
                    posicion = i;
                }
            }
            else
            {
                if ((numero%x)==0)
                {
                    contadorPrimos++;
                }
            }

        }
        if (contadorPrimos == 2)
        {
            ultimoPrimo = numero;
            posicionPrimo = i;
        }
    }

    cout<<"---------------------"<<endl;
    cout<<"EL PRIMER PAR ES: "<<primerPar<< " Y SU POSICION ES: "<<posicion<<endl;
    cout<<"EL ULTIMO PRIMO ES: "<<ultimoPrimo<< " Y SU POSICION ES: "<<posicionPrimo<<endl;

    system ("pause");
    return 0;

}
