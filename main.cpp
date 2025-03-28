//#include "Foco.hpp"
#include "Serie.hpp"
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include <iostream>
using namespace std;
using namespace ftxui;
int main(int argc, char const *argv[])
{
auto pantalla = Screen::Create (
    Dimension::Full(),
    Dimension::Full()
);
auto documento = vbox(
    spinner(21,1)

);
Render(pantalla, documento);
pantalla.Print();
    //ftxui::Screen pantalla(10,10);
    
    Serie serienavidena;

    serienavidena.ApagarTodo();
    serienavidena.Imprimir();

    serienavidena.EncenderTodo();
    serienavidena.Imprimir();

    serienavidena.ApagarCantidad(8);
    serienavidena.Imprimir();

    serienavidena.EncenderCantidad(3);
    serienavidena.Imprimir();


    return 0;
}
