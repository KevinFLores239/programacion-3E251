#include <string>
#include <iostream>
#include <map>
using namespace std;
//sirve para acceder a datos por medio de una llave como si fuera un diccionario 

enum TipoPokemon{
    FUEGO,
    AGUA,
    ELECTRICO,
    PLANTA,
};

class Pokemon{
    private: 
    string nombre;
    int ataque;
    TipoPokemon tipo;

    public:
    Pokemon(string nombre, int ataque, TipoPokemon){
        this->nombre = nombre;
        this->ataque = ataque;
        this->tipo = tipo;
    }
};
int main(int argc, char const *argv[])
{
 map<int, Pokemon> pokedex;
 pokedex[1] = Pokemon("Bulbasour",1,TipoPokemon::PLANTA);
 pokedex[2] = Pokemon("Ivysaur",1,TipoPokemon::PLANTA);
 pokedex[3] = Pokemon("Venasaur",1,TipoPokemon::PLANTA);

 pokedex[1] = Pokemon("Charmander",1,TipoPokemon::FUEGO);
 pokedex[2] = Pokemon("Charmelon",1,TipoPokemon::FUEGO);
 pokedex[3] = Pokemon("Charizard",1,TipoPokemon::FUEGO);

 pokedex[1] = Pokemon("Squirtle",1,TipoPokemon::AGUA);
 pokedex[2] = Pokemon("Wartortle",1,TipoPokemon::AGUA);
 pokedex[3] = Pokemon("Blastoise",1,TipoPokemon::AGUA);

 map<string, string> diccionario;
 diccionario["programa"]= "Serie de elementos organizados";
 diccionario["aleatorio"]= "Depende del azar";



 
 
 
 
    return 0;
}