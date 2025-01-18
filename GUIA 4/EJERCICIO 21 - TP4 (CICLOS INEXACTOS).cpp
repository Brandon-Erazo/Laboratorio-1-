///Ejercicio: 21
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

/*21) Dada una lista de n�meros que finaliza cuando se ingresa un cero, informar el primer
n�mero par ingresado y su ubicaci�n en la lista y el �ltimo de los n�meros primos y su
ubicaci�n en la lista.
Ejemplo 7, 4, 5, 6, 9, 13, 10, 0 se informa Primer n�mero par: 4 ubicaci�n 2. Ultimo primo:
13 ubicaci�n 6.
Ejemplo 9, 5, 21, 9, 13, 15, 6, 0 se informa Primer n�mero par: 6 ubicaci�n 7. Ultimo
primo: 13 ubicaci�n 5. */

int main ()
{
///Declaro las variables con el formato camelCase
    int numero, primerPar, posicionPar, primo, posicionPrimo;
    bool banderaPar=true;
    int i=1;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while (numero!=0)
    {
        if(numero%2==0)
        {
            if (banderaPar==true)
            {
                primerPar=numero;
                posicionPar=i;
                banderaPar=false;
            }
        }

        int x=2;
        int contadorDivisores=0;

        while (x<numero)
        {
            if (numero%x==0)
            {
                contadorDivisores++;

            }
            x++;
        }

        if (contadorDivisores==0)
        {
            primo=numero;
            posicionPrimo=i;
        }

        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
        i++;
    }

    cout<<"----------------------------------"<<endl;
    cout<<"EL PRIMER NUMERO PAR ES: "<<primerPar<<" Y SU POSICION ES: "<<posicionPar<<endl;
    cout<<"EL ULTIMO NUMERO PRIMO ES: "<<primo<< " Y SU POSICION ES: "<<posicionPrimo<<endl;

    system ("pause");
    return 0;

}
