///Ejercicio: 7
///Autor: Brandon Erazo
///Fecha: 17/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*7) Dada una lista de 10 n�meros cargarlos en un vector. Luego ingresar un n�mero e
informar el primer �ndice donde ese n�mero aparece en el vector. En caso de no aparecer se
mostrar� el valor �ndice igual a -1. */

int main ()
{
    int i, numeroBuscado, vecNumeros[10], indice=-1;
/// Cargar los n�meros en el vector
    for(i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>vecNumeros[i];
    }
// Ingresar el n�mero a buscar
    cout << "INGRESE EL NUMERO A BUSCAR: ";
    cin >> numeroBuscado;
 // Buscar el n�mero en el vector
    for (i = 0; i < 10; i++) {
        if (vecNumeros[i] == numeroBuscado) {
            indice = i;

        }
    }

    // Mostrar el resultado
    if (indice != -1) {
        cout<<"EL NUMERO APARECE POR PRIMERA VEZ EN EL INDICE: "<<indice<<endl;
    } else {
        cout<<"INDICE IGUAL A -1"<<endl;
    }



    system ("pause");
    return 0;

}
