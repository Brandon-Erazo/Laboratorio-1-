///Ejercicio: 27
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

/*27) Se dispone de una lista de 10 grupos de n�meros y cada uno de los grupos estar�
compuesto por 5 n�meros. Se pide determinar e informar:
a) Para cada uno de los 10 grupos la cantidad de n�meros positivos, negativos y
ceros que lo componen. Se informan 3 resultados para cada uno de los 10 grupos.
b) Para cada uno de los 10 grupos el �ltimo n�mero primo y en qu� orden apareci�
en ese grupo, si en un grupo no hubiera n�meros primos informarlo con un cartel
aclaratorio. Se informan 2 resultados para cada uno de los 10 grupos.
c) Informar cuantos n�meros impares hay en total entre los 10 grupos. Se informa un
resultado al final de todo, es decir no debe informar resultados grupo por grupo.*/

int main ()
{
///Declaro mis variables con el formato camelCase
    int i, y,z, numero, contadorImpares = 0;

    for (i=0; i<2; i++)
    {
        cout<<"GRUPO: "<<i+1<<endl;
        int contadorPositivos=0, contadorNegativos=0, contadorCeros=0;
        bool noHayPrimo=true;
        int ultimoPrimo, posicionPrimo;

        for(y=0; y<5; y++)
        {
            cout<<"INGRESE UN NUMERO: ";
            cin>>numero;
            ///Punto A
            if (numero>0)
            {
                contadorPositivos++;
            }
            if (numero<0)
            {
                contadorNegativos++;
            }
            if (numero==0)
            {
                contadorCeros++;
            }
            ///Punto C
            if ((numero%2)!=0)
            {
                contadorImpares++; ///contador general de impares
            }

            ///Punto B
            int contadorPrimos = 0;

            for(z=2; z<numero; z++)
            {
                if ((numero%z)==0)
                {
                    contadorPrimos++;
                }
            }
            if (contadorPrimos==0 && numero!=1 && numero!=0)
            {
                ultimoPrimo=numero;
                posicionPrimo = y+1;
                noHayPrimo = false;
            }



        }

        ///Punto A
        cout<<"LA CANTIDAD DE NUMEROS POSITIVOS ES: "<<contadorPositivos<<endl;
        cout<<"LA CANTIDAD DE NUMEROS NEGATIVOS ES: "<<contadorNegativos<<endl;
        cout<<"LA CANTIDAD DE NUMEROS CEROS ES: "<<contadorCeros<<endl;

        ///Punto B
        if (noHayPrimo==false)
        {
            cout << "EL ULTIMO PRIMO ES: " << ultimoPrimo << " Y SU POSICION ES: " << posicionPrimo << endl;
        }
        else
        {
            cout<<"No HAY NUMEROS PRIMOS EN ESTE GRUPO"<<endl;
        }
    }

///Punto C
    cout<<"LA CANTIDAD DE NUMEROS IMPARES EN TOTAL ES: "<<contadorImpares<<endl;

    system ("pause");
    return 0;

}
