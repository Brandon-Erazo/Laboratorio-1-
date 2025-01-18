///Ejercicio: 13
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

/*13) Hacer un programa para ingresar una lista de 10 n�meros, luego informar el m�ximo
de los pares.
Ejemplo: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20. Se listar� M�ximo 36.
Ejemplo: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20. Se listar� M�ximo 4.
Ejemplo: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20. Se listar� M�ximo -8. */

int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numero, maximoPar;
    bool banderaPar = true;

    for (i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
        if((numero%2)==0)
        {
            if(banderaPar==true)
            {
                maximoPar = numero;
                banderaPar = false;
            }
            else
            {
                if (numero>maximoPar)
                {
                    maximoPar = numero;
                }
            }
        }
    }
///Informo el maximo par
    cout<<"-----------------------"<<endl;
    cout<<"EL MAXIMO PAR ES: "<<maximoPar<<endl;



    system ("pause");
    return 0;

}
