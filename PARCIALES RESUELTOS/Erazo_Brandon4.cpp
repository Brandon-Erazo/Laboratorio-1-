///Ejercicio: PUNTO 4 | MODELO PARCIAL 1 2023 | 2 CUATRIMESTRE 2023
///Autor: Brandon Erazo
///Fecha:
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*Cada una de las estaciones meteorol�gicas del Gran Buenos Aires obtuvo tres registros clim�ticos en el d�a de ayer. Por cada registro se
obtuvo:
N�mero de estaci�n meteorol�gica (entero)
Hora (entero entre 0 y 23)
Temperatura (float)
Mil�metros de lluvia (float)
La informaci�n se encuentra agrupada por estaci�n meteorol�gica. Para indicar el fin de la carga de informaci�n se ingresa un n�mero de
estaci�n meteorol�gica igual a cero. Se pide calcular e informar:
A) El promedio de temperatura general (entre todas las mediciones).
B) La cantidad de registros (cada medici�n es un registro) en donde no se registraron lluvias en el horario comprendido entre las 6 y las 12
(incluyendo los extremos).
C) Por cada estaci�n meteorol�gica, indicar la temperatura m�nima y el horario en que se registr� dicha temperatura.
 */

int main ()
{
    int i, numeroEstacionMeteorologica, hora;
    float temperatura, milimetrosDeLluvia;
    ///PUNTO A
    float acumuladorDeTemperatura=0, promedio;
    int contadorTemperatura=0;
    ///PUNTO B
    int registrosSinLluvia=0;
    ///PUNTO C
    int numeroEstacionMeteorologicaAnterior, minimaHora;
    float minimaTemperatura;
    bool banderaMinimaTemperatura=true;

    cout<<"INGRESE EL NUMERO DE ESTACION METEOROLOGICA: ";
    cin>>numeroEstacionMeteorologica;
    while(numeroEstacionMeteorologica!=0)
    {
        banderaMinimaTemperatura=true; ///Es necesario que se actualize para cada estacion meteorologica
        for(i=1; i<=3; i++)
        {
            cout<<"INGRESE LA HORA: ";
            cin>>hora;
            cout<<"INGRESE LA TEMPERATURA: ";
            cin>>temperatura;
            cout<<"INGRESE LOS MILIMITROS DE LLUVIA: ";
            cin>>milimetrosDeLluvia;
            ///PUNTO A
            contadorTemperatura++;
            acumuladorDeTemperatura+=temperatura;

            ///PUNTO B
            if (milimetrosDeLluvia==0){
                if((hora>=6)&&(hora<=12)){
                   registrosSinLluvia++;
                   }
            }

            ///PUNTO C
            if(banderaMinimaTemperatura==true){
                minimaTemperatura=temperatura;
                minimaHora=hora;
                banderaMinimaTemperatura=false;
            }
            else{
                if(temperatura<minimaTemperatura){
                    minimaTemperatura=temperatura;
                    minimaHora=hora;
                }
            }
            numeroEstacionMeteorologicaAnterior=numeroEstacionMeteorologica; ///IMPORTANTE PARA SABER EL NUMERO DE ESTACION METEOROLOGICA ANTES DE QUE SE INGRESE UNA NUEVA.

            cout<<"INGRESE EL NUMERO DE ESTACION METEOROLOGICA: ";
            cin>>numeroEstacionMeteorologica;
        }
        cout<<"---------------------------------"<<endl;
        cout<<"PARA LA ESTACION METEOROLOGICA: "<<numeroEstacionMeteorologicaAnterior<<endl;
        cout<<"SU TEMPERATURA MINIMA ES: "<<minimaTemperatura<<" EN EL HORARIO DE LAS: "<<minimaHora<<endl;
        cout<<"---------------------------------"<<endl;
    }
    ///PUNTO A
    promedio= (float)acumuladorDeTemperatura/contadorTemperatura;
    cout<<"---------------------------------------"<<endl;
    cout<<"EL PROMEDIO DE TEMPERATURA GENERAL ES: "<<promedio<<endl;
    cout<<"---------------------------------------"<<endl;

    ///PUNTO B
    cout<<"--------------------------------------------------------------"<<endl;
    cout<<"LA CANTIDAD DE MEDICIONES SIN LLUVIA ENTRE LAS 6 Y LAS 12 ES: "<<registrosSinLluvia<<endl;
    cout<<"--------------------------------------------------------------"<<endl;


    system ("pause");
    return 0;

}
