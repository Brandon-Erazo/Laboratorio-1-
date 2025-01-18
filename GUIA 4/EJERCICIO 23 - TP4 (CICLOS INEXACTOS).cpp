///Ejercicio: 23
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

/*23) Hacer un programa que consulte una contrase�a, el usuario solo tiene derecho a 3
intentos. Cuando el usuario escriba la contrase�a correcta, por ejemplo: 1234, se imprimir�
�Bienvenido� y finalizara el programa. En caso de no escribir la correcta se imprimir�:
�Contrase�a inv�lida�. Si se cumplen 3 intentos y el usuario no escribe la contrase�a
correcta se imprimir�: �Intentos agotados� y finaliza la ejecuci�n del programa.*/

int main ()
{
///Declaro mis variables con el formato camelCase
    const int contraseniaCorrecta = 1234;
    int contraseniaIngresada, intentos =0;

    while (intentos < 3 && contraseniaIngresada != contraseniaCorrecta)
    {
        cout << "INGRESE SU CONTRASE�A: ";
        cin >> contraseniaIngresada;

        if (contraseniaIngresada != contraseniaCorrecta)
        {
            cout << "CONTRASE�A INVALIDA." << endl;
        }

        intentos++;
    }

    if (contraseniaIngresada == contraseniaCorrecta)
    {
        cout << "BIENVENIDO!" << endl;
    }
    else
    {
        cout << "INTENTOS AGOTADOS." << endl;
    }





    system ("pause");
    return 0;

}
