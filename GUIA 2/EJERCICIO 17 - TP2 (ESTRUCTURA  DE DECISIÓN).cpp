///Ejercicio: 17
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 2 - Estructura de decision

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*17) Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes obtenidas
por un alumno y luego emitir un solo cartel de acuerdo a las siguientes condiciones:
- �Promociona�, si obtuvo en los cuatro ex�menes nota 7 o m�s.
- �Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
- �Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes.
- �Recursa la materia�, si no aprob� ning�n examen parcial.
 */

int main ()
{
///Declaro mis variales con el formato camelCase
    int nota1, nota2, nota3, nota4;

///Ingreso las notas por teclado
    cout<<"INGRESE LA PRIMERA NOTA: ";
    cin>>nota1;
    cout<<"INGRESE LA SEGUNDA NOTA: ";
    cin>>nota2;
    cout<<"INGRESE LA TERCERA NOTA: ";
    cin>>nota3;
    cout<<"INGRESE LA CUARTA NOTA: ";
    cin>>nota4;

///Determinar el estado academico del usurio en base a las 4 notas
    if((nota1>=7) && (nota2>=7) && (nota3>=7) && (nota4>=7))
    {
        cout<<"PROMOCIONA"<<endl;
    }
    else
    {
        if((nota1<4) && (nota2<4) && (nota3<4) && (nota4<4))
        {
            cout<<"RECURSA LA MATERIA"<<endl;
        }
        else
        {
            if((nota1>=4) && (nota2>=4) && (nota3>=4) || (nota1>=4) && (nota2>=4) && (nota4>=4) || (nota1>=4) && (nota3>=4) && (nota4>=4) || (nota2>=4) && (nota3>=4) && (nota4>=4))
            {
                cout<<"RINDE FINAL"<<endl;
            }
            else
            {
                cout<<"RECUPERA PARCIALES"<<endl;
            }

        }
    }

    system ("pause");
    return 0;

}
