///Ejercicio: 12
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

/*12) Hacer un programa para ingresar una lista 10 n�meros e informar el m�ximo de los
negativos y el m�nimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. M�ximo Negativo -3. M�nimo Positivo 2 */

int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numero, maximoNegativo, minimoPositivo;
    bool maxNegativo = true, minPositivo = true; ///A las varibles booleanas les asigno su valor


    for (i=0; i<10; i++)
    {
///Ingreso los numeros por consola
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

        if (numero>0)
        {

            if(minPositivo==true)
            {
                minimoPositivo = numero;
                minPositivo = false;
            }
            else
            {
                if(numero<minimoPositivo)
                {
                    minimoPositivo = numero;
                }
            }
        }
        else
        {
            if (maxNegativo==true)
            {
                maximoNegativo=numero;
                maxNegativo=false;
            }
            else
            {
                if(numero>maximoNegativo)
                {
                    maximoNegativo =numero;
                }
            }
        }
    }
///Informo el minimo positivo y el maximo negativo por pantalla
    cout<<"-----------------------"<<endl;
    cout<<"EL MAXIMO NEGATIVO ES: "<<maximoNegativo<<endl;
    cout<<"EL MINIMO POSITIVO ES: "<<minimoPositivo<<endl;






    system ("pause");
    return 0;

}
