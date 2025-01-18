///Ejercicio:PUNTO 2 DEL  1ER PARCIAL | 1 CUATRIMESTRE 2023 |
///Autor: Brandon Erazo
///Fecha: 06/08/2024
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca est�ndar (STL)
///del lenguaje de programaci�n C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento est�tico y de subproceso
///y, despu�s, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*La Federaci�n de Atletismo tiene un conjunto de registros con los equipos  y atletas
que participaron de las competencias durante el �ltimo mes. Cada registro tiene los siguientes datos:
- N�mero de Equipo
- N�mero de atleta
- Edad
- Cantidad de competencias en las que particip�
Los registros se encuentran agrupados por n�mero de equipo. Por cada equipo hay 5 atletas; el total de equipos es de 4.
Se pide desarrollar un programa en CodeBlocks para resolver los siguientes puntos:
1. Por cada equipo la cantidad de competencias en las que particip� entre todos sus atletas
2. La cantidad de atletas (entre todos los equipos) con 20 a�os.
3. El n�mero de atleta que particip� en m�s cantidad de competencias, indicando a que equipo pertenece.
*/

int main (){
///Delcaro mis variables con el formato camelCase
int i, x, numeroEquipo, numeroAtleta, edad, cantidadDeCompetenciasParticipativas;
///PUNTO 1
int anteriorEquipo, acumuladorDeCompetenciasPorGrupo=0;
///PUNTO 2
int contadorAtletasCon20=0;
///PUNTO 3
int mayorCantidadDeCompetencias=0, mayorNumeroAtleta, MayorEquipoConCompetencias;

for(i=0;i<4;i++){///4 EQUIPOS
    ///PUNTO 1
    acumuladorDeCompetenciasPorGrupo=0;


    for(x=0;x<5;x++){///5 JUGADORES

    cout<<"INGRESE EL NUMERO DEL EQUIPO: ";
    cin>>numeroEquipo;
    cout<<"INGRESE EL NUMERO DEL ATLETA: ";
    cin>>numeroAtleta;
    cout<<"INGRESE LA EDAD DEL ATLETA: ";
    cin>>edad;
    cout<<"INGRESE LA CANTIDAD DE COMPETENCIAS EN LAS QUE PARTICIPO: ";
    cin>>cantidadDeCompetenciasParticipativas;

    ///PUNTO 1
    acumuladorDeCompetenciasPorGrupo+=cantidadDeCompetenciasParticipativas;
    anteriorEquipo=numeroEquipo;

    ///PUNTO 2
    if(edad==20){
        contadorAtletasCon20++;
    }

    ///PUNTO 3
    if(cantidadDeCompetenciasParticipativas>mayorCantidadDeCompetencias){
        mayorCantidadDeCompetencias=cantidadDeCompetenciasParticipativas;
        mayorNumeroAtleta=numeroAtleta;
        MayorEquipoConCompetencias=numeroEquipo;
    }


    }
    ///PUNTO 1
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"PARA EL GRUPO "<<anteriorEquipo<<" SU CANTIDAD DE COMPETENCIAS EN LAS QUE PARTICIPO ENTRE TODOS SUS ATLETAS ES DE: "<<acumuladorDeCompetenciasPorGrupo<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;

}
    ///PUNTO 2
    cout<<"LA CANTIDAD DE ATLETAS CON 20 ANIOS ES DE: "<<contadorAtletasCon20<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    ///PUNTO 3
    cout<<"EL NUMERO DE ATLETA CON MAS COMPETENCIAS ES: "<<mayorNumeroAtleta<<" Y PERTENECE AL EQUIPO: "<<MayorEquipoConCompetencias<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;


system ("pause");
return 0;

}
