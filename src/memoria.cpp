#include <string>
#include <iostream>

using namespace std;

int main()
{
    cout<<"int: "<<sizeof(int)<<" bytes "<<endl;
    cout<<"char: "<<sizeof(char)<<" bytes "<<endl;
    cout<<"float: "<<sizeof(float)<<" bytes "<<endl;
    cout<<"double: "<<sizeof(double)<<" bytes "<<endl;
    cout<<"bool: "<<sizeof(bool)<<" bytes "<<endl;

    cout<<"Operador Direccion"<<endl;
int a = 74, b = 185;
    
    cout<<"Direccion de a: "<<&a<<endl;
    cout<<"Direccion de b: "<<&b<<endl;

int * direccion = &a;
cout<<"Direccion a: "<<direccion<<endl;
cout<<*direccion<<endl;//imprime el valor a donde a punta 
cout<<&direccion<<endl;//imprime direccion del puntero 
cout<<sizeof(direccion)<<endl;//el peso
}