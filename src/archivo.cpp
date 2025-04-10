#include <string>
#include <iostream>
#include <fstream>//sirve para un flujo de datos 
using namespace std;

int main(int argc, char const *argv[])

{
ofstream archivo;

//abrir archivo para lectura
archivo.open("archivo.txt");
if (!archivo.is_open())
{
    cerr<<"Error al abrir el archivo para escritura."<< endl;
    return 1;
}
cout <<"Escribiendo el archivo..."<< endl;
archivo<<"Hola mundo"<<endl;
archivo<<"Linea 2"<<endl;
archivo<<"Linea 3"<<endl;
archivo<<"Linea 4"<<endl;
archivo<<"Linea 5"<<endl;
archivo<<"Linea 6"<<endl;

ifstream archivoLectura("archivo.txt");
if (!archivoLectura.is_open())
{
    cerr<<"Error al abrir el archivo para la Lectura."<< endl;
    return 1;
}
cout<<"Leyendo el archivo de lectura..."<<endl;
string linea;
while(getline(archivoLectura, linea)){
    cout<<linea<<endl;
}

//cerrar archivo
archivoLectura.close();

return 0;
}