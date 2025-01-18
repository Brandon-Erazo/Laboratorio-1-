///Ejercicio: 17
///Autor: Brandon Erazo
///Fecha: 18/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*17) Una empresa que fabrica 200 art�culos tiene la siguiente informaci�n para cada uno de
las ventas del mes anterior:
- C�digo de Art�culo (1 a 200)
- D�a (1 a 31)
- Cantidad vendida
Puede haber m�s de un registro para el mismo art�culo. El lote finaliza con un registro con
n�mero de art�culo igual a cero. Se pide determinar e informar:
a) Informar para cada c�digo de art�culo la cantidad total vendida en el mes.
b) Informar los d�as en los que no hubo ventas.
c) Informar los c�digos de los art�culos cuyas ventas en cantidad son mayores al promedio.*/

int main ()
{
    int i, codigoArticulo, dia, cantidadVendida, vecArticulos[200]={0};
    ///PUNTO B
    int vecDias[31]={0};
    ///PUNTO C
    int cantidadVentas=0 , suma=0;
    float promedio;

    cout<<"INGRESE EL CODIGO DE ARTICULO: ";
    cin>>codigoArticulo;
    while(codigoArticulo!=0)
    {
        cout<<"INGRESE EL DIA: ";
        cin>>dia;
        cout<<"INGRESE LA CANTIDAD VENDIDA: ";
        cin>>cantidadVendida;

        ///PUNTO A
        vecArticulos[codigoArticulo-1]+=cantidadVendida;

        ///PUNTO B
        vecDias[dia-1]=1;

        ///PUNTO C
        cantidadVentas++;
        suma+=cantidadVendida;

        cout<<"INGRESE EL CODIGO DE ARTICULO: ";
        cin>>codigoArticulo;
    }


    ///PUNTO A
    for(i=0; i<200; i++)
    {
        cout<<"LA CANTIDAD TOTAL VENDIDA DURANTE EL MES PARA EL ARTICULO "<<i+1<<" ES: "<<vecArticulos[i]<<endl;
    }

    ///PUNTO B
    for(i=0; i<31; i++)
    {
        if(vecDias[i]==0)
        {
            cout<<"EN EL DIA "<<i+1<<" NO HUBO VENTAS"<<endl;
        }

    }

    ///PUNTO C
    promedio= (float)suma/cantidadVentas;

    for(i=0; i<200;i++){
        if(vecArticulos[i]>promedio){
            cout<<"ESTE CODIGO DE ARTICULO "<<i+1<<" TUVO MAYOR CANTIDAD DE VENTAS AL PROMEDIO"<<endl;
        }
    }

    system ("pause");
    return 0;

}
