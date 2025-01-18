///Ejercicio: 9
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

/*9) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, luego informar el m�ximo y la posici�n del m�ximo en la lista. En caso de �empates�
considerar la primera aparici�n.
Ejemplo: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35 Posici�n 7.
Ejemplo: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listar� M�ximo 55 Posici�n 7.
Ejemplo: -25, -10, -20, -8, -25, -13, -55, -18, -55, 0. Se listar� M�ximo -8 Posici�n */

int main ()
{
///Declaro las variables con el formato camelCase
    int numero, posicion, maximo, i=1;
    bool banderaMaximo = true; ///Asignar un valor a la variable booleana

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(numero!=0) ///Mientras (numero sea distinto a 0)
    {
        if (banderaMaximo==true)
        {
            maximo=numero;
            posicion=i;
            banderaMaximo=false;
        }
        else
        {
            if (numero>maximo)
            {
                maximo=numero;
                posicion=i;
            }
        }
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
        i++;

    }

    cout<<"------------------------"<<endl;
    cout<<"EL MAXIMO NUMERO ES: "<<maximo<<" Y SU POSICION ES: "<<posicion<<endl;

    system ("pause");
    return 0;

}
