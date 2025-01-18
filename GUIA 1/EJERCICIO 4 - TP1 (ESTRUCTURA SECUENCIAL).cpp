///Ejercicio: 4
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 1 - Estructura Secuencial

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/* 4) Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un
avi�n y la cantidad de asientos ocupados y luego calcular e informar el porcentaje de
ocupaci�n y el porcentaje de no ocupaci�n del mismo.
Ejemplo si el avi�n tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de
ocupaci�n que se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%.
*/
int main ()
{
///Declaro mis variables con el formato camelCase
    int cantidadAsientosDisponibles, cantidadAsientosOcupados, cantidadAsientosNoOcupados;
    float porcentajeOcupacion, porcentajeNoOcupacion;

///Solicito al usuario que ingrese los datos por teclado
    cout<<"INGRESE LA CANTIDAD DE ASIENTOS DISPONIBLES DENTRO DEL AVION: ";
    cin>>cantidadAsientosDisponibles;
    cout<<"INGRESE LA CANTIDAD DE ASIENTOS OCUPADOS: ";
    cin>>cantidadAsientosOcupados;

///Realizo la operacion aritmetica (resta) para calcular la cantidad de asientos no ocupados
    cantidadAsientosNoOcupados = cantidadAsientosDisponibles - cantidadAsientosOcupados;

///Utilizo la regla de 3 simples para calcular el porcentaje de ocupacion y no ocupacion
    porcentajeOcupacion = (float) (cantidadAsientosOcupados * 100) / cantidadAsientosDisponibles;
    porcentajeNoOcupacion = (float) (cantidadAsientosNoOcupados * 100) / cantidadAsientosDisponibles;

///Informo el porcentaj de ocupacion y el porcentaje de no ocupacion del mismo
    cout<<"EL PORCENTAJE DE OCUPACION ES DE: "<<porcentajeOcupacion<<"%"<<endl;
    cout<<"EL PORCENTAJE DE NO OCUPACION ES DE: "<<porcentajeNoOcupacion<<"%"<<endl;





    system ("pause");
    return 0;

}
